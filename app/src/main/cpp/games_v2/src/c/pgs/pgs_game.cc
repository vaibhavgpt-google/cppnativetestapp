#include "pgs/pgs_game.h"

#include "com/google/android/gms/games/game.hpp"

PgsGame* PgsGame_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGame*>(new ::com::google::android::gms::games::Game(jobj));
}

jobject PgsGame_getJniReference(const PgsGame* pgs_game) {
  return reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->GetImpl();
}

PgsGame* PgsGame_implementInterface(PgsGame_getApplicationIdCallback pgs_game_get_application_id_callback, PgsGame_getDisplayNameCallback pgs_game_get_display_name_callback, PgsGame_getPrimaryCategoryCallback pgs_game_get_primary_category_callback, PgsGame_getSecondaryCategoryCallback pgs_game_get_secondary_category_callback, PgsGame_getDescriptionCallback pgs_game_get_description_callback, PgsGame_getDeveloperNameCallback pgs_game_get_developer_name_callback, PgsGame_getIconImageUriCallback pgs_game_get_icon_image_uri_callback, PgsGame_getHiResImageUriCallback pgs_game_get_hi_res_image_uri_callback, PgsGame_getFeaturedImageUriCallback pgs_game_get_featured_image_uri_callback, PgsGame_getAchievementTotalCountCallback pgs_game_get_achievement_total_count_callback, PgsGame_getLeaderboardCountCallback pgs_game_get_leaderboard_count_callback, PgsGame_areSnapshotsEnabledCallback pgs_game_are_snapshots_enabled_callback, PgsGame_getThemeColorCallback pgs_game_get_theme_color_callback, PgsGame_hasGamepadSupportCallback pgs_game_has_gamepad_support_callback) {
  return reinterpret_cast<PgsGame*>(::com::google::android::gms::games::Game::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::Game::getApplicationIdCallback>(pgs_game_get_application_id_callback), reinterpret_cast<::com::google::android::gms::games::Game::getDisplayNameCallback>(pgs_game_get_display_name_callback), reinterpret_cast<::com::google::android::gms::games::Game::getPrimaryCategoryCallback>(pgs_game_get_primary_category_callback), reinterpret_cast<::com::google::android::gms::games::Game::getSecondaryCategoryCallback>(pgs_game_get_secondary_category_callback), reinterpret_cast<::com::google::android::gms::games::Game::getDescriptionCallback>(pgs_game_get_description_callback), reinterpret_cast<::com::google::android::gms::games::Game::getDeveloperNameCallback>(pgs_game_get_developer_name_callback), reinterpret_cast<::com::google::android::gms::games::Game::getIconImageUriCallback>(pgs_game_get_icon_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::Game::getHiResImageUriCallback>(pgs_game_get_hi_res_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::Game::getFeaturedImageUriCallback>(pgs_game_get_featured_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::Game::getAchievementTotalCountCallback>(pgs_game_get_achievement_total_count_callback), reinterpret_cast<::com::google::android::gms::games::Game::getLeaderboardCountCallback>(pgs_game_get_leaderboard_count_callback), reinterpret_cast<::com::google::android::gms::games::Game::areSnapshotsEnabledCallback>(pgs_game_are_snapshots_enabled_callback), reinterpret_cast<::com::google::android::gms::games::Game::getThemeColorCallback>(pgs_game_get_theme_color_callback), reinterpret_cast<::com::google::android::gms::games::Game::hasGamepadSupportCallback>(pgs_game_has_gamepad_support_callback)));
}

void PgsGame_destroy(const PgsGame* pgs_game) {
  ::com::google::android::gms::games::Game::destroy(reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game));
}

String* PgsGame_getApplicationId(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getApplicationId());
}

String* PgsGame_getDisplayName(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getDisplayName());
}

String* PgsGame_getPrimaryCategory(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getPrimaryCategory());
}

String* PgsGame_getSecondaryCategory(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getSecondaryCategory());
}

String* PgsGame_getDescription(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getDescription());
}

String* PgsGame_getDeveloperName(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getDeveloperName());
}

Uri* PgsGame_getIconImageUri(const PgsGame* pgs_game) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getIconImageUri());
}

Uri* PgsGame_getHiResImageUri(const PgsGame* pgs_game) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getHiResImageUri());
}

Uri* PgsGame_getFeaturedImageUri(const PgsGame* pgs_game) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getFeaturedImageUri());
}

int32_t PgsGame_getAchievementTotalCount(const PgsGame* pgs_game) {
  return reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getAchievementTotalCount();
}

int32_t PgsGame_getLeaderboardCount(const PgsGame* pgs_game) {
  return reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getLeaderboardCount();
}

bool PgsGame_areSnapshotsEnabled(const PgsGame* pgs_game) {
  return reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->areSnapshotsEnabled();
}

String* PgsGame_getThemeColor(const PgsGame* pgs_game) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->getThemeColor());
}

bool PgsGame_hasGamepadSupport(const PgsGame* pgs_game) {
  return reinterpret_cast<const ::com::google::android::gms::games::Game*>(pgs_game)->hasGamepadSupport();
}
