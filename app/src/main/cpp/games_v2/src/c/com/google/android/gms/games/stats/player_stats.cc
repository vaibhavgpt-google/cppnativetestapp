#include "com/google/android/gms/games/stats/player_stats.h"

#include "com/google/android/gms/games/stats/player_stats.hpp"

PlayerStats* PlayerStats_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PlayerStats*>(new ::com::google::android::gms::games::stats::PlayerStats(jobj));
}

jobject PlayerStats_getJniReference(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->GetImpl();
}

PlayerStats* PlayerStats_implementInterface(PlayerStats_getAverageSessionLengthCallback player_stats_get_average_session_length_callback, PlayerStats_getDaysSinceLastPlayedCallback player_stats_get_days_since_last_played_callback, PlayerStats_getNumberOfPurchasesCallback player_stats_get_number_of_purchases_callback, PlayerStats_getNumberOfSessionsCallback player_stats_get_number_of_sessions_callback, PlayerStats_getSessionPercentileCallback player_stats_get_session_percentile_callback, PlayerStats_getSpendPercentileCallback player_stats_get_spend_percentile_callback) {
  return reinterpret_cast<PlayerStats*>(::com::google::android::gms::games::stats::PlayerStats::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getAverageSessionLengthCallback>(player_stats_get_average_session_length_callback), reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getDaysSinceLastPlayedCallback>(player_stats_get_days_since_last_played_callback), reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getNumberOfPurchasesCallback>(player_stats_get_number_of_purchases_callback), reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getNumberOfSessionsCallback>(player_stats_get_number_of_sessions_callback), reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getSessionPercentileCallback>(player_stats_get_session_percentile_callback), reinterpret_cast<::com::google::android::gms::games::stats::PlayerStats::getSpendPercentileCallback>(player_stats_get_spend_percentile_callback)));
}

void PlayerStats_destroy(const PlayerStats* player_stats) {
  ::com::google::android::gms::games::stats::PlayerStats::destroy(reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats));
}

float PlayerStats_getAverageSessionLength(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getAverageSessionLength();
}

int32_t PlayerStats_getDaysSinceLastPlayed(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getDaysSinceLastPlayed();
}

int32_t PlayerStats_getNumberOfPurchases(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getNumberOfPurchases();
}

int32_t PlayerStats_getNumberOfSessions(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getNumberOfSessions();
}

float PlayerStats_getSessionPercentile(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getSessionPercentile();
}

float PlayerStats_getSpendPercentile(const PlayerStats* player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::stats::PlayerStats*>(player_stats)->getSpendPercentile();
}

float PlayerStats_get_UNSET_VALUE() {
  return ::com::google::android::gms::games::stats::PlayerStats::UNSET_VALUE;
}
