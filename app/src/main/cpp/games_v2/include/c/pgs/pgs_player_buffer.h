#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER_H_

#include <cstdint>
#include <jni.h>
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerBuffer_ PgsPlayerBuffer;

/// Wraps a JNI reference with PgsPlayerBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerBuffer object.
/// @see PgsPlayerBuffer_destroy
PgsPlayerBuffer* PgsPlayerBuffer_wrapJniReference(jobject jobj);

jobject PgsPlayerBuffer_getJniReference(const PgsPlayerBuffer* pgs_player_buffer);

/// Destroys pgs_player_buffer and all internal resources related to it. This function should be
/// called when pgs_player_buffer is no longer needed.
/// @param pgs_player_buffer An object to be destroyed.
void PgsPlayerBuffer_destroy(const PgsPlayerBuffer* pgs_player_buffer);

PgsPlayer* PgsPlayerBuffer_get(const PgsPlayerBuffer* pgs_player_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER_H_
