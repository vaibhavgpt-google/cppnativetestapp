#include "com/google/android/gms/games/leaderboard/leaderboard_variant.h"

#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"

LeaderboardVariant* LeaderboardVariant_wrapJniReference(jobject jobj) {
  return reinterpret_cast<LeaderboardVariant*>(new ::com::google::android::gms::games::leaderboard::LeaderboardVariant(jobj));
}

jobject LeaderboardVariant_getJniReference(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->GetImpl();
}

LeaderboardVariant* LeaderboardVariant_implementInterface(LeaderboardVariant_getTimeSpanCallback leaderboard_variant_get_time_span_callback, LeaderboardVariant_getCollectionCallback leaderboard_variant_get_collection_callback, LeaderboardVariant_hasPlayerInfoCallback leaderboard_variant_has_player_info_callback, LeaderboardVariant_getRawPlayerScoreCallback leaderboard_variant_get_raw_player_score_callback, LeaderboardVariant_getDisplayPlayerScoreCallback leaderboard_variant_get_display_player_score_callback, LeaderboardVariant_getPlayerRankCallback leaderboard_variant_get_player_rank_callback, LeaderboardVariant_getDisplayPlayerRankCallback leaderboard_variant_get_display_player_rank_callback, LeaderboardVariant_getPlayerScoreTagCallback leaderboard_variant_get_player_score_tag_callback, LeaderboardVariant_getNumScoresCallback leaderboard_variant_get_num_scores_callback) {
  return reinterpret_cast<LeaderboardVariant*>(::com::google::android::gms::games::leaderboard::LeaderboardVariant::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getTimeSpanCallback>(leaderboard_variant_get_time_span_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getCollectionCallback>(leaderboard_variant_get_collection_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::hasPlayerInfoCallback>(leaderboard_variant_has_player_info_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getRawPlayerScoreCallback>(leaderboard_variant_get_raw_player_score_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getDisplayPlayerScoreCallback>(leaderboard_variant_get_display_player_score_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getPlayerRankCallback>(leaderboard_variant_get_player_rank_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getDisplayPlayerRankCallback>(leaderboard_variant_get_display_player_rank_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getPlayerScoreTagCallback>(leaderboard_variant_get_player_score_tag_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardVariant::getNumScoresCallback>(leaderboard_variant_get_num_scores_callback)));
}

void LeaderboardVariant_destroy(const LeaderboardVariant* leaderboard_variant) {
  ::com::google::android::gms::games::leaderboard::LeaderboardVariant::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant));
}

int32_t LeaderboardVariant_getTimeSpan(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getTimeSpan();
}

int32_t LeaderboardVariant_getCollection(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getCollection();
}

bool LeaderboardVariant_hasPlayerInfo(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->hasPlayerInfo();
}

int64_t LeaderboardVariant_getRawPlayerScore(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getRawPlayerScore();
}

String* LeaderboardVariant_getDisplayPlayerScore(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getDisplayPlayerScore());
}

int64_t LeaderboardVariant_getPlayerRank(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getPlayerRank();
}

String* LeaderboardVariant_getDisplayPlayerRank(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getDisplayPlayerRank());
}

String* LeaderboardVariant_getPlayerScoreTag(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getPlayerScoreTag());
}

int64_t LeaderboardVariant_getNumScores(const LeaderboardVariant* leaderboard_variant) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(leaderboard_variant)->getNumScores();
}

int32_t LeaderboardVariant_get_COLLECTION_PUBLIC() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::COLLECTION_PUBLIC;
}

int32_t LeaderboardVariant_get_COLLECTION_FRIENDS() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::COLLECTION_FRIENDS;
}

int32_t LeaderboardVariant_get_TIME_SPAN_DAILY() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::TIME_SPAN_DAILY;
}

int32_t LeaderboardVariant_get_TIME_SPAN_WEEKLY() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::TIME_SPAN_WEEKLY;
}

int32_t LeaderboardVariant_get_TIME_SPAN_ALL_TIME() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::TIME_SPAN_ALL_TIME;
}

int32_t LeaderboardVariant_get_NUM_TIME_SPANS() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::NUM_TIME_SPANS;
}

int32_t LeaderboardVariant_get_PLAYER_SCORE_UNKNOWN() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::PLAYER_SCORE_UNKNOWN;
}

int32_t LeaderboardVariant_get_PLAYER_RANK_UNKNOWN() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::PLAYER_RANK_UNKNOWN;
}

int32_t LeaderboardVariant_get_NUM_SCORES_UNKNOWN() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardVariant::NUM_SCORES_UNKNOWN;
}
