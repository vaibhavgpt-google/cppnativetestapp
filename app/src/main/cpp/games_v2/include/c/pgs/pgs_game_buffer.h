#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER_H_

#include <cstdint>
#include <jni.h>
#include "pgs/pgs_game.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGameBuffer_ PgsGameBuffer;

/// Wraps a JNI reference with PgsGameBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsGameBuffer object.
/// @see PgsGameBuffer_destroy
PgsGameBuffer* PgsGameBuffer_wrapJniReference(jobject jobj);

jobject PgsGameBuffer_getJniReference(const PgsGameBuffer* pgs_game_buffer);

/// Destroys pgs_game_buffer and all internal resources related to it. This function should be
/// called when pgs_game_buffer is no longer needed.
/// @param pgs_game_buffer An object to be destroyed.
void PgsGameBuffer_destroy(const PgsGameBuffer* pgs_game_buffer);

PgsGame* PgsGameBuffer_get(const PgsGameBuffer* pgs_game_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER_H_
