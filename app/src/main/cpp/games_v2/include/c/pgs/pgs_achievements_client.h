#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "android/content/intent.h"
#include "com/google/android/gms/games/achievement/achievement_buffer.h"
#include "gni/gni_task.h"
#include "java/lang/boolean.h"
#include "java/lang/string.h"
#include "pgs/pgs_annotated_data.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsAchievementsClient_ PgsAchievementsClient;

typedef GniTask* (*PgsAchievementsClient_getAchievementsIntentCallback)();

typedef GniTask* (*PgsAchievementsClient_loadCallback)(bool force_reload);

typedef void (*PgsAchievementsClient_revealCallback)(String* id);

typedef GniTask* (*PgsAchievementsClient_revealImmediateCallback)(String* id);

typedef void (*PgsAchievementsClient_unlockCallback)(String* id);

typedef GniTask* (*PgsAchievementsClient_unlockImmediateCallback)(String* id);

typedef void (*PgsAchievementsClient_incrementCallback)(String* id, int32_t num_steps);

typedef GniTask* (*PgsAchievementsClient_incrementImmediateCallback)(String* id, int32_t num_steps);

typedef void (*PgsAchievementsClient_setStepsCallback)(String* id, int32_t num_steps);

typedef GniTask* (*PgsAchievementsClient_setStepsImmediateCallback)(String* id, int32_t num_steps);

/// Wraps a JNI reference with PgsAchievementsClient object.
/// @param jobj A JNI reference to be wrapped with PgsAchievementsClient object.
/// @see PgsAchievementsClient_destroy
PgsAchievementsClient* PgsAchievementsClient_wrapJniReference(jobject jobj);

jobject PgsAchievementsClient_getJniReference(const PgsAchievementsClient* pgs_achievements_client);

PgsAchievementsClient* PgsAchievementsClient_implementInterface(PgsAchievementsClient_getAchievementsIntentCallback pgs_achievements_client_get_achievements_intent_callback, PgsAchievementsClient_loadCallback pgs_achievements_client_load_callback, PgsAchievementsClient_revealCallback pgs_achievements_client_reveal_callback, PgsAchievementsClient_revealImmediateCallback pgs_achievements_client_reveal_immediate_callback, PgsAchievementsClient_unlockCallback pgs_achievements_client_unlock_callback, PgsAchievementsClient_unlockImmediateCallback pgs_achievements_client_unlock_immediate_callback, PgsAchievementsClient_incrementCallback pgs_achievements_client_increment_callback, PgsAchievementsClient_incrementImmediateCallback pgs_achievements_client_increment_immediate_callback, PgsAchievementsClient_setStepsCallback pgs_achievements_client_set_steps_callback, PgsAchievementsClient_setStepsImmediateCallback pgs_achievements_client_set_steps_immediate_callback);

/// Destroys pgs_achievements_client and all internal resources related to it. This function should be
/// called when pgs_achievements_client is no longer needed.
/// @param pgs_achievements_client An object to be destroyed.
void PgsAchievementsClient_destroy(const PgsAchievementsClient* pgs_achievements_client);

GniTask* PgsAchievementsClient_getAchievementsIntent(const PgsAchievementsClient* pgs_achievements_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsAchievementsClient_getAchievementsIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsAchievementsClient_getAchievementsIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsAchievementsClient_getAchievementsIntent
/// @see Intent_destroy
GniTaskErrorCode PgsAchievementsClient_getAchievementsIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsAchievementsClient_load(const PgsAchievementsClient* pgs_achievements_client, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsAchievementsClient_load.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_AchievementBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsAchievementsClient_load.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsAchievementsClient_load
/// @see PgsAnnotatedData_AchievementBuffer_destroy
GniTaskErrorCode PgsAchievementsClient_load_getResult(const GniTask* task, PgsAnnotatedData_AchievementBuffer** out_result);

void PgsAchievementsClient_reveal(const PgsAchievementsClient* pgs_achievements_client, String* id);

GniTask* PgsAchievementsClient_revealImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id);

void PgsAchievementsClient_unlock(const PgsAchievementsClient* pgs_achievements_client, String* id);

GniTask* PgsAchievementsClient_unlockImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id);

void PgsAchievementsClient_increment(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps);

GniTask* PgsAchievementsClient_incrementImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsAchievementsClient_incrementImmediate.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Boolean_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsAchievementsClient_incrementImmediate.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsAchievementsClient_incrementImmediate
/// @see Boolean_destroy
GniTaskErrorCode PgsAchievementsClient_incrementImmediate_getResult(const GniTask* task, Boolean** out_result);

void PgsAchievementsClient_setSteps(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps);

GniTask* PgsAchievementsClient_setStepsImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsAchievementsClient_setStepsImmediate.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Boolean_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsAchievementsClient_setStepsImmediate.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsAchievementsClient_setStepsImmediate
/// @see Boolean_destroy
GniTaskErrorCode PgsAchievementsClient_setStepsImmediate_getResult(const GniTask* task, Boolean** out_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT_H_
