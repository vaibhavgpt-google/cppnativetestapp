#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PlayerStatsBuffer_ PlayerStatsBuffer;

/// Wraps a JNI reference with PlayerStatsBuffer object.
/// @param jobj A JNI reference to be wrapped with PlayerStatsBuffer object.
/// @see PlayerStatsBuffer_destroy
PlayerStatsBuffer* PlayerStatsBuffer_wrapJniReference(jobject jobj);

jobject PlayerStatsBuffer_getJniReference(const PlayerStatsBuffer* player_stats_buffer);

/// Destroys player_stats_buffer and all internal resources related to it. This function should be
/// called when player_stats_buffer is no longer needed.
/// @param player_stats_buffer An object to be destroyed.
void PlayerStatsBuffer_destroy(const PlayerStatsBuffer* player_stats_buffer);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER_H_
