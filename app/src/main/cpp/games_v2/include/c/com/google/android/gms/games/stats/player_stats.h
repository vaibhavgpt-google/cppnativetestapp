#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PlayerStats_ PlayerStats;

typedef float (*PlayerStats_getAverageSessionLengthCallback)();

typedef int32_t (*PlayerStats_getDaysSinceLastPlayedCallback)();

typedef int32_t (*PlayerStats_getNumberOfPurchasesCallback)();

typedef int32_t (*PlayerStats_getNumberOfSessionsCallback)();

typedef float (*PlayerStats_getSessionPercentileCallback)();

typedef float (*PlayerStats_getSpendPercentileCallback)();

/// Wraps a JNI reference with PlayerStats object.
/// @param jobj A JNI reference to be wrapped with PlayerStats object.
/// @see PlayerStats_destroy
PlayerStats* PlayerStats_wrapJniReference(jobject jobj);

jobject PlayerStats_getJniReference(const PlayerStats* player_stats);

PlayerStats* PlayerStats_implementInterface(PlayerStats_getAverageSessionLengthCallback player_stats_get_average_session_length_callback, PlayerStats_getDaysSinceLastPlayedCallback player_stats_get_days_since_last_played_callback, PlayerStats_getNumberOfPurchasesCallback player_stats_get_number_of_purchases_callback, PlayerStats_getNumberOfSessionsCallback player_stats_get_number_of_sessions_callback, PlayerStats_getSessionPercentileCallback player_stats_get_session_percentile_callback, PlayerStats_getSpendPercentileCallback player_stats_get_spend_percentile_callback);

/// Destroys player_stats and all internal resources related to it. This function should be
/// called when player_stats is no longer needed.
/// @param player_stats An object to be destroyed.
void PlayerStats_destroy(const PlayerStats* player_stats);

float PlayerStats_getAverageSessionLength(const PlayerStats* player_stats);

int32_t PlayerStats_getDaysSinceLastPlayed(const PlayerStats* player_stats);

int32_t PlayerStats_getNumberOfPurchases(const PlayerStats* player_stats);

int32_t PlayerStats_getNumberOfSessions(const PlayerStats* player_stats);

float PlayerStats_getSessionPercentile(const PlayerStats* player_stats);

float PlayerStats_getSpendPercentile(const PlayerStats* player_stats);

float PlayerStats_get_UNSET_VALUE();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS_H_
