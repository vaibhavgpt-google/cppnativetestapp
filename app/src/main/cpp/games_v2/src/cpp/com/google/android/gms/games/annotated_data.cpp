#include "com/google/android/gms/games/annotated_data.hpp"
#include <memory>
#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"
#include "com/google/android/gms/games/event/event_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include "com/google/android/gms/games/leaderboards_client.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/player_buffer.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.hpp"
#include "com/google/android/gms/games/stats/player_stats.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

template <class T>
jclass AnnotatedData<T>::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/AnnotatedData");
  return cached_class;
}

template <class T>
void AnnotatedData<T>::destroy(const AnnotatedData<T>* object)
{
  delete object;
}

template <class T>
T& AnnotatedData<T>::get() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "()Ljava/lang/Object;");
  T* ret = new T(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

template <class T>
bool AnnotatedData<T>::isStale() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isStale", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

// Forward declares of all templated types using this class
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>;
template class ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>;
