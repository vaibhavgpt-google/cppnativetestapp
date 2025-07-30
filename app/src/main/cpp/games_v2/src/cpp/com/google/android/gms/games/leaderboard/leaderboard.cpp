#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"
#include "java/util/array_list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace leaderboard {

namespace {

jobject LeaderboardProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getLeaderboardId") == 0)
  {
    auto result = reinterpret_cast<Leaderboard*>(object_pointer)->get_leaderboard_id_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDisplayName") == 0)
  {
    auto result = reinterpret_cast<Leaderboard*>(object_pointer)->get_display_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getIconImageUri") == 0)
  {
    auto result = reinterpret_cast<Leaderboard*>(object_pointer)->get_icon_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getVariants") == 0)
  {
    auto result = reinterpret_cast<Leaderboard*>(object_pointer)->get_variants_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

Leaderboard* Leaderboard::ImplementInterface(getLeaderboardIdCallback get_leaderboard_id_callback, getDisplayNameCallback get_display_name_callback, getIconImageUriCallback get_icon_image_uri_callback, getScoreOrderCallback get_score_order_callback, getVariantsCallback get_variants_callback)
{
  Leaderboard* instance = new Leaderboard(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/leaderboard/Leaderboard", instance, LeaderboardProxyCallback)));
  instance->get_leaderboard_id_callback_ = get_leaderboard_id_callback;
  instance->get_display_name_callback_ = get_display_name_callback;
  instance->get_icon_image_uri_callback_ = get_icon_image_uri_callback;
  instance->get_score_order_callback_ = get_score_order_callback;
  instance->get_variants_callback_ = get_variants_callback;
  return instance;
}

jclass Leaderboard::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/Leaderboard");
  return cached_class;
}

void Leaderboard::destroy(const Leaderboard* object)
{
  delete object;
}

::java::lang::String& Leaderboard::getLeaderboardId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLeaderboardId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& Leaderboard::getDisplayName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& Leaderboard::getIconImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getIconImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int32_t Leaderboard::getScoreOrder() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreOrder", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>& Leaderboard::getVariants() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getVariants", "()Ljava/util/ArrayList;");
  ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>* ret = new ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

