#include "com/google/android/gms/games/video/video_capabilities.h"

#include "com/google/android/gms/games/video/video_capabilities.hpp"

VideoCapabilities* VideoCapabilities_wrapJniReference(jobject jobj) {
  return reinterpret_cast<VideoCapabilities*>(new ::com::google::android::gms::games::video::VideoCapabilities(jobj));
}

jobject VideoCapabilities_getJniReference(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->GetImpl();
}

void VideoCapabilities_destroy(const VideoCapabilities* video_capabilities) {
  ::com::google::android::gms::games::video::VideoCapabilities::destroy(reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities));
}

bool VideoCapabilities_isMicSupported(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->isMicSupported();
}

bool VideoCapabilities_isCameraSupported(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->isCameraSupported();
}

bool VideoCapabilities_isWriteStorageSupported(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->isWriteStorageSupported();
}

bool VideoCapabilities_getSupportedCaptureModes(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->getSupportedCaptureModes();
}

bool VideoCapabilities_getSupportedQualityLevels(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->getSupportedQualityLevels();
}

bool VideoCapabilities_supportsCaptureMode(const VideoCapabilities* video_capabilities, int32_t capture_mode) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->supportsCaptureMode(capture_mode);
}

bool VideoCapabilities_supportsQualityLevel(const VideoCapabilities* video_capabilities, int32_t quality_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->supportsQualityLevel(quality_level);
}

bool VideoCapabilities_isFullySupported(const VideoCapabilities* video_capabilities, int32_t capture_mode, int32_t quality_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->isFullySupported(capture_mode, quality_level);
}

int32_t VideoCapabilities_hashCode(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->hashCode();
}

String* VideoCapabilities_toString(const VideoCapabilities* video_capabilities) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->toString());
}

void VideoCapabilities_writeToParcel(const VideoCapabilities* video_capabilities, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::video::VideoCapabilities*>(video_capabilities)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
