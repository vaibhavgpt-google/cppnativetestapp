#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel.h"
#include "android/os/parcelable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoConfiguration_ VideoConfiguration;

typedef struct VideoConfiguration_Builder_ VideoConfiguration_Builder;

/// Wraps a JNI reference with VideoConfiguration object.
/// @param jobj A JNI reference to be wrapped with VideoConfiguration object.
/// @see VideoConfiguration_destroy
VideoConfiguration* VideoConfiguration_wrapJniReference(jobject jobj);

jobject VideoConfiguration_getJniReference(const VideoConfiguration* video_configuration);

/// Destroys video_configuration and all internal resources related to it. This function should be
/// called when video_configuration is no longer needed.
/// @param video_configuration An object to be destroyed.
void VideoConfiguration_destroy(const VideoConfiguration* video_configuration);

int32_t VideoConfiguration_getQualityLevel(const VideoConfiguration* video_configuration);

int32_t VideoConfiguration_getCaptureMode(const VideoConfiguration* video_configuration);

bool VideoConfiguration_getCameraEnabled(const VideoConfiguration* video_configuration);

bool VideoConfiguration_getMicEnabled(const VideoConfiguration* video_configuration);

void VideoConfiguration_writeToParcel(const VideoConfiguration* video_configuration, Parcel* out, int32_t flags);

bool VideoConfiguration_isValidQualityLevel(int32_t quality_level, bool allow_unknown);

bool VideoConfiguration_isValidCaptureMode(int32_t capture_mode, bool allow_unknown);

int32_t VideoConfiguration_get_QUALITY_LEVEL_FULLHD();

int32_t VideoConfiguration_get_QUALITY_LEVEL_XHD();

int32_t VideoConfiguration_get_QUALITY_LEVEL_HD();

int32_t VideoConfiguration_get_QUALITY_LEVEL_SD();

int32_t VideoConfiguration_get_QUALITY_LEVEL_UNKNOWN();

int32_t VideoConfiguration_get_NUM_QUALITY_LEVEL();

int32_t VideoConfiguration_get_CAPTURE_MODE_UNKNOWN();

int32_t VideoConfiguration_get_CAPTURE_MODE_FILE();

int32_t VideoConfiguration_get_CAPTURE_MODE_STREAM();

int32_t VideoConfiguration_get_NUM_CAPTURE_MODE();

/// Wraps a JNI reference with VideoConfiguration_Builder object.
/// @param jobj A JNI reference to be wrapped with VideoConfiguration_Builder object.
/// @see VideoConfiguration_Builder_destroy
VideoConfiguration_Builder* VideoConfiguration_Builder_wrapJniReference(jobject jobj);

jobject VideoConfiguration_Builder_getJniReference(const VideoConfiguration_Builder* video_configuration_builder);

VideoConfiguration_Builder* VideoConfiguration_Builder_construct(int32_t quality_level, int32_t capture_mode);

/// Destroys video_configuration_builder and all internal resources related to it. This function should be
/// called when video_configuration_builder is no longer needed.
/// @param video_configuration_builder An object to be destroyed.
void VideoConfiguration_Builder_destroy(const VideoConfiguration_Builder* video_configuration_builder);

VideoConfiguration_Builder* VideoConfiguration_Builder_setQualityLevel(const VideoConfiguration_Builder* video_configuration_builder, int32_t quality_level);

VideoConfiguration_Builder* VideoConfiguration_Builder_setCaptureMode(const VideoConfiguration_Builder* video_configuration_builder, int32_t capture_mode);

VideoConfiguration_Builder* VideoConfiguration_Builder_setMicEnabled(const VideoConfiguration_Builder* video_configuration_builder, bool mic_enabled);

VideoConfiguration_Builder* VideoConfiguration_Builder_setCameraEnabled(const VideoConfiguration_Builder* video_configuration_builder, bool camera_enabled);

VideoConfiguration* VideoConfiguration_Builder_build(const VideoConfiguration_Builder* video_configuration_builder);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION_H_
