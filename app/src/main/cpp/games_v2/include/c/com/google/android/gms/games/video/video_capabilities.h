#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoCapabilities_ VideoCapabilities;

/// Wraps a JNI reference with VideoCapabilities object.
/// @param jobj A JNI reference to be wrapped with VideoCapabilities object.
/// @see VideoCapabilities_destroy
VideoCapabilities* VideoCapabilities_wrapJniReference(jobject jobj);

jobject VideoCapabilities_getJniReference(const VideoCapabilities* video_capabilities);

/// Destroys video_capabilities and all internal resources related to it. This function should be
/// called when video_capabilities is no longer needed.
/// @param video_capabilities An object to be destroyed.
void VideoCapabilities_destroy(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_isMicSupported(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_isCameraSupported(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_isWriteStorageSupported(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_getSupportedCaptureModes(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_getSupportedQualityLevels(const VideoCapabilities* video_capabilities);

bool VideoCapabilities_supportsCaptureMode(const VideoCapabilities* video_capabilities, int32_t capture_mode);

bool VideoCapabilities_supportsQualityLevel(const VideoCapabilities* video_capabilities, int32_t quality_level);

bool VideoCapabilities_isFullySupported(const VideoCapabilities* video_capabilities, int32_t capture_mode, int32_t quality_level);

int32_t VideoCapabilities_hashCode(const VideoCapabilities* video_capabilities);

String* VideoCapabilities_toString(const VideoCapabilities* video_capabilities);

void VideoCapabilities_writeToParcel(const VideoCapabilities* video_capabilities, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES_H_
