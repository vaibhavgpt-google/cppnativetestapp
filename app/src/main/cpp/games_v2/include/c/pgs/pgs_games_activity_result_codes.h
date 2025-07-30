#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGamesActivityResultCodes_ PgsGamesActivityResultCodes;

/// Wraps a JNI reference with PgsGamesActivityResultCodes object.
/// @param jobj A JNI reference to be wrapped with PgsGamesActivityResultCodes object.
/// @see PgsGamesActivityResultCodes_destroy
PgsGamesActivityResultCodes* PgsGamesActivityResultCodes_wrapJniReference(jobject jobj);

jobject PgsGamesActivityResultCodes_getJniReference(const PgsGamesActivityResultCodes* pgs_games_activity_result_codes);

/// Destroys pgs_games_activity_result_codes and all internal resources related to it. This function should be
/// called when pgs_games_activity_result_codes is no longer needed.
/// @param pgs_games_activity_result_codes An object to be destroyed.
void PgsGamesActivityResultCodes_destroy(const PgsGamesActivityResultCodes* pgs_games_activity_result_codes);

int32_t PgsGamesActivityResultCodes_get_RESULT_RECONNECT_REQUIRED();

int32_t PgsGamesActivityResultCodes_get_RESULT_SIGN_IN_FAILED();

int32_t PgsGamesActivityResultCodes_get_RESULT_LICENSE_FAILED();

int32_t PgsGamesActivityResultCodes_get_RESULT_APP_MISCONFIGURED();

int32_t PgsGamesActivityResultCodes_get_RESULT_NETWORK_FAILURE();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES_H_
