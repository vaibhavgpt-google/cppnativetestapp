#include "com/google/android/gms/games/leaderboards_client.hpp"
#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/common/api/releasable.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/score_submission_data.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject LeaderboardsClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getAllLeaderboardsIntent") == 0)
  {
    auto result = reinterpret_cast<LeaderboardsClient*>(object_pointer)->get_all_leaderboards_intent_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }

  return nullptr;
}

}  // namespace

LeaderboardsClient* LeaderboardsClient::ImplementInterface(getAllLeaderboardsIntentCallback get_all_leaderboards_intent_callback, getLeaderboardIntentCallback get_leaderboard_intent_callback, loadLeaderboardMetadataCallback load_leaderboard_metadata_callback, loadCurrentPlayerLeaderboardScoreCallback load_current_player_leaderboard_score_callback, loadTopScoresCallback load_top_scores_callback, loadPlayerCenteredScoresCallback load_player_centered_scores_callback, loadMoreScoresCallback load_more_scores_callback, submitScoreCallback submit_score_callback, submitScoreImmediateCallback submit_score_immediate_callback)
{
  LeaderboardsClient* instance = new LeaderboardsClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/LeaderboardsClient", instance, LeaderboardsClientProxyCallback)));
  instance->get_all_leaderboards_intent_callback_ = get_all_leaderboards_intent_callback;
  instance->get_leaderboard_intent_callback_ = get_leaderboard_intent_callback;
  instance->load_leaderboard_metadata_callback_ = load_leaderboard_metadata_callback;
  instance->load_current_player_leaderboard_score_callback_ = load_current_player_leaderboard_score_callback;
  instance->load_top_scores_callback_ = load_top_scores_callback;
  instance->load_player_centered_scores_callback_ = load_player_centered_scores_callback;
  instance->load_more_scores_callback_ = load_more_scores_callback;
  instance->submit_score_callback_ = submit_score_callback;
  instance->submit_score_immediate_callback_ = submit_score_immediate_callback;
  return instance;
}

jclass LeaderboardsClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/LeaderboardsClient");
  return cached_class;
}

void LeaderboardsClient::destroy(const LeaderboardsClient* object)
{
  delete object;
}

::gni::Task& LeaderboardsClient::getAllLeaderboardsIntent() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAllLeaderboardsIntent", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::getLeaderboardIntent(const ::java::lang::String& leaderboardId, int32_t timeSpan, int32_t collection) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLeaderboardIntent", "(Ljava/lang/String;II)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), timeSpan, collection)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::loadLeaderboardMetadata(const ::java::lang::String& leaderboardId, bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadLeaderboardMetadata", "(Ljava/lang/String;Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), forceReload)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::loadCurrentPlayerLeaderboardScore(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadCurrentPlayerLeaderboardScore", "(Ljava/lang/String;II)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), span, leaderboardCollection)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::loadTopScores(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection, int32_t maxResults, bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadTopScores", "(Ljava/lang/String;IIIZ)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), span, leaderboardCollection, maxResults, forceReload)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::loadPlayerCenteredScores(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection, int32_t maxResults, bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadPlayerCenteredScores", "(Ljava/lang/String;IIIZ)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), span, leaderboardCollection, maxResults, forceReload)).Get());
  return *ret;
}

::gni::Task& LeaderboardsClient::loadMoreScores(const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer& buffer, int32_t maxResults, int32_t pageDirection) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadMoreScores", "(Lcom/google/android/gms/games/leaderboard/LeaderboardScoreBuffer;II)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, buffer.GetImpl(), maxResults, pageDirection)).Get());
  return *ret;
}

void LeaderboardsClient::submitScore(const ::java::lang::String& leaderboardId, int64_t score, const ::java::lang::String& scoreTag) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "submitScore", "(Ljava/lang/String;JLjava/lang/String;)V");
  env->CallVoidMethod(GetImpl(), method_id, leaderboardId.GetImpl(), score, scoreTag.GetImpl());
}

::gni::Task& LeaderboardsClient::submitScoreImmediate(const ::java::lang::String& leaderboardId, int64_t score, const ::java::lang::String& scoreTag) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "submitScoreImmediate", "(Ljava/lang/String;JLjava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, leaderboardId.GetImpl(), score, scoreTag.GetImpl())).Get());
  return *ret;
}

jclass LeaderboardsClient::LeaderboardScores::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/LeaderboardsClient$LeaderboardScores");
  return cached_class;
}

void LeaderboardsClient::LeaderboardScores::destroy(const LeaderboardsClient::LeaderboardScores* object)
{
  delete object;
}

::com::google::android::gms::games::leaderboard::Leaderboard& LeaderboardsClient::LeaderboardScores::getLeaderboard() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLeaderboard", "()Lcom/google/android/gms/games/leaderboard/Leaderboard;");
  ::com::google::android::gms::games::leaderboard::Leaderboard* ret = new ::com::google::android::gms::games::leaderboard::Leaderboard(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer& LeaderboardsClient::LeaderboardScores::getScores() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScores", "()Lcom/google/android/gms/games/leaderboard/LeaderboardScoreBuffer;");
  ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer* ret = new ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

void LeaderboardsClient::LeaderboardScores::release() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "release", "()V");
  env->CallVoidMethod(GetImpl(), method_id);
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

