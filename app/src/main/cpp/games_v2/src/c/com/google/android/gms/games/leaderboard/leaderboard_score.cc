#include "com/google/android/gms/games/leaderboard/leaderboard_score.h"

#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"

LeaderboardScore* LeaderboardScore_wrapJniReference(jobject jobj) {
  return reinterpret_cast<LeaderboardScore*>(new ::com::google::android::gms::games::leaderboard::LeaderboardScore(jobj));
}

jobject LeaderboardScore_getJniReference(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->GetImpl();
}

LeaderboardScore* LeaderboardScore_implementInterface(LeaderboardScore_getRankCallback leaderboard_score_get_rank_callback, LeaderboardScore_getDisplayRankCallback leaderboard_score_get_display_rank_callback, LeaderboardScore_getDisplayScoreCallback leaderboard_score_get_display_score_callback, LeaderboardScore_getRawScoreCallback leaderboard_score_get_raw_score_callback, LeaderboardScore_getTimestampMillisCallback leaderboard_score_get_timestamp_millis_callback, LeaderboardScore_getScoreHolderDisplayNameCallback leaderboard_score_get_score_holder_display_name_callback, LeaderboardScore_getScoreHolderIconImageUriCallback leaderboard_score_get_score_holder_icon_image_uri_callback, LeaderboardScore_getScoreHolderHiResImageUriCallback leaderboard_score_get_score_holder_hi_res_image_uri_callback, LeaderboardScore_getScoreHolderCallback leaderboard_score_get_score_holder_callback, LeaderboardScore_getScoreTagCallback leaderboard_score_get_score_tag_callback) {
  return reinterpret_cast<LeaderboardScore*>(::com::google::android::gms::games::leaderboard::LeaderboardScore::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getRankCallback>(leaderboard_score_get_rank_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getDisplayRankCallback>(leaderboard_score_get_display_rank_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getDisplayScoreCallback>(leaderboard_score_get_display_score_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getRawScoreCallback>(leaderboard_score_get_raw_score_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getTimestampMillisCallback>(leaderboard_score_get_timestamp_millis_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getScoreHolderDisplayNameCallback>(leaderboard_score_get_score_holder_display_name_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getScoreHolderIconImageUriCallback>(leaderboard_score_get_score_holder_icon_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getScoreHolderHiResImageUriCallback>(leaderboard_score_get_score_holder_hi_res_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getScoreHolderCallback>(leaderboard_score_get_score_holder_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::LeaderboardScore::getScoreTagCallback>(leaderboard_score_get_score_tag_callback)));
}

void LeaderboardScore_destroy(const LeaderboardScore* leaderboard_score) {
  ::com::google::android::gms::games::leaderboard::LeaderboardScore::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score));
}

int64_t LeaderboardScore_getRank(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getRank();
}

String* LeaderboardScore_getDisplayRank(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getDisplayRank());
}

String* LeaderboardScore_getDisplayScore(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getDisplayScore());
}

int64_t LeaderboardScore_getRawScore(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getRawScore();
}

int64_t LeaderboardScore_getTimestampMillis(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getTimestampMillis();
}

String* LeaderboardScore_getScoreHolderDisplayName(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getScoreHolderDisplayName());
}

Uri* LeaderboardScore_getScoreHolderIconImageUri(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getScoreHolderIconImageUri());
}

Uri* LeaderboardScore_getScoreHolderHiResImageUri(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getScoreHolderHiResImageUri());
}

PgsPlayer* LeaderboardScore_getScoreHolder(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getScoreHolder());
}

String* LeaderboardScore_getScoreTag(const LeaderboardScore* leaderboard_score) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScore*>(leaderboard_score)->getScoreTag());
}

int32_t LeaderboardScore_get_LEADERBOARD_RANK_UNKNOWN() {
  return ::com::google::android::gms::games::leaderboard::LeaderboardScore::LEADERBOARD_RANK_UNKNOWN;
}
