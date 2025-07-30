#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CaptureState_ CaptureState;

/// Wraps a JNI reference with CaptureState object.
/// @param jobj A JNI reference to be wrapped with CaptureState object.
/// @see CaptureState_destroy
CaptureState* CaptureState_wrapJniReference(jobject jobj);

jobject CaptureState_getJniReference(const CaptureState* capture_state);

/// Destroys capture_state and all internal resources related to it. This function should be
/// called when capture_state is no longer needed.
/// @param capture_state An object to be destroyed.
void CaptureState_destroy(const CaptureState* capture_state);

bool CaptureState_isCapturing(const CaptureState* capture_state);

int32_t CaptureState_getCaptureMode(const CaptureState* capture_state);

int32_t CaptureState_getCaptureQuality(const CaptureState* capture_state);

bool CaptureState_isOverlayVisible(const CaptureState* capture_state);

bool CaptureState_isPaused(const CaptureState* capture_state);

String* CaptureState_toString(const CaptureState* capture_state);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE_H_
