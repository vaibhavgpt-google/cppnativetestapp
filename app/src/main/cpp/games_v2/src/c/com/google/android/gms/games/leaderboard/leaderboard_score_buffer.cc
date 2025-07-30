#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.h"

#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.hpp"

LeaderboardScoreBuffer* LeaderboardScoreBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<LeaderboardScoreBuffer*>(new ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer(jobj));
}

jobject LeaderboardScoreBuffer_getJniReference(const LeaderboardScoreBuffer* leaderboard_score_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer*>(leaderboard_score_buffer)->GetImpl();
}

void LeaderboardScoreBuffer_destroy(const LeaderboardScoreBuffer* leaderboard_score_buffer) {
  ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer*>(leaderboard_score_buffer));
}

LeaderboardScore* LeaderboardScoreBuffer_get(const LeaderboardScoreBuffer* leaderboard_score_buffer, int32_t position) {
  return reinterpret_cast<LeaderboardScore*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer*>(leaderboard_score_buffer)->get(position));
}
