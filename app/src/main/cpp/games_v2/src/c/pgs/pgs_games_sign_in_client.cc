#include "pgs/pgs_games_sign_in_client.h"

#include "com/google/android/gms/games/games_sign_in_client.hpp"
#include "gni/gni_task_internal.h"

PgsGamesSignInClient* PgsGamesSignInClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGamesSignInClient*>(new ::com::google::android::gms::games::GamesSignInClient(jobj));
}

jobject PgsGamesSignInClient_getJniReference(const PgsGamesSignInClient* pgs_games_sign_in_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client)->GetImpl();
}

PgsGamesSignInClient* PgsGamesSignInClient_implementInterface(PgsGamesSignInClient_isAuthenticatedCallback pgs_games_sign_in_client_is_authenticated_callback, PgsGamesSignInClient_signInCallback pgs_games_sign_in_client_sign_in_callback, PgsGamesSignInClient_requestServerSideAccessCallback pgs_games_sign_in_client_request_server_side_access_callback, PgsGamesSignInClient_requestServerSideAccessWithScopesCallback pgs_games_sign_in_client_request_server_side_access_with_scopes_callback) {
  return reinterpret_cast<PgsGamesSignInClient*>(::com::google::android::gms::games::GamesSignInClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::GamesSignInClient::isAuthenticatedCallback>(pgs_games_sign_in_client_is_authenticated_callback), reinterpret_cast<::com::google::android::gms::games::GamesSignInClient::signInCallback>(pgs_games_sign_in_client_sign_in_callback), reinterpret_cast<::com::google::android::gms::games::GamesSignInClient::requestServerSideAccessCallback>(pgs_games_sign_in_client_request_server_side_access_callback), reinterpret_cast<::com::google::android::gms::games::GamesSignInClient::requestServerSideAccessWithScopesCallback>(pgs_games_sign_in_client_request_server_side_access_with_scopes_callback)));
}

void PgsGamesSignInClient_destroy(const PgsGamesSignInClient* pgs_games_sign_in_client) {
  ::com::google::android::gms::games::GamesSignInClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client));
}

GniTask* PgsGamesSignInClient_isAuthenticated(const PgsGamesSignInClient* pgs_games_sign_in_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client)->isAuthenticated());
}

GniTaskErrorCode PgsGamesSignInClient_isAuthenticated_getResult(
    const GniTask* task, PgsAuthenticationResult** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAuthenticationResult_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsGamesSignInClient_signIn(const PgsGamesSignInClient* pgs_games_sign_in_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client)->signIn());
}

GniTaskErrorCode PgsGamesSignInClient_signIn_getResult(
    const GniTask* task, PgsAuthenticationResult** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAuthenticationResult_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsGamesSignInClient_requestServerSideAccess(const PgsGamesSignInClient* pgs_games_sign_in_client, String* server_client_id, bool force_refresh_token) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client)->requestServerSideAccess(*reinterpret_cast<const ::java::lang::String*>(server_client_id), force_refresh_token));
}

GniTaskErrorCode PgsGamesSignInClient_requestServerSideAccess_getResult(
    const GniTask* task, const char** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
  } else {
    *out_result = gni::GniCore::GetInstance()->ConvertString(result);
  }

  return GNI_TASK_SUCCESS;
}

GniTask* PgsGamesSignInClient_requestServerSideAccessWithScopes(const PgsGamesSignInClient* pgs_games_sign_in_client, String* server_client_id, bool force_refresh_token, List_AuthScope* scopes) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::GamesSignInClient*>(pgs_games_sign_in_client)->requestServerSideAccessWithScopes(*reinterpret_cast<const ::java::lang::String*>(server_client_id), force_refresh_token, *reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(scopes)));
}

GniTaskErrorCode PgsGamesSignInClient_requestServerSideAccessWithScopes_getResult(
    const GniTask* task, AuthResponse** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = AuthResponse_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}
