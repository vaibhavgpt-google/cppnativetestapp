#include "com/google/android/gms/games/leaderboard/leaderboard_buffer.h"

#include "com/google/android/gms/games/leaderboard/leaderboard_buffer.hpp"

LeaderboardBuffer* LeaderboardBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<LeaderboardBuffer*>(new ::com::google::android::gms::games::leaderboard::LeaderboardBuffer(jobj));
}

jobject LeaderboardBuffer_getJniReference(const LeaderboardBuffer* leaderboard_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardBuffer*>(leaderboard_buffer)->GetImpl();
}

void LeaderboardBuffer_destroy(const LeaderboardBuffer* leaderboard_buffer) {
  ::com::google::android::gms::games::leaderboard::LeaderboardBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardBuffer*>(leaderboard_buffer));
}
