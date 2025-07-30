#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"
#include <memory>
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
namespace leaderboard {

namespace {

jobject LeaderboardVariantProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getDisplayPlayerScore") == 0)
  {
    auto result = reinterpret_cast<LeaderboardVariant*>(object_pointer)->get_display_player_score_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getDisplayPlayerRank") == 0)
  {
    auto result = reinterpret_cast<LeaderboardVariant*>(object_pointer)->get_display_player_rank_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getPlayerScoreTag") == 0)
  {
    auto result = reinterpret_cast<LeaderboardVariant*>(object_pointer)->get_player_score_tag_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

LeaderboardVariant* LeaderboardVariant::ImplementInterface(getTimeSpanCallback get_time_span_callback, getCollectionCallback get_collection_callback, hasPlayerInfoCallback has_player_info_callback, getRawPlayerScoreCallback get_raw_player_score_callback, getDisplayPlayerScoreCallback get_display_player_score_callback, getPlayerRankCallback get_player_rank_callback, getDisplayPlayerRankCallback get_display_player_rank_callback, getPlayerScoreTagCallback get_player_score_tag_callback, getNumScoresCallback get_num_scores_callback)
{
  LeaderboardVariant* instance = new LeaderboardVariant(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/leaderboard/LeaderboardVariant", instance, LeaderboardVariantProxyCallback)));
  instance->get_time_span_callback_ = get_time_span_callback;
  instance->get_collection_callback_ = get_collection_callback;
  instance->has_player_info_callback_ = has_player_info_callback;
  instance->get_raw_player_score_callback_ = get_raw_player_score_callback;
  instance->get_display_player_score_callback_ = get_display_player_score_callback;
  instance->get_player_rank_callback_ = get_player_rank_callback;
  instance->get_display_player_rank_callback_ = get_display_player_rank_callback;
  instance->get_player_score_tag_callback_ = get_player_score_tag_callback;
  instance->get_num_scores_callback_ = get_num_scores_callback;
  return instance;
}

jclass LeaderboardVariant::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/LeaderboardVariant");
  return cached_class;
}

void LeaderboardVariant::destroy(const LeaderboardVariant* object)
{
  delete object;
}

int32_t LeaderboardVariant::getTimeSpan() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getTimeSpan", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t LeaderboardVariant::getCollection() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCollection", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

bool LeaderboardVariant::hasPlayerInfo() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hasPlayerInfo", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int64_t LeaderboardVariant::getRawPlayerScore() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getRawPlayerScore", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& LeaderboardVariant::getDisplayPlayerScore() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayPlayerScore", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t LeaderboardVariant::getPlayerRank() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayerRank", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& LeaderboardVariant::getDisplayPlayerRank() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDisplayPlayerRank", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& LeaderboardVariant::getPlayerScoreTag() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayerScoreTag", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t LeaderboardVariant::getNumScores() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getNumScores", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

