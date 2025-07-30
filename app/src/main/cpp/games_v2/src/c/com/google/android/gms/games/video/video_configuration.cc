#include "com/google/android/gms/games/video/video_configuration.h"

#include "com/google/android/gms/games/video/video_configuration.hpp"

VideoConfiguration* VideoConfiguration_wrapJniReference(jobject jobj) {
  return reinterpret_cast<VideoConfiguration*>(new ::com::google::android::gms::games::video::VideoConfiguration(jobj));
}

jobject VideoConfiguration_getJniReference(const VideoConfiguration* video_configuration) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->GetImpl();
}

void VideoConfiguration_destroy(const VideoConfiguration* video_configuration) {
  ::com::google::android::gms::games::video::VideoConfiguration::destroy(reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration));
}

int32_t VideoConfiguration_getQualityLevel(const VideoConfiguration* video_configuration) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->getQualityLevel();
}

int32_t VideoConfiguration_getCaptureMode(const VideoConfiguration* video_configuration) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->getCaptureMode();
}

bool VideoConfiguration_getCameraEnabled(const VideoConfiguration* video_configuration) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->getCameraEnabled();
}

bool VideoConfiguration_getMicEnabled(const VideoConfiguration* video_configuration) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->getMicEnabled();
}

void VideoConfiguration_writeToParcel(const VideoConfiguration* video_configuration, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration*>(video_configuration)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}

bool VideoConfiguration_isValidQualityLevel(int32_t quality_level, bool allow_unknown) {
  return ::com::google::android::gms::games::video::VideoConfiguration::isValidQualityLevel(quality_level, allow_unknown);
}

bool VideoConfiguration_isValidCaptureMode(int32_t capture_mode, bool allow_unknown) {
  return ::com::google::android::gms::games::video::VideoConfiguration::isValidCaptureMode(capture_mode, allow_unknown);
}

int32_t VideoConfiguration_get_QUALITY_LEVEL_FULLHD() {
  return ::com::google::android::gms::games::video::VideoConfiguration::QUALITY_LEVEL_FULLHD;
}

int32_t VideoConfiguration_get_QUALITY_LEVEL_XHD() {
  return ::com::google::android::gms::games::video::VideoConfiguration::QUALITY_LEVEL_XHD;
}

int32_t VideoConfiguration_get_QUALITY_LEVEL_HD() {
  return ::com::google::android::gms::games::video::VideoConfiguration::QUALITY_LEVEL_HD;
}

int32_t VideoConfiguration_get_QUALITY_LEVEL_SD() {
  return ::com::google::android::gms::games::video::VideoConfiguration::QUALITY_LEVEL_SD;
}

int32_t VideoConfiguration_get_QUALITY_LEVEL_UNKNOWN() {
  return ::com::google::android::gms::games::video::VideoConfiguration::QUALITY_LEVEL_UNKNOWN;
}

int32_t VideoConfiguration_get_NUM_QUALITY_LEVEL() {
  return ::com::google::android::gms::games::video::VideoConfiguration::NUM_QUALITY_LEVEL;
}

int32_t VideoConfiguration_get_CAPTURE_MODE_UNKNOWN() {
  return ::com::google::android::gms::games::video::VideoConfiguration::CAPTURE_MODE_UNKNOWN;
}

int32_t VideoConfiguration_get_CAPTURE_MODE_FILE() {
  return ::com::google::android::gms::games::video::VideoConfiguration::CAPTURE_MODE_FILE;
}

int32_t VideoConfiguration_get_CAPTURE_MODE_STREAM() {
  return ::com::google::android::gms::games::video::VideoConfiguration::CAPTURE_MODE_STREAM;
}

int32_t VideoConfiguration_get_NUM_CAPTURE_MODE() {
  return ::com::google::android::gms::games::video::VideoConfiguration::NUM_CAPTURE_MODE;
}

VideoConfiguration_Builder* VideoConfiguration_Builder_wrapJniReference(jobject jobj) {
  return reinterpret_cast<VideoConfiguration_Builder*>(new ::com::google::android::gms::games::video::VideoConfiguration::Builder(jobj));
}

jobject VideoConfiguration_Builder_getJniReference(const VideoConfiguration_Builder* video_configuration_builder) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->GetImpl();
}

VideoConfiguration_Builder* VideoConfiguration_Builder_construct(int32_t quality_level, int32_t capture_mode) {
  return reinterpret_cast<VideoConfiguration_Builder*>(new ::com::google::android::gms::games::video::VideoConfiguration::Builder(quality_level, capture_mode));
}

void VideoConfiguration_Builder_destroy(const VideoConfiguration_Builder* video_configuration_builder) {
  ::com::google::android::gms::games::video::VideoConfiguration::Builder::destroy(reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder));
}

VideoConfiguration_Builder* VideoConfiguration_Builder_setQualityLevel(const VideoConfiguration_Builder* video_configuration_builder, int32_t quality_level) {
  return reinterpret_cast<VideoConfiguration_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->setQualityLevel(quality_level));
}

VideoConfiguration_Builder* VideoConfiguration_Builder_setCaptureMode(const VideoConfiguration_Builder* video_configuration_builder, int32_t capture_mode) {
  return reinterpret_cast<VideoConfiguration_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->setCaptureMode(capture_mode));
}

VideoConfiguration_Builder* VideoConfiguration_Builder_setMicEnabled(const VideoConfiguration_Builder* video_configuration_builder, bool mic_enabled) {
  return reinterpret_cast<VideoConfiguration_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->setMicEnabled(mic_enabled));
}

VideoConfiguration_Builder* VideoConfiguration_Builder_setCameraEnabled(const VideoConfiguration_Builder* video_configuration_builder, bool camera_enabled) {
  return reinterpret_cast<VideoConfiguration_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->setCameraEnabled(camera_enabled));
}

VideoConfiguration* VideoConfiguration_Builder_build(const VideoConfiguration_Builder* video_configuration_builder) {
  return reinterpret_cast<VideoConfiguration*>(&reinterpret_cast<const ::com::google::android::gms::games::video::VideoConfiguration::Builder*>(video_configuration_builder)->build());
}
