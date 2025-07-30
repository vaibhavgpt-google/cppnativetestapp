#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include <memory>
#include "android/net/uri.hpp"
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
namespace leaderboard {

namespace {

jobject LeaderboardScoreProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getDisplayRank") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_display_rank_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDisplayScore") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_display_score_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getScoreHolderDisplayName") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_score_holder_display_name_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getScoreHolderIconImageUri") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_score_holder_icon_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getScoreHolderHiResImageUri") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_score_holder_hi_res_image_uri_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getScoreHolder") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_score_holder_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getScoreTag") == 0)
  {
    auto result = reinterpret_cast<LeaderboardScore*>(object_pointer)->get_score_tag_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

LeaderboardScore* LeaderboardScore::ImplementInterface(getRankCallback get_rank_callback, getDisplayRankCallback get_display_rank_callback, getDisplayScoreCallback get_display_score_callback, getRawScoreCallback get_raw_score_callback, getTimestampMillisCallback get_timestamp_millis_callback, getScoreHolderDisplayNameCallback get_score_holder_display_name_callback, getScoreHolderIconImageUriCallback get_score_holder_icon_image_uri_callback, getScoreHolderHiResImageUriCallback get_score_holder_hi_res_image_uri_callback, getScoreHolderCallback get_score_holder_callback, getScoreTagCallback get_score_tag_callback)
{
  LeaderboardScore* instance = new LeaderboardScore(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/leaderboard/LeaderboardScore", instance, LeaderboardScoreProxyCallback)));
  instance->get_rank_callback_ = get_rank_callback;
  instance->get_display_rank_callback_ = get_display_rank_callback;
  instance->get_display_score_callback_ = get_display_score_callback;
  instance->get_raw_score_callback_ = get_raw_score_callback;
  instance->get_timestamp_millis_callback_ = get_timestamp_millis_callback;
  instance->get_score_holder_display_name_callback_ = get_score_holder_display_name_callback;
  instance->get_score_holder_icon_image_uri_callback_ = get_score_holder_icon_image_uri_callback;
  instance->get_score_holder_hi_res_image_uri_callback_ = get_score_holder_hi_res_image_uri_callback;
  instance->get_score_holder_callback_ = get_score_holder_callback;
  instance->get_score_tag_callback_ = get_score_tag_callback;
  return instance;
}

jclass LeaderboardScore::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/LeaderboardScore");
  return cached_class;
}

void LeaderboardScore::destroy(const LeaderboardScore* object)
{
  delete object;
}

int64_t LeaderboardScore::getRank() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRank", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& LeaderboardScore::getDisplayRank() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayRank", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& LeaderboardScore::getDisplayScore() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayScore", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t LeaderboardScore::getRawScore() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRawScore", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

int64_t LeaderboardScore::getTimestampMillis() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getTimestampMillis", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& LeaderboardScore::getScoreHolderDisplayName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreHolderDisplayName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& LeaderboardScore::getScoreHolderIconImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreHolderIconImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& LeaderboardScore::getScoreHolderHiResImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreHolderHiResImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::Player& LeaderboardScore::getScoreHolder() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreHolder", "()Lcom/google/android/gms/games/Player;");
  ::com::google::android::gms::games::Player* ret = new ::com::google::android::gms::games::Player(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& LeaderboardScore::getScoreTag() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreTag", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

