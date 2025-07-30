#include "pgs/pgs_players_client.h"

#include "com/google/android/gms/games/players_client.hpp"
#include "gni/gni_task_internal.h"

PgsPlayersClient* PgsPlayersClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayersClient*>(new ::com::google::android::gms::games::PlayersClient(jobj));
}

jobject PgsPlayersClient_getJniReference(const PgsPlayersClient* pgs_players_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->GetImpl();
}

PgsPlayersClient* PgsPlayersClient_implementInterface(PgsPlayersClient_getCurrentPlayerIdCallback pgs_players_client_get_current_player_id_callback, PgsPlayersClient_getCurrentPlayerCallback pgs_players_client_get_current_player_callback, PgsPlayersClient_loadPlayerCallback pgs_players_client_load_player_callback, PgsPlayersClient_getCompareProfileIntentCallback pgs_players_client_get_compare_profile_intent_callback, PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHintsCallback pgs_players_client_get_compare_profile_intent_with_alternative_name_hints_callback, PgsPlayersClient_getPlayerSearchIntentCallback pgs_players_client_get_player_search_intent_callback, PgsPlayersClient_loadFriendsCallback pgs_players_client_load_friends_callback, PgsPlayersClient_loadMoreFriendsCallback pgs_players_client_load_more_friends_callback) {
  return reinterpret_cast<PgsPlayersClient*>(::com::google::android::gms::games::PlayersClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::PlayersClient::getCurrentPlayerIdCallback>(pgs_players_client_get_current_player_id_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::getCurrentPlayerCallback>(pgs_players_client_get_current_player_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::loadPlayerCallback>(pgs_players_client_load_player_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::getCompareProfileIntentCallback>(pgs_players_client_get_compare_profile_intent_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::getCompareProfileIntentWithAlternativeNameHintsCallback>(pgs_players_client_get_compare_profile_intent_with_alternative_name_hints_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::getPlayerSearchIntentCallback>(pgs_players_client_get_player_search_intent_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::loadFriendsCallback>(pgs_players_client_load_friends_callback), reinterpret_cast<::com::google::android::gms::games::PlayersClient::loadMoreFriendsCallback>(pgs_players_client_load_more_friends_callback)));
}

void PgsPlayersClient_destroy(const PgsPlayersClient* pgs_players_client) {
  ::com::google::android::gms::games::PlayersClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client));
}

GniTask* PgsPlayersClient_getCurrentPlayerId(const PgsPlayersClient* pgs_players_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->getCurrentPlayerId());
}

GniTaskErrorCode PgsPlayersClient_getCurrentPlayerId_getResult(
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

GniTask* PgsPlayersClient_getCurrentPlayer(const PgsPlayersClient* pgs_players_client, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->getCurrentPlayer(force_reload));
}

GniTaskErrorCode PgsPlayersClient_getCurrentPlayer_getResult(
    const GniTask* task, PgsAnnotatedData_PgsPlayer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsPlayer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_loadPlayer(const PgsPlayersClient* pgs_players_client, String* player_id) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->loadPlayer(*reinterpret_cast<const ::java::lang::String*>(player_id)));
}

GniTaskErrorCode PgsPlayersClient_loadPlayer_getResult(
    const GniTask* task, PgsAnnotatedData_PgsPlayer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsPlayer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_getCompareProfileIntent(const PgsPlayersClient* pgs_players_client, PgsPlayer* player) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->getCompareProfileIntent(*reinterpret_cast<const ::com::google::android::gms::games::Player*>(player)));
}

GniTaskErrorCode PgsPlayersClient_getCompareProfileIntent_getResult(
    const GniTask* task, Intent** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Intent_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints(const PgsPlayersClient* pgs_players_client, String* other_player_id, String* other_player_in_game_name, String* current_player_in_game_name) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->getCompareProfileIntentWithAlternativeNameHints(*reinterpret_cast<const ::java::lang::String*>(other_player_id), *reinterpret_cast<const ::java::lang::String*>(other_player_in_game_name), *reinterpret_cast<const ::java::lang::String*>(current_player_in_game_name)));
}

GniTaskErrorCode PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints_getResult(
    const GniTask* task, Intent** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Intent_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_getPlayerSearchIntent(const PgsPlayersClient* pgs_players_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->getPlayerSearchIntent());
}

GniTaskErrorCode PgsPlayersClient_getPlayerSearchIntent_getResult(
    const GniTask* task, Intent** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Intent_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_loadFriends(const PgsPlayersClient* pgs_players_client, int32_t page_size, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->loadFriends(page_size, force_reload));
}

GniTaskErrorCode PgsPlayersClient_loadFriends_getResult(
    const GniTask* task, PgsAnnotatedData_PgsPlayerBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsPlayerBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsPlayersClient_loadMoreFriends(const PgsPlayersClient* pgs_players_client, int32_t page_size) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayersClient*>(pgs_players_client)->loadMoreFriends(page_size));
}

GniTaskErrorCode PgsPlayersClient_loadMoreFriends_getResult(
    const GniTask* task, PgsAnnotatedData_PgsPlayerBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsPlayerBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

const char* PgsPlayersClient_get_EXTRA_PLAYER_SEARCH_RESULTS() {
  return ::com::google::android::gms::games::PlayersClient::EXTRA_PLAYER_SEARCH_RESULTS;
}
