#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.hpp"
#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace leaderboard {

jclass LeaderboardScoreBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/LeaderboardScoreBuffer");
  return cached_class;
}

void LeaderboardScoreBuffer::destroy(const LeaderboardScoreBuffer* object)
{
  delete object;
}

::com::google::android::gms::games::leaderboard::LeaderboardScore& LeaderboardScoreBuffer::get(int32_t position) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Lcom/google/android/gms/games/leaderboard/LeaderboardScore;");
  ::com::google::android::gms::games::leaderboard::LeaderboardScore* ret = new ::com::google::android::gms::games::leaderboard::LeaderboardScore(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, position)).Get());
  return *ret;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

