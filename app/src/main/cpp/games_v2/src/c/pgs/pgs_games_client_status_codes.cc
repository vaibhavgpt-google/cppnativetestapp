#include "pgs/pgs_games_client_status_codes.h"

#include "com/google/android/gms/games/games_client_status_codes.hpp"

PgsGamesClientStatusCodes* PgsGamesClientStatusCodes_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGamesClientStatusCodes*>(new ::com::google::android::gms::games::GamesClientStatusCodes(jobj));
}

jobject PgsGamesClientStatusCodes_getJniReference(const PgsGamesClientStatusCodes* pgs_games_client_status_codes) {
  return reinterpret_cast<const ::com::google::android::gms::games::GamesClientStatusCodes*>(pgs_games_client_status_codes)->GetImpl();
}

void PgsGamesClientStatusCodes_destroy(const PgsGamesClientStatusCodes* pgs_games_client_status_codes) {
  ::com::google::android::gms::games::GamesClientStatusCodes::destroy(reinterpret_cast<const ::com::google::android::gms::games::GamesClientStatusCodes*>(pgs_games_client_status_codes));
}

String* PgsGamesClientStatusCodes_getStatusCodeString(int32_t status_code) {
  return reinterpret_cast<String*>(&::com::google::android::gms::games::GamesClientStatusCodes::getStatusCodeString(status_code));
}

int32_t PgsGamesClientStatusCodes_get_NETWORK_ERROR_NO_DATA() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::NETWORK_ERROR_NO_DATA;
}

int32_t PgsGamesClientStatusCodes_get_NETWORK_ERROR_OPERATION_FAILED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::NETWORK_ERROR_OPERATION_FAILED;
}

int32_t PgsGamesClientStatusCodes_get_LICENSE_CHECK_FAILED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::LICENSE_CHECK_FAILED;
}

int32_t PgsGamesClientStatusCodes_get_APP_MISCONFIGURED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::APP_MISCONFIGURED;
}

int32_t PgsGamesClientStatusCodes_get_GAME_NOT_FOUND() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::GAME_NOT_FOUND;
}

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNLOCK_FAILURE() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::ACHIEVEMENT_UNLOCK_FAILURE;
}

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNKNOWN() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::ACHIEVEMENT_UNKNOWN;
}

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_NOT_INCREMENTAL() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::ACHIEVEMENT_NOT_INCREMENTAL;
}

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNLOCKED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::ACHIEVEMENT_UNLOCKED;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_NOT_FOUND() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_NOT_FOUND;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CREATION_FAILED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_CREATION_FAILED;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CONTENTS_UNAVAILABLE() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_CONTENTS_UNAVAILABLE;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_COMMIT_FAILED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_COMMIT_FAILED;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_FOLDER_UNAVAILABLE() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_FOLDER_UNAVAILABLE;
}

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CONFLICT_MISSING() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::SNAPSHOT_CONFLICT_MISSING;
}

int32_t PgsGamesClientStatusCodes_get_OPERATION_IN_FLIGHT() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::OPERATION_IN_FLIGHT;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_NOT_ACTIVE() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_NOT_ACTIVE;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_UNSUPPORTED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_UNSUPPORTED;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_PERMISSION_ERROR() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_PERMISSION_ERROR;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_STORAGE_ERROR() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_STORAGE_ERROR;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_UNEXPECTED_CAPTURE_ERROR() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_UNEXPECTED_CAPTURE_ERROR;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_ALREADY_CAPTURING() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_ALREADY_CAPTURING;
}

int32_t PgsGamesClientStatusCodes_get_VIDEO_OUT_OF_DISK_SPACE() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::VIDEO_OUT_OF_DISK_SPACE;
}

int32_t PgsGamesClientStatusCodes_get_CONSENT_REQUIRED() {
  return ::com::google::android::gms::games::GamesClientStatusCodes::CONSENT_REQUIRED;
}
