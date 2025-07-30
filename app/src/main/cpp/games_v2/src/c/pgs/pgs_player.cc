#include "pgs/pgs_player.h"

#include "com/google/android/gms/games/player.hpp"

PgsPlayer* PgsPlayer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayer*>(new ::com::google::android::gms::games::Player(jobj));
}

jobject PgsPlayer_getJniReference(const PgsPlayer* pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->GetImpl();
}

PgsPlayer* PgsPlayer_implementInterface(PgsPlayer_getPlayerIdCallback pgs_player_get_player_id_callback, PgsPlayer_getDisplayNameCallback pgs_player_get_display_name_callback, PgsPlayer_hasIconImageCallback pgs_player_has_icon_image_callback, PgsPlayer_getIconImageUriCallback pgs_player_get_icon_image_uri_callback, PgsPlayer_hasHiResImageCallback pgs_player_has_hi_res_image_callback, PgsPlayer_getHiResImageUriCallback pgs_player_get_hi_res_image_uri_callback, PgsPlayer_getRetrievedTimestampCallback pgs_player_get_retrieved_timestamp_callback, PgsPlayer_getTitleCallback pgs_player_get_title_callback, PgsPlayer_getLevelInfoCallback pgs_player_get_level_info_callback, PgsPlayer_getBannerImageLandscapeUriCallback pgs_player_get_banner_image_landscape_uri_callback, PgsPlayer_getBannerImagePortraitUriCallback pgs_player_get_banner_image_portrait_uri_callback, PgsPlayer_getRelationshipInfoCallback pgs_player_get_relationship_info_callback, PgsPlayer_getCurrentPlayerInfoCallback pgs_player_get_current_player_info_callback) {
  return reinterpret_cast<PgsPlayer*>(::com::google::android::gms::games::Player::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::Player::getPlayerIdCallback>(pgs_player_get_player_id_callback), reinterpret_cast<::com::google::android::gms::games::Player::getDisplayNameCallback>(pgs_player_get_display_name_callback), reinterpret_cast<::com::google::android::gms::games::Player::hasIconImageCallback>(pgs_player_has_icon_image_callback), reinterpret_cast<::com::google::android::gms::games::Player::getIconImageUriCallback>(pgs_player_get_icon_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::Player::hasHiResImageCallback>(pgs_player_has_hi_res_image_callback), reinterpret_cast<::com::google::android::gms::games::Player::getHiResImageUriCallback>(pgs_player_get_hi_res_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::Player::getRetrievedTimestampCallback>(pgs_player_get_retrieved_timestamp_callback), reinterpret_cast<::com::google::android::gms::games::Player::getTitleCallback>(pgs_player_get_title_callback), reinterpret_cast<::com::google::android::gms::games::Player::getLevelInfoCallback>(pgs_player_get_level_info_callback), reinterpret_cast<::com::google::android::gms::games::Player::getBannerImageLandscapeUriCallback>(pgs_player_get_banner_image_landscape_uri_callback), reinterpret_cast<::com::google::android::gms::games::Player::getBannerImagePortraitUriCallback>(pgs_player_get_banner_image_portrait_uri_callback), reinterpret_cast<::com::google::android::gms::games::Player::getRelationshipInfoCallback>(pgs_player_get_relationship_info_callback), reinterpret_cast<::com::google::android::gms::games::Player::getCurrentPlayerInfoCallback>(pgs_player_get_current_player_info_callback)));
}

void PgsPlayer_destroy(const PgsPlayer* pgs_player) {
  ::com::google::android::gms::games::Player::destroy(reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player));
}

String* PgsPlayer_getPlayerId(const PgsPlayer* pgs_player) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getPlayerId());
}

String* PgsPlayer_getDisplayName(const PgsPlayer* pgs_player) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getDisplayName());
}

bool PgsPlayer_hasIconImage(const PgsPlayer* pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->hasIconImage();
}

Uri* PgsPlayer_getIconImageUri(const PgsPlayer* pgs_player) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getIconImageUri());
}

bool PgsPlayer_hasHiResImage(const PgsPlayer* pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->hasHiResImage();
}

Uri* PgsPlayer_getHiResImageUri(const PgsPlayer* pgs_player) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getHiResImageUri());
}

int64_t PgsPlayer_getRetrievedTimestamp(const PgsPlayer* pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getRetrievedTimestamp();
}

String* PgsPlayer_getTitle(const PgsPlayer* pgs_player) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getTitle());
}

PgsPlayerLevelInfo* PgsPlayer_getLevelInfo(const PgsPlayer* pgs_player) {
  return reinterpret_cast<PgsPlayerLevelInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getLevelInfo());
}

Uri* PgsPlayer_getBannerImageLandscapeUri(const PgsPlayer* pgs_player) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getBannerImageLandscapeUri());
}

Uri* PgsPlayer_getBannerImagePortraitUri(const PgsPlayer* pgs_player) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getBannerImagePortraitUri());
}

PgsPlayerRelationshipInfo* PgsPlayer_getRelationshipInfo(const PgsPlayer* pgs_player) {
  return reinterpret_cast<PgsPlayerRelationshipInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getRelationshipInfo());
}

PgsCurrentPlayerInfo* PgsPlayer_getCurrentPlayerInfo(const PgsPlayer* pgs_player) {
  return reinterpret_cast<PgsCurrentPlayerInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::Player*>(pgs_player)->getCurrentPlayerInfo());
}

int64_t PgsPlayer_get_CURRENT_XP_UNKNOWN() {
  return ::com::google::android::gms::games::Player::CURRENT_XP_UNKNOWN;
}

int64_t PgsPlayer_get_TIMESTAMP_UNKNOWN() {
  return ::com::google::android::gms::games::Player::TIMESTAMP_UNKNOWN;
}
