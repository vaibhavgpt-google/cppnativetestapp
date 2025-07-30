#include "com/google/android/gms/games/snapshot/snapshot_metadata_change.hpp"
#include <memory>
#include "android/graphics/bitmap.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/long.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

namespace {

jobject CreateJavaSnapshotMetadataChangeBuilderObject() {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(SnapshotMetadataChange::Builder::GetClass(), "<init>", "()V");
  return env->NewObject(SnapshotMetadataChange::Builder::GetClass(), method_id);
}

jobject SnapshotMetadataChangeProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getDescription") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadataChange*>(object_pointer)->get_description_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getPlayedTimeMillis") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadataChange*>(object_pointer)->get_played_time_millis_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getCoverImage") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadataChange*>(object_pointer)->get_cover_image_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getProgressValue") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadataChange*>(object_pointer)->get_progress_value_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

SnapshotMetadataChange* SnapshotMetadataChange::ImplementInterface(getDescriptionCallback get_description_callback, getPlayedTimeMillisCallback get_played_time_millis_callback, getCoverImageCallback get_cover_image_callback, getProgressValueCallback get_progress_value_callback)
{
  SnapshotMetadataChange* instance = new SnapshotMetadataChange(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/snapshot/SnapshotMetadataChange", instance, SnapshotMetadataChangeProxyCallback)));
  instance->get_description_callback_ = get_description_callback;
  instance->get_played_time_millis_callback_ = get_played_time_millis_callback;
  instance->get_cover_image_callback_ = get_cover_image_callback;
  instance->get_progress_value_callback_ = get_progress_value_callback;
  return instance;
}

jclass SnapshotMetadataChange::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotMetadataChange");
  return cached_class;
}

void SnapshotMetadataChange::destroy(const SnapshotMetadataChange* object)
{
  delete object;
}

::java::lang::String& SnapshotMetadataChange::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::Long& SnapshotMetadataChange::getPlayedTimeMillis() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayedTimeMillis", "()Ljava/lang/Long;");
  ::java::lang::Long* ret = new ::java::lang::Long(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::graphics::Bitmap& SnapshotMetadataChange::getCoverImage() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCoverImage", "()Landroid/graphics/Bitmap;");
  ::android::graphics::Bitmap* ret = new ::android::graphics::Bitmap(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::Long& SnapshotMetadataChange::getProgressValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getProgressValue", "()Ljava/lang/Long;");
  ::java::lang::Long* ret = new ::java::lang::Long(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

jclass SnapshotMetadataChange::Builder::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder");
  return cached_class;
}

void SnapshotMetadataChange::Builder::destroy(const SnapshotMetadataChange::Builder* object)
{
  delete object;
}

SnapshotMetadataChange::Builder::Builder() : SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaSnapshotMetadataChangeBuilderObject()).Get()) {}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& SnapshotMetadataChange::Builder::setDescription(const ::java::lang::String& description) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setDescription", "(Ljava/lang/String;)Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, description.GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& SnapshotMetadataChange::Builder::setPlayedTimeMillis(int64_t playedTimeMillis) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setPlayedTimeMillis", "(J)Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, playedTimeMillis)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& SnapshotMetadataChange::Builder::setProgressValue(int64_t progressValue) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setProgressValue", "(J)Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, progressValue)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& SnapshotMetadataChange::Builder::setCoverImage(const ::android::graphics::Bitmap& coverImage) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setCoverImage", "(Landroid/graphics/Bitmap;)Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, coverImage.GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& SnapshotMetadataChange::Builder::fromMetadata(const ::com::google::android::gms::games::snapshot::SnapshotMetadata& metadata) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "fromMetadata", "(Lcom/google/android/gms/games/snapshot/SnapshotMetadata;)Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange$Builder;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, metadata.GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadataChange& SnapshotMetadataChange::Builder::build() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "build", "()Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

