#include "com/google/android/gms/games/play_games.hpp"
#include <memory>
#include "com/google/android/gms/games/achievements_client.hpp"
#include "com/google/android/gms/games/events_client.hpp"
#include "com/google/android/gms/games/games_sign_in_client.hpp"
#include "com/google/android/gms/games/leaderboards_client.hpp"
#include "com/google/android/gms/games/player_stats_client.hpp"
#include "com/google/android/gms/games/players_client.hpp"
#include "com/google/android/gms/games/recall_client.hpp"
#include "com/google/android/gms/games/snapshots_client.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass PlayGames::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayGames");
  return cached_class;
}

void PlayGames::destroy(const PlayGames* object)
{
  delete object;
}

::com::google::android::gms::games::AchievementsClient& PlayGames::getAchievementsClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getAchievementsClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/AchievementsClient;");
  ::com::google::android::gms::games::AchievementsClient* ret = new ::com::google::android::gms::games::AchievementsClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::EventsClient& PlayGames::getEventsClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getEventsClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/EventsClient;");
  ::com::google::android::gms::games::EventsClient* ret = new ::com::google::android::gms::games::EventsClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::GamesSignInClient& PlayGames::getGamesSignInClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getGamesSignInClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/GamesSignInClient;");
  ::com::google::android::gms::games::GamesSignInClient* ret = new ::com::google::android::gms::games::GamesSignInClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::RecallClient& PlayGames::getRecallClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getRecallClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/RecallClient;");
  ::com::google::android::gms::games::RecallClient* ret = new ::com::google::android::gms::games::RecallClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::LeaderboardsClient& PlayGames::getLeaderboardsClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getLeaderboardsClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/LeaderboardsClient;");
  ::com::google::android::gms::games::LeaderboardsClient* ret = new ::com::google::android::gms::games::LeaderboardsClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::PlayersClient& PlayGames::getPlayersClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getPlayersClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/PlayersClient;");
  ::com::google::android::gms::games::PlayersClient* ret = new ::com::google::android::gms::games::PlayersClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::PlayerStatsClient& PlayGames::getPlayerStatsClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getPlayerStatsClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/PlayerStatsClient;");
  ::com::google::android::gms::games::PlayerStatsClient* ret = new ::com::google::android::gms::games::PlayerStatsClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::SnapshotsClient& PlayGames::getSnapshotsClient(const jobject activity)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getSnapshotsClient", "(Landroid/app/Activity;)Lcom/google/android/gms/games/SnapshotsClient;");
  ::com::google::android::gms::games::SnapshotsClient* ret = new ::com::google::android::gms::games::SnapshotsClient(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(activity).GetImpl())).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

