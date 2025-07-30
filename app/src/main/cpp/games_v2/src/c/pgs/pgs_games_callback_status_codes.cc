#include "pgs/pgs_games_callback_status_codes.h"

#include "com/google/android/gms/games/games_callback_status_codes.hpp"

PgsGamesCallbackStatusCodes* PgsGamesCallbackStatusCodes_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGamesCallbackStatusCodes*>(new ::com::google::android::gms::games::GamesCallbackStatusCodes(jobj));
}

jobject PgsGamesCallbackStatusCodes_getJniReference(const PgsGamesCallbackStatusCodes* pgs_games_callback_status_codes) {
  return reinterpret_cast<const ::com::google::android::gms::games::GamesCallbackStatusCodes*>(pgs_games_callback_status_codes)->GetImpl();
}

void PgsGamesCallbackStatusCodes_destroy(const PgsGamesCallbackStatusCodes* pgs_games_callback_status_codes) {
  ::com::google::android::gms::games::GamesCallbackStatusCodes::destroy(reinterpret_cast<const ::com::google::android::gms::games::GamesCallbackStatusCodes*>(pgs_games_callback_status_codes));
}

String* PgsGamesCallbackStatusCodes_getStatusCodeString(int32_t status_code) {
  return reinterpret_cast<String*>(&::com::google::android::gms::games::GamesCallbackStatusCodes::getStatusCodeString(status_code));
}

int32_t PgsGamesCallbackStatusCodes_get_OK() {
  return ::com::google::android::gms::games::GamesCallbackStatusCodes::OK;
}

int32_t PgsGamesCallbackStatusCodes_get_INTERNAL_ERROR() {
  return ::com::google::android::gms::games::GamesCallbackStatusCodes::INTERNAL_ERROR;
}
