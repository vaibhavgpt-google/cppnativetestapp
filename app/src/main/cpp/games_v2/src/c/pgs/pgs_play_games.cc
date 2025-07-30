#include "pgs/pgs_play_games.h"

#include "com/google/android/gms/games/play_games.hpp"

PgsPlayGames* PgsPlayGames_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayGames*>(new ::com::google::android::gms::games::PlayGames(jobj));
}

jobject PgsPlayGames_getJniReference(const PgsPlayGames* pgs_play_games) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayGames*>(pgs_play_games)->GetImpl();
}

void PgsPlayGames_destroy(const PgsPlayGames* pgs_play_games) {
  ::com::google::android::gms::games::PlayGames::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayGames*>(pgs_play_games));
}

PgsAchievementsClient* PgsPlayGames_getAchievementsClient(jobject activity) {
  return reinterpret_cast<PgsAchievementsClient*>(&::com::google::android::gms::games::PlayGames::getAchievementsClient(activity));
}

PgsEventsClient* PgsPlayGames_getEventsClient(jobject activity) {
  return reinterpret_cast<PgsEventsClient*>(&::com::google::android::gms::games::PlayGames::getEventsClient(activity));
}

PgsGamesSignInClient* PgsPlayGames_getGamesSignInClient(jobject activity) {
  return reinterpret_cast<PgsGamesSignInClient*>(&::com::google::android::gms::games::PlayGames::getGamesSignInClient(activity));
}

PgsRecallClient* PgsPlayGames_getRecallClient(jobject activity) {
  return reinterpret_cast<PgsRecallClient*>(&::com::google::android::gms::games::PlayGames::getRecallClient(activity));
}

PgsLeaderboardsClient* PgsPlayGames_getLeaderboardsClient(jobject activity) {
  return reinterpret_cast<PgsLeaderboardsClient*>(&::com::google::android::gms::games::PlayGames::getLeaderboardsClient(activity));
}

PgsPlayersClient* PgsPlayGames_getPlayersClient(jobject activity) {
  return reinterpret_cast<PgsPlayersClient*>(&::com::google::android::gms::games::PlayGames::getPlayersClient(activity));
}

PgsPlayerStatsClient* PgsPlayGames_getPlayerStatsClient(jobject activity) {
  return reinterpret_cast<PgsPlayerStatsClient*>(&::com::google::android::gms::games::PlayGames::getPlayerStatsClient(activity));
}

PgsSnapshotsClient* PgsPlayGames_getSnapshotsClient(jobject activity) {
  return reinterpret_cast<PgsSnapshotsClient*>(&::com::google::android::gms::games::PlayGames::getSnapshotsClient(activity));
}
