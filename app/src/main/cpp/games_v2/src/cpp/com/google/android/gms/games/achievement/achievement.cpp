#include "com/google/android/gms/games/achievement/achievement.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
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
namespace achievement {

namespace {

jobject AchievementProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getAchievementId") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_achievement_id_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getName") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDescription") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_description_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getUnlockedImageUri") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_unlocked_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getRevealedImageUri") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_revealed_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getFormattedTotalSteps") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_formatted_total_steps_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getPlayer") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_player_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getFormattedCurrentSteps") == 0)
  {
    auto result = reinterpret_cast<Achievement*>(object_pointer)->get_formatted_current_steps_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

Achievement* Achievement::ImplementInterface(getAchievementIdCallback get_achievement_id_callback, getTypeCallback get_type_callback, getNameCallback get_name_callback, getDescriptionCallback get_description_callback, getUnlockedImageUriCallback get_unlocked_image_uri_callback, getRevealedImageUriCallback get_revealed_image_uri_callback, getTotalStepsCallback get_total_steps_callback, getFormattedTotalStepsCallback get_formatted_total_steps_callback, getPlayerCallback get_player_callback, getStateCallback get_state_callback, getCurrentStepsCallback get_current_steps_callback, getFormattedCurrentStepsCallback get_formatted_current_steps_callback, getLastUpdatedTimestampCallback get_last_updated_timestamp_callback, getXpValueCallback get_xp_value_callback)
{
  Achievement* instance = new Achievement(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/achievement/Achievement", instance, AchievementProxyCallback)));
  instance->get_achievement_id_callback_ = get_achievement_id_callback;
  instance->get_type_callback_ = get_type_callback;
  instance->get_name_callback_ = get_name_callback;
  instance->get_description_callback_ = get_description_callback;
  instance->get_unlocked_image_uri_callback_ = get_unlocked_image_uri_callback;
  instance->get_revealed_image_uri_callback_ = get_revealed_image_uri_callback;
  instance->get_total_steps_callback_ = get_total_steps_callback;
  instance->get_formatted_total_steps_callback_ = get_formatted_total_steps_callback;
  instance->get_player_callback_ = get_player_callback;
  instance->get_state_callback_ = get_state_callback;
  instance->get_current_steps_callback_ = get_current_steps_callback;
  instance->get_formatted_current_steps_callback_ = get_formatted_current_steps_callback;
  instance->get_last_updated_timestamp_callback_ = get_last_updated_timestamp_callback;
  instance->get_xp_value_callback_ = get_xp_value_callback;
  return instance;
}

jclass Achievement::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/achievement/Achievement");
  return cached_class;
}

void Achievement::destroy(const Achievement* object)
{
  delete object;
}

::java::lang::String& Achievement::getAchievementId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAchievementId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int32_t Achievement::getType() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getType", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& Achievement::getName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Achievement::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Achievement::getUnlockedImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getUnlockedImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Achievement::getRevealedImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRevealedImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int32_t Achievement::getTotalSteps() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getTotalSteps", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& Achievement::getFormattedTotalSteps() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFormattedTotalSteps", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::Player& Achievement::getPlayer() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayer", "()Lcom/google/android/gms/games/Player;");
  ::com::google::android::gms::games::Player* ret = new ::com::google::android::gms::games::Player(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int32_t Achievement::getState() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getState", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t Achievement::getCurrentSteps() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentSteps", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& Achievement::getFormattedCurrentSteps() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFormattedCurrentSteps", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t Achievement::getLastUpdatedTimestamp() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLastUpdatedTimestamp", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

int64_t Achievement::getXpValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getXpValue", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace achievement
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

