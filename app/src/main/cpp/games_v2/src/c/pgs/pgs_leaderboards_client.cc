#include "pgs/pgs_leaderboards_client.h"

#include "com/google/android/gms/games/leaderboards_client.hpp"
#include "gni/gni_task_internal.h"

PgsLeaderboardsClient* PgsLeaderboardsClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsLeaderboardsClient*>(new ::com::google::android::gms::games::LeaderboardsClient(jobj));
}

jobject PgsLeaderboardsClient_getJniReference(const PgsLeaderboardsClient* pgs_leaderboards_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->GetImpl();
}

PgsLeaderboardsClient* PgsLeaderboardsClient_implementInterface(PgsLeaderboardsClient_getAllLeaderboardsIntentCallback pgs_leaderboards_client_get_all_leaderboards_intent_callback, PgsLeaderboardsClient_getLeaderboardIntentCallback pgs_leaderboards_client_get_leaderboard_intent_callback, PgsLeaderboardsClient_loadLeaderboardMetadataCallback pgs_leaderboards_client_load_leaderboard_metadata_callback, PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScoreCallback pgs_leaderboards_client_load_current_player_leaderboard_score_callback, PgsLeaderboardsClient_loadTopScoresCallback pgs_leaderboards_client_load_top_scores_callback, PgsLeaderboardsClient_loadPlayerCenteredScoresCallback pgs_leaderboards_client_load_player_centered_scores_callback, PgsLeaderboardsClient_loadMoreScoresCallback pgs_leaderboards_client_load_more_scores_callback, PgsLeaderboardsClient_submitScoreCallback pgs_leaderboards_client_submit_score_callback, PgsLeaderboardsClient_submitScoreImmediateCallback pgs_leaderboards_client_submit_score_immediate_callback) {
  return reinterpret_cast<PgsLeaderboardsClient*>(::com::google::android::gms::games::LeaderboardsClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::getAllLeaderboardsIntentCallback>(pgs_leaderboards_client_get_all_leaderboards_intent_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::getLeaderboardIntentCallback>(pgs_leaderboards_client_get_leaderboard_intent_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::loadLeaderboardMetadataCallback>(pgs_leaderboards_client_load_leaderboard_metadata_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::loadCurrentPlayerLeaderboardScoreCallback>(pgs_leaderboards_client_load_current_player_leaderboard_score_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::loadTopScoresCallback>(pgs_leaderboards_client_load_top_scores_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::loadPlayerCenteredScoresCallback>(pgs_leaderboards_client_load_player_centered_scores_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::loadMoreScoresCallback>(pgs_leaderboards_client_load_more_scores_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::submitScoreCallback>(pgs_leaderboards_client_submit_score_callback), reinterpret_cast<::com::google::android::gms::games::LeaderboardsClient::submitScoreImmediateCallback>(pgs_leaderboards_client_submit_score_immediate_callback)));
}

void PgsLeaderboardsClient_destroy(const PgsLeaderboardsClient* pgs_leaderboards_client) {
  ::com::google::android::gms::games::LeaderboardsClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client));
}

GniTask* PgsLeaderboardsClient_getAllLeaderboardsIntent(const PgsLeaderboardsClient* pgs_leaderboards_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->getAllLeaderboardsIntent());
}

GniTaskErrorCode PgsLeaderboardsClient_getAllLeaderboardsIntent_getResult(
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

GniTask* PgsLeaderboardsClient_getLeaderboardIntent(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t time_span, int32_t collection) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->getLeaderboardIntent(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), time_span, collection));
}

GniTaskErrorCode PgsLeaderboardsClient_getLeaderboardIntent_getResult(
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

GniTask* PgsLeaderboardsClient_loadLeaderboardMetadata(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->loadLeaderboardMetadata(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), force_reload));
}

GniTaskErrorCode PgsLeaderboardsClient_loadLeaderboardMetadata_getResult(
    const GniTask* task, PgsAnnotatedData_Leaderboard** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_Leaderboard_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->loadCurrentPlayerLeaderboardScore(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), span, leaderboard_collection));
}

GniTaskErrorCode PgsLeaderboardsClient_loadCurrentPlayerLeaderboardScore_getResult(
    const GniTask* task, PgsAnnotatedData_LeaderboardScore** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_LeaderboardScore_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsLeaderboardsClient_loadTopScores(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->loadTopScores(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), span, leaderboard_collection, max_results, force_reload));
}

GniTaskErrorCode PgsLeaderboardsClient_loadTopScores_getResult(
    const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsLeaderboardsClient_loadPlayerCenteredScores(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int32_t span, int32_t leaderboard_collection, int32_t max_results, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->loadPlayerCenteredScores(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), span, leaderboard_collection, max_results, force_reload));
}

GniTaskErrorCode PgsLeaderboardsClient_loadPlayerCenteredScores_getResult(
    const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsLeaderboardsClient_loadMoreScores(const PgsLeaderboardsClient* pgs_leaderboards_client, LeaderboardScoreBuffer* buffer, int32_t max_results, int32_t page_direction) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->loadMoreScores(*reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer*>(buffer), max_results, page_direction));
}

GniTaskErrorCode PgsLeaderboardsClient_loadMoreScores_getResult(
    const GniTask* task, PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

void PgsLeaderboardsClient_submitScore(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int64_t score, String* score_tag) {
  reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->submitScore(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), score, *reinterpret_cast<const ::java::lang::String*>(score_tag));
}

GniTask* PgsLeaderboardsClient_submitScoreImmediate(const PgsLeaderboardsClient* pgs_leaderboards_client, String* leaderboard_id, int64_t score, String* score_tag) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient*>(pgs_leaderboards_client)->submitScoreImmediate(*reinterpret_cast<const ::java::lang::String*>(leaderboard_id), score, *reinterpret_cast<const ::java::lang::String*>(score_tag)));
}

GniTaskErrorCode PgsLeaderboardsClient_submitScoreImmediate_getResult(
    const GniTask* task, ScoreSubmissionData** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = ScoreSubmissionData_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

PgsLeaderboardsClient_LeaderboardScores* PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsLeaderboardsClient_LeaderboardScores*>(new ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores(jobj));
}

jobject PgsLeaderboardsClient_LeaderboardScores_getJniReference(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores*>(pgs_leaderboards_client_leaderboard_scores)->GetImpl();
}

void PgsLeaderboardsClient_LeaderboardScores_destroy(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores) {
  ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores::destroy(reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores*>(pgs_leaderboards_client_leaderboard_scores));
}

Leaderboard* PgsLeaderboardsClient_LeaderboardScores_getLeaderboard(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<Leaderboard*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores*>(pgs_leaderboards_client_leaderboard_scores)->getLeaderboard());
}

LeaderboardScoreBuffer* PgsLeaderboardsClient_LeaderboardScores_getScores(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<LeaderboardScoreBuffer*>(&reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores*>(pgs_leaderboards_client_leaderboard_scores)->getScores());
}

void PgsLeaderboardsClient_LeaderboardScores_release(const PgsLeaderboardsClient_LeaderboardScores* pgs_leaderboards_client_leaderboard_scores) {
  reinterpret_cast<const ::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores*>(pgs_leaderboards_client_leaderboard_scores)->release();
}
