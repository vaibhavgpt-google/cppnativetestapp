//
// Created by Vaibhav Gupta on 22/07/25.
//
#include <jni.h>
#include <string>
#include <cassert>
#include <android/log.h>

#include "gni/gni.h"
#include "gni/gni_task.h"
#include "pgs/pgs_play_games.h"
#include "pgs/pgs_players_client.h"
#include "java/lang/string.h"
#include "pgs/pgs_games_sign_in_client.h"
#include "pgs/pgs_achievements_client.h"
#include "android/content/intent.h"
#include "playgamesclient.h"

#define LOG_TAG "PLAY_GAMES_CLIENT"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

// Global JVM pointer
JavaVM *global_vm = nullptr;

void getPlayerId(JNIEnv *env,
                 jobject main_activity,
                 jobject java_callback_obj){
    if (global_vm == nullptr) {
        env->GetJavaVM(&global_vm);
    }

    // Init GNI
    GniCore_init(global_vm, main_activity);

    const PgsPlayersClient *players_client = PgsPlayGames_getPlayersClient(main_activity);
    assert(players_client != nullptr);

    GniTask *get_current_player_id_task = PgsPlayersClient_getCurrentPlayerId(players_client);
    assert(get_current_player_id_task != nullptr);

    // Keep a global ref to the Java callback object (Activity or separate callback class)
    jobject global_callback = env->NewGlobalRef(java_callback_obj);

    GniTask_addOnCompleteCallback(
            get_current_player_id_task,
            [](GniTask *task, void *user_data) {
                jobject callback_obj = static_cast<jobject>(user_data);
                JNIEnv *env = nullptr;

                if (global_vm->AttachCurrentThread(&env, nullptr) != JNI_OK) {
                    LOGE("Failed to attach current thread to JVM");
                    return;
                }

                if (!GniTask_isSuccessful(task)) {
                    const char *error_message = nullptr;
                    GniTask_getErrorMessage(task, &error_message);
                    LOGE("Error getting player ID: %s", error_message);
                    GniString_destroy(error_message);
                    GniTask_destroy(task);

                    // Call back with empty string on error
                    jclass callback_class = env->GetObjectClass(callback_obj);
                    jmethodID on_result = env->GetMethodID(callback_class, "onPlayerIdReceived", "(Ljava/lang/String;)V");
                    jstring empty = env->NewStringUTF("");
                    env->CallVoidMethod(callback_obj, on_result, empty);
                    env->DeleteGlobalRef(callback_obj);
                    return;
                }

                const char *result = nullptr;
                PgsPlayersClient_getCurrentPlayerId_getResult(task, &result);
                LOGI("Player ID: %s", result);

                jclass callback_class = env->GetObjectClass(callback_obj);
                jmethodID on_result = env->GetMethodID(callback_class, "onPlayerIdReceived", "(Ljava/lang/String;)V");
                jstring player_id_jstring = env->NewStringUTF(result);
                env->CallVoidMethod(callback_obj, on_result, player_id_jstring);

                GniString_destroy(result);
                GniTask_destroy(task);
                env->DeleteGlobalRef(callback_obj);
            },
            global_callback
    );
}