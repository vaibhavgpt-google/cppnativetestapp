#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/stats/player_stats.h"
#include "gni/gni_task.h"
#include "pgs/pgs_annotated_data.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerStatsClient_ PgsPlayerStatsClient;

typedef GniTask* (*PgsPlayerStatsClient_loadPlayerStatsCallback)(bool force_reload);

/// Wraps a JNI reference with PgsPlayerStatsClient object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerStatsClient object.
/// @see PgsPlayerStatsClient_destroy
PgsPlayerStatsClient* PgsPlayerStatsClient_wrapJniReference(jobject jobj);

jobject PgsPlayerStatsClient_getJniReference(const PgsPlayerStatsClient* pgs_player_stats_client);

PgsPlayerStatsClient* PgsPlayerStatsClient_implementInterface(PgsPlayerStatsClient_loadPlayerStatsCallback pgs_player_stats_client_load_player_stats_callback);

/// Destroys pgs_player_stats_client and all internal resources related to it. This function should be
/// called when pgs_player_stats_client is no longer needed.
/// @param pgs_player_stats_client An object to be destroyed.
void PgsPlayerStatsClient_destroy(const PgsPlayerStatsClient* pgs_player_stats_client);

GniTask* PgsPlayerStatsClient_loadPlayerStats(const PgsPlayerStatsClient* pgs_player_stats_client, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayerStatsClient_loadPlayerStats.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PlayerStats_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayerStatsClient_loadPlayerStats.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayerStatsClient_loadPlayerStats
/// @see PgsAnnotatedData_PlayerStats_destroy
GniTaskErrorCode PgsPlayerStatsClient_loadPlayerStats_getResult(const GniTask* task, PgsAnnotatedData_PlayerStats** out_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT_H_
