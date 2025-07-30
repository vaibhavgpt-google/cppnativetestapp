#include <jni.h>
#include <string>
#include <cassert>
#include <android/log.h>

#include "gni/gni.h"
#include "gni/gni_task.h"
#include "pgs/pgs_play_games.h"
#include "java/lang/string.h"
#include "pgs/pgs_games_sign_in_client.h"
#include "pgs/pgs_achievements_client.h"
#include "android/content/intent.h"
#include "playgamesclient.h"

#define LOG_TAG "CPP_NATIVE"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

// Global JVM pointer
JavaVM *g_java_vm = nullptr;

// Called from Java to initialize and fetch player ID asynchronously
extern "C"
JNIEXPORT void JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_getPlayerIdNative(
        JNIEnv *env,
        jobject main_activity,
        jobject java_callback_obj) {

    getPlayerId(env, main_activity, java_callback_obj);
}

extern "C" JNIEXPORT void JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_requestServerSideAccessNative(
        JNIEnv *env,
        jobject main_activity,
        jstring server_client_id_jstr, // Corrected type: jstring
        jboolean force_refresh,        // Corrected type: jboolean
        jobject java_callback_obj) {

    if (g_java_vm == nullptr) {
        if (env->GetJavaVM(&g_java_vm) != JNI_OK) {
            LOGE("GetJavaVM failed");
            return;
        }
    }

    // Initialize GNI Library. Safe to call multiple times.
    GniCore_init(g_java_vm, main_activity);

    const PgsGamesSignInClient *sign_in_client =
            PgsPlayGames_getGamesSignInClient(main_activity);
    if (!sign_in_client) {
        LOGE("Failed to get GamesSignInClient");
        // TODO: Invoke callback with error
        return;
    }

    // Wrap the jstring into GNI's String type
    String* server_client_id_gni = String_wrapJniReference(server_client_id_jstr);
    if (!server_client_id_gni) {
        LOGE("Failed to wrap server_client_id_jstr");
        // TODO: Invoke callback with error
        return;
    }

    // Call the asynchronous method
    GniTask *request_access_task =
            PgsGamesSignInClient_requestServerSideAccess(
                    sign_in_client, server_client_id_gni, force_refresh);

    String_destroy(server_client_id_gni); // Destroy the GNI string

    if (!request_access_task) {
        LOGE("Failed to start requestServerSideAccess task");
        // TODO: Invoke callback with error
        return;
    }

    jobject global_callback = env->NewGlobalRef(java_callback_obj);

    GniTask_addOnCompleteCallback(
            request_access_task,
            [](GniTask *task, void *user_data) {
                jobject callback_obj = static_cast<jobject>(user_data);
                JNIEnv *env = nullptr;

                if (g_java_vm->AttachCurrentThread(&env, nullptr) != JNI_OK) {
                    LOGE("Failed to attach current thread to JVM");
                    return;
                }

                jclass callback_class = env->GetObjectClass(callback_obj);
                jmethodID on_result_method = env->GetMethodID(
                        callback_class, "onServerSideAccessResult",
                        "(Ljava/lang/String;Ljava/lang/String;)V");

                jstring auth_code_jstring = nullptr;
                jstring error_jstring = nullptr;

                if (!GniTask_isSuccessful(task)) {
                    const char *error_message = nullptr;
                    GniTask_getErrorMessage(task, &error_message);
                    LOGE("Error requesting server side access: %s", error_message ? error_message : "Unknown");
                    error_jstring = env->NewStringUTF(error_message ? error_message : "Unknown GNI task error");
                    if (error_message) GniString_destroy(error_message);
                } else {
                    const char *auth_code = nullptr;
                    GniTaskErrorCode result_code = PgsGamesSignInClient_requestServerSideAccess_getResult(task, &auth_code);

                    if (result_code == GNI_TASK_SUCCESS && auth_code != nullptr) {
                        LOGI("Server side access auth code received.");
                        auth_code_jstring = env->NewStringUTF(auth_code);
                        GniString_destroy(auth_code);
                    } else {
                        LOGE("Failed to get result from successful task, code: %d", result_code);
                        error_jstring = env->NewStringUTF("Failed to extract auth code from task");
                        if (auth_code) GniString_destroy(auth_code);
                    }
                }

                env->CallVoidMethod(callback_obj, on_result_method, auth_code_jstring, error_jstring);

                if (auth_code_jstring) env->DeleteLocalRef(auth_code_jstring);
                if (error_jstring) env->DeleteLocalRef(error_jstring);
                env->DeleteLocalRef(callback_class);
                env->DeleteGlobalRef(callback_obj);
                GniTask_destroy(task);
            },
            global_callback
    );
}


extern "C" JNIEXPORT void JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_isAuthenticatedNative(
        JNIEnv *env,
        jobject main_activity,
        jobject java_callback_obj) {

    if (g_java_vm == nullptr) {
        if (env->GetJavaVM(&g_java_vm) != JNI_OK) {
            LOGE("GetJavaVM failed");
            return;
        }
    }

    GniCore_init(g_java_vm, main_activity);

    const PgsGamesSignInClient *sign_in_client =
            PgsPlayGames_getGamesSignInClient(main_activity);
    if (!sign_in_client) {
        LOGE("Failed to get GamesSignInClient");
        // TODO: Invoke callback with false and error
        return;
    }

    GniTask *is_auth_task = PgsGamesSignInClient_isAuthenticated(sign_in_client);

    if (!is_auth_task) {
        LOGE("Failed to start isAuthenticated task");
        // TODO: Invoke callback with false and error
        return;
    }

    jobject global_callback = env->NewGlobalRef(java_callback_obj);

    GniTask_addOnCompleteCallback(
            is_auth_task,
            [](GniTask *task, void *user_data) {
                jobject callback_obj = static_cast<jobject>(user_data);
                JNIEnv *env = nullptr;

                if (g_java_vm->AttachCurrentThread(&env, nullptr) != JNI_OK) {
                    LOGE("Failed to attach current thread to JVM");
                    return;
                }

                jclass callback_class = env->GetObjectClass(callback_obj);
                jmethodID on_result_method = env->GetMethodID(
                        callback_class, "onIsAuthenticatedResult", "(Z)V"); // (boolean)

                jboolean is_authenticated = JNI_FALSE;

                if (!GniTask_isSuccessful(task)) {
                    const char *error_message = nullptr;
                    GniTask_getErrorMessage(task, &error_message);
                    GniTaskErrorCode error_code = GniTask_getErrorCode(task);
                    LOGE("isAuthenticated task failed: %s (code: %d)", error_message ? error_message : "Unknown", error_code);
                    if (error_message) GniString_destroy(error_message);
                    // Call callback with false on failure
                } else {
                    GniTaskErrorCode result_code = PgsGamesSignInClient_isAuthenticated_getResult(task,
                                                                                                  reinterpret_cast<PgsAuthenticationResult **>(&is_authenticated));
                    if (result_code != GNI_TASK_SUCCESS) {
                        LOGE("Failed to get result from isAuthenticated task, code: %d", result_code);
                        is_authenticated = JNI_FALSE; // Treat result extraction failure as not authenticated
                    }
                }

                env->CallVoidMethod(callback_obj, on_result_method, is_authenticated);

                env->DeleteLocalRef(callback_class);
                env->DeleteGlobalRef(callback_obj);
                GniTask_destroy(task);
            },
            global_callback
    );
}


extern "C" JNIEXPORT void JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_showAchievementsNative(
        JNIEnv *env,
        jobject main_activity) {

    if (g_java_vm == nullptr) {
        if (env->GetJavaVM(&g_java_vm) != JNI_OK) {
            LOGE("GetJavaVM failed");
            return;
        }
    }

    GniCore_init(g_java_vm, main_activity);

    PgsAchievementsClient *achievements_client =
            PgsPlayGames_getAchievementsClient(main_activity);
    if (!achievements_client) {
        LOGE("Failed to get AchievementsClient");
        return;
    }

    GniTask *get_intent_task =
            PgsAchievementsClient_getAchievementsIntent(achievements_client);

    if (!get_intent_task) {
        LOGE("Failed to start getAchievementsIntent task");
        PgsAchievementsClient_destroy(achievements_client);
        return;
    }

    // Keep a global reference to the activity to call back into it.
    jobject global_activity_ref = env->NewGlobalRef(main_activity);

    GniTask_addOnCompleteCallback(
            get_intent_task,
            [](GniTask *task, void *user_data) {
                jobject activity_obj = static_cast<jobject>(user_data);
                JNIEnv *env = nullptr;

                if (g_java_vm->AttachCurrentThread(&env, nullptr) != JNI_OK) {
                    LOGE("Failed to attach current thread to JVM");
                    return;
                }

                if (!GniTask_isSuccessful(task)) {
                    const char *error_message = nullptr;
                    GniTask_getErrorMessage(task, &error_message);
                    LOGE("getAchievementsIntent task failed: %s", error_message ? error_message : "Unknown");
                    if (error_message) GniString_destroy(error_message);
                } else {
                    Intent *achievement_intent = nullptr;
                    GniTaskErrorCode result_code = PgsAchievementsClient_getAchievementsIntent_getResult(task, &achievement_intent);

                    if (result_code == GNI_TASK_SUCCESS && achievement_intent) {
                        jobject intent_jobject = Intent_getJniReference(achievement_intent);

                        jclass activity_class = env->GetObjectClass(activity_obj);
                        // Method in MainActivity to launch the intent on the UI thread
                        jmethodID launch_intent_mid = env->GetMethodID(activity_class, "launchIntent", "(Landroid/content/Intent;)V");

                        if (launch_intent_mid) {
                            LOGI("Calling Java launchIntent method");
                            env->CallVoidMethod(activity_obj, launch_intent_mid, intent_jobject);
                        } else {
                            LOGE("MethodID for launchIntent not found");
                            if (env->ExceptionCheck()) {
                                env->ExceptionDescribe();
                                env->ExceptionClear();
                            }
                        }
                        env->DeleteLocalRef(activity_class);
                        Intent_destroy(achievement_intent);
                    } else {
                        LOGE("Failed to get Intent from successful task, code: %d", result_code);
                    }
                }

                env->DeleteGlobalRef(activity_obj);
                GniTask_destroy(task);
            },
            global_activity_ref
    );

    // PgsAchievementsClient_destroy(achievements_client); // Client not owned by us
}

extern "C" JNIEXPORT void JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_unlockAchievementNative(
        JNIEnv *env,
        jobject main_activity,
        jstring achievement_id_jstr) {

    if (g_java_vm == nullptr) {
        if (env->GetJavaVM(&g_java_vm) != JNI_OK) {
            LOGE("GetJavaVM failed");
            return;
        }
    }

    GniCore_init(g_java_vm, main_activity);

    PgsAchievementsClient *achievements_client =
            PgsPlayGames_getAchievementsClient(main_activity);
    if (!achievements_client) {
        LOGE("Failed to get AchievementsClient");
        return;
    }

    String* achievement_id_gni = String_wrapJniReference(achievement_id_jstr);
    if (!achievement_id_gni) {
        LOGE("Failed to wrap achievement_id_jstr");
        return;
    }

    LOGI("Unlocking achievement ID: %s", env->GetStringUTFChars(achievement_id_jstr, nullptr));

    // This call is asynchronous on the Play Services side, but the JNI call itself is synchronous
    // and does not return a Task.
    PgsAchievementsClient_unlock(achievements_client, achievement_id_gni);

    // Clean up the GNI String
    String_destroy(achievement_id_gni);

    // PgsAchievementsClient_destroy(achievements_client); // Client is not owned by us

    LOGI("Unlock command issued for achievement ID");
    // No callback to Java is strictly necessary here as there's no GniTask to monitor for this specific call.
    // The result of the unlock will be reflected in the next achievement load or through the UI.
}

// JNI function that calls native logic and returns a string
extern "C"
JNIEXPORT jstring JNICALL
Java_com_vaibhavgpt_cppnative_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject main_activity) {

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
