#include "com/google/android/gms/games/stats/player_stats_buffer.h"

#include "com/google/android/gms/games/stats/player_stats_buffer.hpp"

PlayerStatsBuffer* PlayerStatsBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PlayerStatsBuffer*>(new ::com::google::android::gms::games::stats::PlayerStatsBuffer(jobj));
}

jobject PlayerStatsBuffer_getJniReference(const PlayerStatsBuffer* player_stats_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStatsBuffer*>(player_stats_buffer)->GetImpl();
}

void PlayerStatsBuffer_destroy(const PlayerStatsBuffer* player_stats_buffer) {
  ::com::google::android::gms::games::stats::PlayerStatsBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStatsBuffer*>(player_stats_buffer));
}
