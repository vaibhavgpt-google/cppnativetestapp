#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES_H_

#include <cstdint>
#include <jni.h>
#include "pgs/pgs_achievements_client.h"
#include "pgs/pgs_events_client.h"
#include "pgs/pgs_games_sign_in_client.h"
#include "pgs/pgs_leaderboards_client.h"
#include "pgs/pgs_player_stats_client.h"
#include "pgs/pgs_players_client.h"
#include "pgs/pgs_recall_client.h"
#include "pgs/pgs_snapshots_client.h"

#ifdef __cplusplus
extern "C" {
#endif

/// Main entry point for the Google Play Games Services APIs.
typedef struct PgsPlayGames_ PgsPlayGames;

/// Wraps a JNI reference with PgsPlayGames object.
/// @param jobj A JNI reference to be wrapped with PgsPlayGames object.
/// @see PgsPlayGames_destroy
PgsPlayGames* PgsPlayGames_wrapJniReference(jobject jobj);

jobject PgsPlayGames_getJniReference(const PgsPlayGames* pgs_play_games);

/// Destroys pgs_play_games and all internal resources related to it. This function should be
/// called when pgs_play_games is no longer needed.
/// @param pgs_play_games An object to be destroyed.
void PgsPlayGames_destroy(const PgsPlayGames* pgs_play_games);

PgsAchievementsClient* PgsPlayGames_getAchievementsClient(jobject activity);

PgsEventsClient* PgsPlayGames_getEventsClient(jobject activity);

/// Returns a new instance of GamesSignInClient for use in an Activity.
/// @param activity The Activity for this client, for example from
/// ANativeActivity's "clazz" field.
PgsGamesSignInClient* PgsPlayGames_getGamesSignInClient(jobject activity);

PgsRecallClient* PgsPlayGames_getRecallClient(jobject activity);

PgsLeaderboardsClient* PgsPlayGames_getLeaderboardsClient(jobject activity);

/// Returns a new instance of PlayersClient for use in an Activity.
/// @param activity The Activity for this client, for example from
/// ANativeActivity's "clazz" field.
PgsPlayersClient* PgsPlayGames_getPlayersClient(jobject activity);

PgsPlayerStatsClient* PgsPlayGames_getPlayerStatsClient(jobject activity);

PgsSnapshotsClient* PgsPlayGames_getSnapshotsClient(jobject activity);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES_H_
