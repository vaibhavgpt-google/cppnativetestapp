#include "com/google/android/gms/games/video/video_configuration.hpp"
#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/internal/safeparcel/abstract_safe_parcelable.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace video {

namespace {

jobject CreateJavaVideoConfigurationBuilderObject(int32_t qualityLevel, int32_t captureMode) {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(VideoConfiguration::Builder::GetClass(), "<init>", "(II)V");
  return env->NewObject(VideoConfiguration::Builder::GetClass(), method_id, qualityLevel, captureMode);
}

}  // namespace

jclass VideoConfiguration::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/video/VideoConfiguration");
  return cached_class;
}

void VideoConfiguration::destroy(const VideoConfiguration* object)
{
  delete object;
}

int32_t VideoConfiguration::getQualityLevel() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getQualityLevel", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t VideoConfiguration::getCaptureMode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCaptureMode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

bool VideoConfiguration::getCameraEnabled() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCameraEnabled", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoConfiguration::getMicEnabled() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getMicEnabled", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

void VideoConfiguration::writeToParcel(const ::android::os::Parcel& out, int32_t flags) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeToParcel", "(Landroid/os/Parcel;I)V");
  env->CallVoidMethod(GetImpl(), method_id, out.GetImpl(), flags);
}

bool VideoConfiguration::isValidQualityLevel(int32_t qualityLevel, bool allowUnknown)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "isValidQualityLevel", "(IZ)Z");
  bool ret = env->CallStaticBooleanMethod(GetClass(), method_id, qualityLevel, allowUnknown);
  return ret;
}

bool VideoConfiguration::isValidCaptureMode(int32_t captureMode, bool allowUnknown)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "isValidCaptureMode", "(IZ)Z");
  bool ret = env->CallStaticBooleanMethod(GetClass(), method_id, captureMode, allowUnknown);
  return ret;
}

jclass VideoConfiguration::Builder::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/video/VideoConfiguration$Builder");
  return cached_class;
}

void VideoConfiguration::Builder::destroy(const VideoConfiguration::Builder* object)
{
  delete object;
}

VideoConfiguration::Builder::Builder(int32_t qualityLevel, int32_t captureMode) : VideoConfiguration::Builder(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaVideoConfigurationBuilderObject(qualityLevel, captureMode)).Get()) {}

::com::google::android::gms::games::video::VideoConfiguration::Builder& VideoConfiguration::Builder::setQualityLevel(int32_t qualityLevel) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setQualityLevel", "(I)Lcom/google/android/gms/games/video/VideoConfiguration$Builder;");
  ::com::google::android::gms::games::video::VideoConfiguration::Builder* ret = new ::com::google::android::gms::games::video::VideoConfiguration::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, qualityLevel)).Get());
  return *ret;
}

::com::google::android::gms::games::video::VideoConfiguration::Builder& VideoConfiguration::Builder::setCaptureMode(int32_t captureMode) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setCaptureMode", "(I)Lcom/google/android/gms/games/video/VideoConfiguration$Builder;");
  ::com::google::android::gms::games::video::VideoConfiguration::Builder* ret = new ::com::google::android::gms::games::video::VideoConfiguration::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, captureMode)).Get());
  return *ret;
}

::com::google::android::gms::games::video::VideoConfiguration::Builder& VideoConfiguration::Builder::setMicEnabled(bool micEnabled) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setMicEnabled", "(Z)Lcom/google/android/gms/games/video/VideoConfiguration$Builder;");
  ::com::google::android::gms::games::video::VideoConfiguration::Builder* ret = new ::com::google::android::gms::games::video::VideoConfiguration::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, micEnabled)).Get());
  return *ret;
}

::com::google::android::gms::games::video::VideoConfiguration::Builder& VideoConfiguration::Builder::setCameraEnabled(bool cameraEnabled) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setCameraEnabled", "(Z)Lcom/google/android/gms/games/video/VideoConfiguration$Builder;");
  ::com::google::android::gms::games::video::VideoConfiguration::Builder* ret = new ::com::google::android::gms::games::video::VideoConfiguration::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, cameraEnabled)).Get());
  return *ret;
}

::com::google::android::gms::games::video::VideoConfiguration& VideoConfiguration::Builder::build() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "build", "()Lcom/google/android/gms/games/video/VideoConfiguration;");
  ::com::google::android::gms::games::video::VideoConfiguration* ret = new ::com::google::android::gms::games::video::VideoConfiguration(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace video
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

