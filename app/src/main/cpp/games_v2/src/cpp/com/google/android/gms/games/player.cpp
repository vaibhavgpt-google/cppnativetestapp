#include "com/google/android/gms/games/player.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/current_player_info.hpp"
#include "com/google/android/gms/games/player_level_info.hpp"
#include "com/google/android/gms/games/player_relationship_info.hpp"
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

jobject PlayerProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getPlayerId") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_player_id_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDisplayName") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_display_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getIconImageUri") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_icon_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getHiResImageUri") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_hi_res_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getTitle") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_title_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getLevelInfo") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_level_info_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getBannerImageLandscapeUri") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_banner_image_landscape_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getBannerImagePortraitUri") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_banner_image_portrait_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getRelationshipInfo") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_relationship_info_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getCurrentPlayerInfo") == 0)
  {
    auto result = reinterpret_cast<Player*>(object_pointer)->get_current_player_info_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

Player* Player::ImplementInterface(getPlayerIdCallback get_player_id_callback, getDisplayNameCallback get_display_name_callback, hasIconImageCallback has_icon_image_callback, getIconImageUriCallback get_icon_image_uri_callback, hasHiResImageCallback has_hi_res_image_callback, getHiResImageUriCallback get_hi_res_image_uri_callback, getRetrievedTimestampCallback get_retrieved_timestamp_callback, getTitleCallback get_title_callback, getLevelInfoCallback get_level_info_callback, getBannerImageLandscapeUriCallback get_banner_image_landscape_uri_callback, getBannerImagePortraitUriCallback get_banner_image_portrait_uri_callback, getRelationshipInfoCallback get_relationship_info_callback, getCurrentPlayerInfoCallback get_current_player_info_callback)
{
  Player* instance = new Player(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/Player", instance, PlayerProxyCallback)));
  instance->get_player_id_callback_ = get_player_id_callback;
  instance->get_display_name_callback_ = get_display_name_callback;
  instance->has_icon_image_callback_ = has_icon_image_callback;
  instance->get_icon_image_uri_callback_ = get_icon_image_uri_callback;
  instance->has_hi_res_image_callback_ = has_hi_res_image_callback;
  instance->get_hi_res_image_uri_callback_ = get_hi_res_image_uri_callback;
  instance->get_retrieved_timestamp_callback_ = get_retrieved_timestamp_callback;
  instance->get_title_callback_ = get_title_callback;
  instance->get_level_info_callback_ = get_level_info_callback;
  instance->get_banner_image_landscape_uri_callback_ = get_banner_image_landscape_uri_callback;
  instance->get_banner_image_portrait_uri_callback_ = get_banner_image_portrait_uri_callback;
  instance->get_relationship_info_callback_ = get_relationship_info_callback;
  instance->get_current_player_info_callback_ = get_current_player_info_callback;
  return instance;
}

jclass Player::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/Player");
  return cached_class;
}

void Player::destroy(const Player* object)
{
  delete object;
}

::java::lang::String& Player::getPlayerId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayerId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Player::getDisplayName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool Player::hasIconImage() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasIconImage", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

::android::net::Uri& Player::getIconImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getIconImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool Player::hasHiResImage() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasHiResImage", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

::android::net::Uri& Player::getHiResImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getHiResImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t Player::getRetrievedTimestamp() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRetrievedTimestamp", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& Player::getTitle() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getTitle", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::PlayerLevelInfo& Player::getLevelInfo() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLevelInfo", "()Lcom/google/android/gms/games/PlayerLevelInfo;");
  ::com::google::android::gms::games::PlayerLevelInfo* ret = new ::com::google::android::gms::games::PlayerLevelInfo(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Player::getBannerImageLandscapeUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getBannerImageLandscapeUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Player::getBannerImagePortraitUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getBannerImagePortraitUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::PlayerRelationshipInfo& Player::getRelationshipInfo() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRelationshipInfo", "()Lcom/google/android/gms/games/PlayerRelationshipInfo;");
  ::com::google::android::gms::games::PlayerRelationshipInfo* ret = new ::com::google::android::gms::games::PlayerRelationshipInfo(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::CurrentPlayerInfo& Player::getCurrentPlayerInfo() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentPlayerInfo", "()Lcom/google/android/gms/games/CurrentPlayerInfo;");
  ::com::google::android::gms::games::CurrentPlayerInfo* ret = new ::com::google::android::gms::games::CurrentPlayerInfo(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

