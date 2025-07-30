#include "pgs/pgs_player_stats_client.h"

#include "com/google/android/gms/games/player_stats_client.hpp"
#include "gni/gni_task_internal.h"

PgsPlayerStatsClient* PgsPlayerStatsClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerStatsClient*>(new ::com::google::android::gms::games::PlayerStatsClient(jobj));
}

jobject PgsPlayerStatsClient_getJniReference(const PgsPlayerStatsClient* pgs_player_stats_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerStatsClient*>(pgs_player_stats_client)->GetImpl();
}

PgsPlayerStatsClient* PgsPlayerStatsClient_implementInterface(PgsPlayerStatsClient_loadPlayerStatsCallback pgs_player_stats_client_load_player_stats_callback) {
  return reinterpret_cast<PgsPlayerStatsClient*>(::com::google::android::gms::games::PlayerStatsClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::PlayerStatsClient::loadPlayerStatsCallback>(pgs_player_stats_client_load_player_stats_callback)));
}

void PgsPlayerStatsClient_destroy(const PgsPlayerStatsClient* pgs_player_stats_client) {
  ::com::google::android::gms::games::PlayerStatsClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerStatsClient*>(pgs_player_stats_client));
}

GniTask* PgsPlayerStatsClient_loadPlayerStats(const PgsPlayerStatsClient* pgs_player_stats_client, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerStatsClient*>(pgs_player_stats_client)->loadPlayerStats(force_reload));
}

GniTaskErrorCode PgsPlayerStatsClient_loadPlayerStats_getResult(
    const GniTask* task, PgsAnnotatedData_PlayerStats** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PlayerStats_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}
