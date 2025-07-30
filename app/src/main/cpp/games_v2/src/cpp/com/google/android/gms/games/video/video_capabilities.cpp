#include "com/google/android/gms/games/video/video_capabilities.hpp"
#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace video {

jclass VideoCapabilities::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/video/VideoCapabilities");
  return cached_class;
}

void VideoCapabilities::destroy(const VideoCapabilities* object)
{
  delete object;
}

bool VideoCapabilities::isMicSupported() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isMicSupported", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoCapabilities::isCameraSupported() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isCameraSupported", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoCapabilities::isWriteStorageSupported() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isWriteStorageSupported", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoCapabilities::getSupportedCaptureModes() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSupportedCaptureModes", "()[Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoCapabilities::getSupportedQualityLevels() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSupportedQualityLevels", "()[Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

bool VideoCapabilities::supportsCaptureMode(int32_t captureMode) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "supportsCaptureMode", "(I)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, captureMode);
  return ret;
}

bool VideoCapabilities::supportsQualityLevel(int32_t qualityLevel) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "supportsQualityLevel", "(I)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, qualityLevel);
  return ret;
}

bool VideoCapabilities::isFullySupported(int32_t captureMode, int32_t qualityLevel) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isFullySupported", "(II)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, captureMode, qualityLevel);
  return ret;
}

int32_t VideoCapabilities::hashCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hashCode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& VideoCapabilities::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

void VideoCapabilities::writeToParcel(const ::android::os::Parcel& out, int32_t flags) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeToParcel", "(Landroid/os/Parcel;I)V");
  env->CallVoidMethod(GetImpl(), method_id, out.GetImpl(), flags);
}

}  // namespace video
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

