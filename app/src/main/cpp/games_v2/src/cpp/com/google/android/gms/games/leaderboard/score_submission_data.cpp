#include "com/google/android/gms/games/leaderboard/score_submission_data.hpp"
#include <memory>
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

jclass ScoreSubmissionData::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/ScoreSubmissionData");
  return cached_class;
}

void ScoreSubmissionData::destroy(const ScoreSubmissionData* object)
{
  delete object;
}

::java::lang::String& ScoreSubmissionData::getLeaderboardId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getLeaderboardId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& ScoreSubmissionData::getPlayerId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayerId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result& ScoreSubmissionData::getScoreResult(int32_t timeSpan) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getScoreResult", "(I)Lcom/google/android/gms/games/leaderboard/ScoreSubmissionData$Result;");
  ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result* ret = new ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, timeSpan)).Get());
  return *ret;
}

::java::lang::String& ScoreSubmissionData::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

jclass ScoreSubmissionData::Result::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/ScoreSubmissionData$Result");
  return cached_class;
}

void ScoreSubmissionData::Result::destroy(const ScoreSubmissionData::Result* object)
{
  delete object;
}

::java::lang::String& ScoreSubmissionData::Result::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

