#include "pgs/pgs_games_activity_result_codes.h"

#include "com/google/android/gms/games/games_activity_result_codes.hpp"

PgsGamesActivityResultCodes* PgsGamesActivityResultCodes_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGamesActivityResultCodes*>(new ::com::google::android::gms::games::GamesActivityResultCodes(jobj));
}

jobject PgsGamesActivityResultCodes_getJniReference(const PgsGamesActivityResultCodes* pgs_games_activity_result_codes) {
  return reinterpret_cast<const ::com::google::android::gms::games::GamesActivityResultCodes*>(pgs_games_activity_result_codes)->GetImpl();
}

void PgsGamesActivityResultCodes_destroy(const PgsGamesActivityResultCodes* pgs_games_activity_result_codes) {
  ::com::google::android::gms::games::GamesActivityResultCodes::destroy(reinterpret_cast<const ::com::google::android::gms::games::GamesActivityResultCodes*>(pgs_games_activity_result_codes));
}

int32_t PgsGamesActivityResultCodes_get_RESULT_RECONNECT_REQUIRED() {
  return ::com::google::android::gms::games::GamesActivityResultCodes::RESULT_RECONNECT_REQUIRED;
}

int32_t PgsGamesActivityResultCodes_get_RESULT_SIGN_IN_FAILED() {
  return ::com::google::android::gms::games::GamesActivityResultCodes::RESULT_SIGN_IN_FAILED;
}

int32_t PgsGamesActivityResultCodes_get_RESULT_LICENSE_FAILED() {
  return ::com::google::android::gms::games::GamesActivityResultCodes::RESULT_LICENSE_FAILED;
}

int32_t PgsGamesActivityResultCodes_get_RESULT_APP_MISCONFIGURED() {
  return ::com::google::android::gms::games::GamesActivityResultCodes::RESULT_APP_MISCONFIGURED;
}

int32_t PgsGamesActivityResultCodes_get_RESULT_NETWORK_FAILURE() {
  return ::com::google::android::gms::games::GamesActivityResultCodes::RESULT_NETWORK_FAILURE;
}
