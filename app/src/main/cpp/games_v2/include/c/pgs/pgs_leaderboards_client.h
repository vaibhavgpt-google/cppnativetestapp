#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "android/content/intent.h"
#include "com/google/android/gms/games/leaderboard/leaderboard.h"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.h"
#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.h"
#include "com/google/android/gms/games/leaderboard/score_submission_data.h"
#include "gni/gni_task.h"
#include "java/lang/string.h"
#include "pgs/pgs_annotated_data.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsLeaderboardsClient_ PgsLeaderboardsClient;

typedef struct PgsLeaderboardsClient_LeaderboardScores_ PgsLeaderboardsClient_LeaderboardScores;

typedef GniTask* (*PgsLeaderboardsClient_getAllLeaderboardsIntentCallback)();

typedef GniTask* (*PgsLeaderboardsClient_getLeaderboardIntentCallback)(String* leaderboard_id, int32_t time_span, int32_t collection);

typedef GniTask* (*PgsLeaderboardsClient_loadLeaderboardMetadataCallback)(String* leaderboard_id, bool force_reload);

typedef GniTask* (*PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScoreCallback)(String* leaderboard_id, int32_t span, int32_t leaderboard_collection);

typedef GniTask* (*PgsLeaderboardsClient_loadTopScoresCallback)(String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload);

typedef GniTask* (*PgsLeaderboardsClient_loadPlayerCenteredScoresCallback)(String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload);

typedef GniTask* (*PgsLeaderboardsClient_loadMoreScoresCallback)(LeaderboardScoreBuffer* buffer, int32_t max_results, int32_t page_direction);

typedef void (*PgsLeaderboardsClient_submitScoreCallback)(String* leaderboard_id, int64_t score, String* score_tag);

typedef GniTask* (*PgsLeaderboardsClient_submitScoreImmediateCallback)(String* leaderboard_id, int64_t score, String* score_tag);

/// Wraps a JNI reference with PgsLeaderboardsClient object.
/// @param jobj A JNI reference to be wrapped with PgsLeaderboardsClient object.
/// @see PgsLeaderboardsClient_destroy
PgsLeaderboardsClient* PgsLeaderboardsClient_wrapJniReference(jobject jobj);

jobject PgsLeaderboardsClient_getJniReference(const PgsLeaderboardsClient* pgs_leaderboards_client);

PgsLeaderboardsClient* PgsLeaderboardsClient_implementInterface(PgsLeaderboardsClient_getAllLeaderboardsIntentCallback pgs_leaderboards_client_get_all_leaderboards_intent_callback, PgsLeaderboardsClient_getLeaderboardIntentCallback pgs_leaderboards_client_get_leaderboard_intent_callback, PgsLeaderboardsClient_loadLeaderboardMetadataCallback pgs_leaderboards_client_load_leaderboard_metadata_callback, PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScoreCallback pgs_leaderboards_client_load_current_player_leaderboard_score_callback, PgsLeaderboardsClient_loadTopScoresCallback pgs_leaderboards_client_load_top_scores_callback, PgsLeaderboardsClient_loadPlayerCenteredScoresCallback pgs_leaderboards_client_load_player_centered_scores_callback, PgsLeaderboardsClient_loadMoreScoresCallback pgs_leaderboards_client_load_more_scores_callback, PgsLeaderboardsClient_submitScoreCallback pgs_leaderboards_client_submit_score_callback, PgsLeaderboardsClient_submitScoreImmediateCallback pgs_leaderboards_client_submit_score_immediate_callback);

/// Destroys pgs_leaderboards_client and all internal resources related to it. This function should be
/// called when pgs_leaderboards_client is no longer needed.
/// @param pgs_leaderboards_client An object to be destroyed.
void PgsLeaderboardsClient_destroy(const PgsLeaderboardsClient* pgs_leaderboards_client);

GniTask* PgsLeaderboardsClient_getAllLeaderboardsIntent(const PgsLeaderboardsClient* pgs_leaderboards_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_getAllLeaderboardsIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_getAllLeaderboardsIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_getAllLeaderboardsIntent
/// @see Intent_destroy
GniTaskErrorCode PgsLeaderboardsClient_getAllLeaderboardsIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsLeaderboardsClient_getLeaderboardIntent(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t time_span, int32_t collection);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_getLeaderboardIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_getLeaderboardIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_getLeaderboardIntent
/// @see Intent_destroy
GniTaskErrorCode PgsLeaderboardsClient_getLeaderboardIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsLeaderboardsClient_loadLeaderboardMetadata(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_loadLeaderboardMetadata.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_Leaderboard_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_loadLeaderboardMetadata.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_loadLeaderboardMetadata
/// @see PgsAnnotatedData_Leaderboard_destroy
GniTaskErrorCode PgsLeaderboardsClient_loadLeaderboardMetadata_getResult(const GniTask* task, PgsAnnotatedData_Leaderboard** out_result);

GniTask* PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_LeaderboardScore_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore
/// @see PgsAnnotatedData_LeaderboardScore_destroy
GniTaskErrorCode PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore_getResult(const GniTask* task, PgsAnnotatedData_LeaderboardScore** out_result);

GniTask* PgsLeaderboardsClient_loadTopScores(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_loadTopScores.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_loadTopScores.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_loadTopScores
/// @see PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy
GniTaskErrorCode PgsLeaderboardsClient_loadTopScores_getResult(const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result);

GniTask* PgsLeaderboardsClient_loadPlayerCenteredScores(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_loadPlayerCenteredScores.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_loadPlayerCenteredScores.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_loadPlayerCenteredScores
/// @see PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy
GniTaskErrorCode PgsLeaderboardsClient_loadPlayerCenteredScores_getResult(const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result);

GniTask* PgsLeaderboardsClient_loadMoreScores(const PgsLeaderboardsClient* pgs_leaderboards_client, LeaderboardScoreBuffer* buffer, int32_t max_results, int32_t page_direction);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_loadMoreScores.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_loadMoreScores.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_loadMoreScores
/// @see PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy
GniTaskErrorCode PgsLeaderboardsClient_loadMoreScores_getResult(const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result);

void PgsLeaderboardsClient_submitScore(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int64_t score, String* score_tag);

GniTask* PgsLeaderboardsClient_submitScoreImmediate(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int64_t score, String* score_tag);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsLeaderboardsClient_submitScoreImmediate.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call ScoreSubmissionData_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsLeaderboardsClient_submitScoreImmediate.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsLeaderboardsClient_submitScoreImmediate
/// @see ScoreSubmissionData_destroy
GniTaskErrorCode PgsLeaderboardsClient_submitScoreImmediate_getResult(const GniTask* task, ScoreSubmissionData** out_result);

/// Wraps a JNI reference with PgsLeaderboardsClient_LeaderboardScores object.
/// @param jobj A JNI reference to be wrapped with PgsLeaderboardsClient_LeaderboardScores object.
/// @see PgsLeaderboardsClient_LeaderboardScores_destroy
PgsLeaderboardsClient_LeaderboardScores* PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(jobject jobj);

jobject PgsLeaderboardsClient_LeaderboardScores_getJniReference(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores);

/// Destroys pgs_leaderboards_client_leaderboard_scores and all internal resources related to it. This function should be
/// called when pgs_leaderboards_client_leaderboard_scores is no longer needed.
/// @param pgs_leaderboards_client_leaderboard_scores An object to be destroyed.
void PgsLeaderboardsClient_LeaderboardScores_destroy(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores);

Leaderboard* PgsLeaderboardsClient_LeaderboardScores_getLeaderboard(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores);

LeaderboardScoreBuffer* PgsLeaderboardsClient_LeaderboardScores_getScores(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores);

void PgsLeaderboardsClient_LeaderboardScores_release(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT_H_
