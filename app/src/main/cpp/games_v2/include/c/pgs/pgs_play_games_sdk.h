#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayGamesSdk_ PgsPlayGamesSdk;

/// Wraps a JNI reference with PgsPlayGamesSdk object.
/// @param jobj A JNI reference to be wrapped with PgsPlayGamesSdk object.
/// @see PgsPlayGamesSdk_destroy
PgsPlayGamesSdk* PgsPlayGamesSdk_wrapJniReference(jobject jobj);

jobject PgsPlayGamesSdk_getJniReference(const PgsPlayGamesSdk* pgs_play_games_sdk);

/// Destroys pgs_play_games_sdk and all internal resources related to it. This function should be
/// called when pgs_play_games_sdk is no longer needed.
/// @param pgs_play_games_sdk An object to be destroyed.
void PgsPlayGamesSdk_destroy(const PgsPlayGamesSdk* pgs_play_games_sdk);

void PgsPlayGamesSdk_initialize(jobject context);

int32_t PgsPlayGamesSdk_get_MIN_ANDROID_API_VERSION();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK_H_
