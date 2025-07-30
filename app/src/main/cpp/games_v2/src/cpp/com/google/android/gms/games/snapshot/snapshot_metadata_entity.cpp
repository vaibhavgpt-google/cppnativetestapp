#include "com/google/android/gms/games/snapshot/snapshot_metadata_entity.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
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

jclass SnapshotMetadataEntity::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotMetadataEntity");
  return cached_class;
}

void SnapshotMetadataEntity::destroy(const SnapshotMetadataEntity* object)
{
  delete object;
}

::com::google::android::gms::games::Game& SnapshotMetadataEntity::getGame() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getGame", "()Lcom/google/android/gms/games/Game;");
  ::com::google::android::gms::games::Game* ret = new ::com::google::android::gms::games::Game(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::Player& SnapshotMetadataEntity::getOwner() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getOwner", "()Lcom/google/android/gms/games/Player;");
  ::com::google::android::gms::games::Player* ret = new ::com::google::android::gms::games::Player(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& SnapshotMetadataEntity::getSnapshotId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSnapshotId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& SnapshotMetadataEntity::getCoverImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCoverImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

float SnapshotMetadataEntity::getCoverImageAspectRatio() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCoverImageAspectRatio", "()F");
  float ret = env->CallFloatMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& SnapshotMetadataEntity::getUniqueName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getUniqueName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& SnapshotMetadataEntity::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t SnapshotMetadataEntity::getLastModifiedTimestamp() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLastModifiedTimestamp", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

int64_t SnapshotMetadataEntity::getPlayedTime() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayedTime", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

bool SnapshotMetadataEntity::hasChangePending() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasChangePending", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int64_t SnapshotMetadataEntity::getProgressValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getProgressValue", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& SnapshotMetadataEntity::getDeviceName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDeviceName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadata& SnapshotMetadataEntity::freeze() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "freeze", "()Lcom/google/android/gms/games/snapshot/SnapshotMetadata;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadata* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadata(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool SnapshotMetadataEntity::isDataValid() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isDataValid", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int32_t SnapshotMetadataEntity::hashCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hashCode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& SnapshotMetadataEntity::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

void SnapshotMetadataEntity::writeToParcel(const ::android::os::Parcel& out, int32_t flags) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeToParcel", "(Landroid/os/Parcel;I)V");
  env->CallVoidMethod(GetImpl(), method_id, out.GetImpl(), flags);
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

