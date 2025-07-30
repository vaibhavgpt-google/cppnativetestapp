#include "com/google/android/gms/games/player_level_info.hpp"
#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player_level.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass PlayerLevelInfo::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayerLevelInfo");
  return cached_class;
}

void PlayerLevelInfo::destroy(const PlayerLevelInfo* object)
{
  delete object;
}

int64_t PlayerLevelInfo::getCurrentXpTotal() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentXpTotal", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

int64_t PlayerLevelInfo::getLastLevelUpTimestamp() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLastLevelUpTimestamp", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::com::google::android::gms::games::PlayerLevel& PlayerLevelInfo::getCurrentLevel() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentLevel", "()Lcom/google/android/gms/games/PlayerLevel;");
  ::com::google::android::gms::games::PlayerLevel* ret = new ::com::google::android::gms::games::PlayerLevel(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::PlayerLevel& PlayerLevelInfo::getNextLevel() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getNextLevel", "()Lcom/google/android/gms/games/PlayerLevel;");
  ::com::google::android::gms::games::PlayerLevel* ret = new ::com::google::android::gms::games::PlayerLevel(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool PlayerLevelInfo::isMaxLevel() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isMaxLevel", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int32_t PlayerLevelInfo::hashCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hashCode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

void PlayerLevelInfo::writeToParcel(const ::android::os::Parcel& out, int32_t flags) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeToParcel", "(Landroid/os/Parcel;I)V");
  env->CallVoidMethod(GetImpl(), method_id, out.GetImpl(), flags);
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

