#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/achievement/achievement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AchievementBuffer_ AchievementBuffer;

/// Wraps a JNI reference with AchievementBuffer object.
/// @param jobj A JNI reference to be wrapped with AchievementBuffer object.
/// @see AchievementBuffer_destroy
AchievementBuffer* AchievementBuffer_wrapJniReference(jobject jobj);

jobject AchievementBuffer_getJniReference(const AchievementBuffer* achievement_buffer);

/// Destroys achievement_buffer and all internal resources related to it. This function should be
/// called when achievement_buffer is no longer needed.
/// @param achievement_buffer An object to be destroyed.
void AchievementBuffer_destroy(const AchievementBuffer* achievement_buffer);

Achievement* AchievementBuffer_get(const AchievementBuffer* achievement_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER_H_
