#include "com/google/android/gms/games/game.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
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

namespace {

jobject GameProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getApplicationId") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_application_id_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDisplayName") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_display_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getPrimaryCategory") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_primary_category_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getSecondaryCategory") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_secondary_category_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDescription") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_description_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDeveloperName") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_developer_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getIconImageUri") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_icon_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getHiResImageUri") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_hi_res_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getFeaturedImageUri") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_featured_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getThemeColor") == 0)
  {
    auto result = reinterpret_cast<Game*>(object_pointer)->get_theme_color_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

Game* Game::ImplementInterface(getApplicationIdCallback get_application_id_callback, getDisplayNameCallback get_display_name_callback, getPrimaryCategoryCallback get_primary_category_callback, getSecondaryCategoryCallback get_secondary_category_callback, getDescriptionCallback get_description_callback, getDeveloperNameCallback get_developer_name_callback, getIconImageUriCallback get_icon_image_uri_callback, getHiResImageUriCallback get_hi_res_image_uri_callback, getFeaturedImageUriCallback get_featured_image_uri_callback, getAchievementTotalCountCallback get_achievement_total_count_callback, getLeaderboardCountCallback get_leaderboard_count_callback, areSnapshotsEnabledCallback are_snapshots_enabled_callback, getThemeColorCallback get_theme_color_callback, hasGamepadSupportCallback has_gamepad_support_callback)
{
  Game* instance = new Game(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/Game", instance, GameProxyCallback)));
  instance->get_application_id_callback_ = get_application_id_callback;
  instance->get_display_name_callback_ = get_display_name_callback;
  instance->get_primary_category_callback_ = get_primary_category_callback;
  instance->get_secondary_category_callback_ = get_secondary_category_callback;
  instance->get_description_callback_ = get_description_callback;
  instance->get_developer_name_callback_ = get_developer_name_callback;
  instance->get_icon_image_uri_callback_ = get_icon_image_uri_callback;
  instance->get_hi_res_image_uri_callback_ = get_hi_res_image_uri_callback;
  instance->get_featured_image_uri_callback_ = get_featured_image_uri_callback;
  instance->get_achievement_total_count_callback_ = get_achievement_total_count_callback;
  instance->get_leaderboard_count_callback_ = get_leaderboard_count_callback;
  instance->are_snapshots_enabled_callback_ = are_snapshots_enabled_callback;
  instance->get_theme_color_callback_ = get_theme_color_callback;
  instance->has_gamepad_support_callback_ = has_gamepad_support_callback;
  return instance;
}

jclass Game::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/Game");
  return cached_class;
}

void Game::destroy(const Game* object)
{
  delete object;
}

::java::lang::String& Game::getApplicationId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getApplicationId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Game::getDisplayName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Game::getPrimaryCategory() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPrimaryCategory", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Game::getSecondaryCategory() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSecondaryCategory", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Game::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Game::getDeveloperName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDeveloperName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Game::getIconImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getIconImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Game::getHiResImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getHiResImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Game::getFeaturedImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFeaturedImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int32_t Game::getAchievementTotalCount() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAchievementTotalCount", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t Game::getLeaderboardCount() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLeaderboardCount", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

bool Game::areSnapshotsEnabled() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "areSnapshotsEnabled", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& Game::getThemeColor() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getThemeColor", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool Game::hasGamepadSupport() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasGamepadSupport", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

