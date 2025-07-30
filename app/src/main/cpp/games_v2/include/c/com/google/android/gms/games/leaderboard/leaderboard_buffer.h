#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LeaderboardBuffer_ LeaderboardBuffer;

/// Wraps a JNI reference with LeaderboardBuffer object.
/// @param jobj A JNI reference to be wrapped with LeaderboardBuffer object.
/// @see LeaderboardBuffer_destroy
LeaderboardBuffer* LeaderboardBuffer_wrapJniReference(jobject jobj);

jobject LeaderboardBuffer_getJniReference(const LeaderboardBuffer* leaderboard_buffer);

/// Destroys leaderboard_buffer and all internal resources related to it. This function should be
/// called when leaderboard_buffer is no longer needed.
/// @param leaderboard_buffer An object to be destroyed.
void LeaderboardBuffer_destroy(const LeaderboardBuffer* leaderboard_buffer);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER_H_
