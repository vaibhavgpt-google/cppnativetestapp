#include "com/google/android/gms/games/leaderboard/score_submission_data.h"

#include "com/google/android/gms/games/leaderboard/score_submission_data.hpp"

ScoreSubmissionData* ScoreSubmissionData_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ScoreSubmissionData*>(new ::com::google::android::gms::games::leaderboard::ScoreSubmissionData(jobj));
}

jobject ScoreSubmissionData_getJniReference(const ScoreSubmissionData* score_submission_data) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data)->GetImpl();
}

void ScoreSubmissionData_destroy(const ScoreSubmissionData* score_submission_data) {
  ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data));
}

String* ScoreSubmissionData_getLeaderboardId(const ScoreSubmissionData* score_submission_data) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data)->getLeaderboardId());
}

String* ScoreSubmissionData_getPlayerId(const ScoreSubmissionData* score_submission_data) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data)->getPlayerId());
}

ScoreSubmissionData_Result* ScoreSubmissionData_getScoreResult(const ScoreSubmissionData* score_submission_data, int32_t time_span) {
  return reinterpret_cast<ScoreSubmissionData_Result*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data)->getScoreResult(time_span));
}

String* ScoreSubmissionData_toString(const ScoreSubmissionData* score_submission_data) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData*>(score_submission_data)->toString());
}

ScoreSubmissionData_Result* ScoreSubmissionData_Result_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ScoreSubmissionData_Result*>(new ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result(jobj));
}

jobject ScoreSubmissionData_Result_getJniReference(const ScoreSubmissionData_Result* score_submission_data_result) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result*>(score_submission_data_result)->GetImpl();
}

void ScoreSubmissionData_Result_destroy(const ScoreSubmissionData_Result* score_submission_data_result) {
  ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result*>(score_submission_data_result));
}

String* ScoreSubmissionData_Result_toString(const ScoreSubmissionData_Result* score_submission_data_result) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result*>(score_submission_data_result)->toString());
}
