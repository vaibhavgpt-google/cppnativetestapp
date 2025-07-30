#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCOREBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCOREBUFFER_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/leaderboard/leaderboard_score.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LeaderboardScoreBuffer_ LeaderboardScoreBuffer;

/// Wraps a JNI reference with LeaderboardScoreBuffer object.
/// @param jobj A JNI reference to be wrapped with LeaderboardScoreBuffer object.
/// @see LeaderboardScoreBuffer_destroy
LeaderboardScoreBuffer* LeaderboardScoreBuffer_wrapJniReference(jobject jobj);

jobject LeaderboardScoreBuffer_getJniReference(const LeaderboardScoreBuffer* leaderboard_score_buffer);

/// Destroys leaderboard_score_buffer and all internal resources related to it. This function should be
/// called when leaderboard_score_buffer is no longer needed.
/// @param leaderboard_score_buffer An object to be destroyed.
void LeaderboardScoreBuffer_destroy(const LeaderboardScoreBuffer* leaderboard_score_buffer);

LeaderboardScore* LeaderboardScoreBuffer_get(const LeaderboardScoreBuffer* leaderboard_score_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCOREBUFFER_H_
