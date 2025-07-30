#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

namespace {

jobject SnapshotMetadataProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getGame") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_game_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getOwner") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_owner_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getSnapshotId") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_snapshot_id_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getCoverImageUri") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_cover_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getUniqueName") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_unique_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDescription") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_description_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDeviceName") == 0)
  {
    auto result = reinterpret_cast<SnapshotMetadata*>(object_pointer)->get_device_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

SnapshotMetadata* SnapshotMetadata::ImplementInterface(getGameCallback get_game_callback, getOwnerCallback get_owner_callback, getSnapshotIdCallback get_snapshot_id_callback, getCoverImageUriCallback get_cover_image_uri_callback, getCoverImageAspectRatioCallback get_cover_image_aspect_ratio_callback, getUniqueNameCallback get_unique_name_callback, getDescriptionCallback get_description_callback, getLastModifiedTimestampCallback get_last_modified_timestamp_callback, getPlayedTimeCallback get_played_time_callback, hasChangePendingCallback has_change_pending_callback, getProgressValueCallback get_progress_value_callback, getDeviceNameCallback get_device_name_callback)
{
  SnapshotMetadata* instance = new SnapshotMetadata(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/snapshot/SnapshotMetadata", instance, SnapshotMetadataProxyCallback)));
  instance->get_game_callback_ = get_game_callback;
  instance->get_owner_callback_ = get_owner_callback;
  instance->get_snapshot_id_callback_ = get_snapshot_id_callback;
  instance->get_cover_image_uri_callback_ = get_cover_image_uri_callback;
  instance->get_cover_image_aspect_ratio_callback_ = get_cover_image_aspect_ratio_callback;
  instance->get_unique_name_callback_ = get_unique_name_callback;
  instance->get_description_callback_ = get_description_callback;
  instance->get_last_modified_timestamp_callback_ = get_last_modified_timestamp_callback;
  instance->get_played_time_callback_ = get_played_time_callback;
  instance->has_change_pending_callback_ = has_change_pending_callback;
  instance->get_progress_value_callback_ = get_progress_value_callback;
  instance->get_device_name_callback_ = get_device_name_callback;
  return instance;
}

jclass SnapshotMetadata::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotMetadata");
  return cached_class;
}

void SnapshotMetadata::destroy(const SnapshotMetadata* object)
{
  delete object;
}

::com::google::android::gms::games::Game& SnapshotMetadata::getGame() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getGame", "()Lcom/google/android/gms/games/Game;");
  ::com::google::android::gms::games::Game* ret = new ::com::google::android::gms::games::Game(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::Player& SnapshotMetadata::getOwner() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getOwner", "()Lcom/google/android/gms/games/Player;");
  ::com::google::android::gms::games::Player* ret = new ::com::google::android::gms::games::Player(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& SnapshotMetadata::getSnapshotId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSnapshotId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& SnapshotMetadata::getCoverImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCoverImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

float SnapshotMetadata::getCoverImageAspectRatio() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCoverImageAspectRatio", "()F");
  float ret = env->CallFloatMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& SnapshotMetadata::getUniqueName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getUniqueName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& SnapshotMetadata::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t SnapshotMetadata::getLastModifiedTimestamp() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLastModifiedTimestamp", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

int64_t SnapshotMetadata::getPlayedTime() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayedTime", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

bool SnapshotMetadata::hasChangePending() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasChangePending", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int64_t SnapshotMetadata::getProgressValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getProgressValue", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& SnapshotMetadata::getDeviceName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDeviceName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

