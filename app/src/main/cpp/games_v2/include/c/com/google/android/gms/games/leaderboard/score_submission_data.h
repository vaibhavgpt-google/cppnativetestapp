#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScoreSubmissionData_ ScoreSubmissionData;

typedef struct ScoreSubmissionData_Result_ ScoreSubmissionData_Result;

/// Wraps a JNI reference with ScoreSubmissionData object.
/// @param jobj A JNI reference to be wrapped with ScoreSubmissionData object.
/// @see ScoreSubmissionData_destroy
ScoreSubmissionData* ScoreSubmissionData_wrapJniReference(jobject jobj);

jobject ScoreSubmissionData_getJniReference(const ScoreSubmissionData* score_submission_data);

/// Destroys score_submission_data and all internal resources related to it. This function should be
/// called when score_submission_data is no longer needed.
/// @param score_submission_data An object to be destroyed.
void ScoreSubmissionData_destroy(const ScoreSubmissionData* score_submission_data);

String* ScoreSubmissionData_getLeaderboardId(const ScoreSubmissionData* score_submission_data);

String* ScoreSubmissionData_getPlayerId(const ScoreSubmissionData* score_submission_data);

ScoreSubmissionData_Result* ScoreSubmissionData_getScoreResult(const ScoreSubmissionData* score_submission_data, int32_t time_span);

String* ScoreSubmissionData_toString(const ScoreSubmissionData* score_submission_data);

/// Wraps a JNI reference with ScoreSubmissionData_Result object.
/// @param jobj A JNI reference to be wrapped with ScoreSubmissionData_Result object.
/// @see ScoreSubmissionData_Result_destroy
ScoreSubmissionData_Result* ScoreSubmissionData_Result_wrapJniReference(jobject jobj);

jobject ScoreSubmissionData_Result_getJniReference(const ScoreSubmissionData_Result* score_submission_data_result);

/// Destroys score_submission_data_result and all internal resources related to it. This function should be
/// called when score_submission_data_result is no longer needed.
/// @param score_submission_data_result An object to be destroyed.
void ScoreSubmissionData_Result_destroy(const ScoreSubmissionData_Result* score_submission_data_result);

String* ScoreSubmissionData_Result_toString(const ScoreSubmissionData_Result* score_submission_data_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA_H_
