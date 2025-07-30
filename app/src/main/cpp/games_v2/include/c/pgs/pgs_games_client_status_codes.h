#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGamesClientStatusCodes_ PgsGamesClientStatusCodes;

/// Wraps a JNI reference with PgsGamesClientStatusCodes object.
/// @param jobj A JNI reference to be wrapped with PgsGamesClientStatusCodes object.
/// @see PgsGamesClientStatusCodes_destroy
PgsGamesClientStatusCodes* PgsGamesClientStatusCodes_wrapJniReference(jobject jobj);

jobject PgsGamesClientStatusCodes_getJniReference(const PgsGamesClientStatusCodes* pgs_games_client_status_codes);

/// Destroys pgs_games_client_status_codes and all internal resources related to it. This function should be
/// called when pgs_games_client_status_codes is no longer needed.
/// @param pgs_games_client_status_codes An object to be destroyed.
void PgsGamesClientStatusCodes_destroy(const PgsGamesClientStatusCodes* pgs_games_client_status_codes);

String* PgsGamesClientStatusCodes_getStatusCodeString(int32_t status_code);

int32_t PgsGamesClientStatusCodes_get_NETWORK_ERROR_NO_DATA();

int32_t PgsGamesClientStatusCodes_get_NETWORK_ERROR_OPERATION_FAILED();

int32_t PgsGamesClientStatusCodes_get_LICENSE_CHECK_FAILED();

int32_t PgsGamesClientStatusCodes_get_APP_MISCONFIGURED();

int32_t PgsGamesClientStatusCodes_get_GAME_NOT_FOUND();

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNLOCK_FAILURE();

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNKNOWN();

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_NOT_INCREMENTAL();

int32_t PgsGamesClientStatusCodes_get_ACHIEVEMENT_UNLOCKED();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_NOT_FOUND();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CREATION_FAILED();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CONTENTS_UNAVAILABLE();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_COMMIT_FAILED();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_FOLDER_UNAVAILABLE();

int32_t PgsGamesClientStatusCodes_get_SNAPSHOT_CONFLICT_MISSING();

int32_t PgsGamesClientStatusCodes_get_OPERATION_IN_FLIGHT();

int32_t PgsGamesClientStatusCodes_get_VIDEO_NOT_ACTIVE();

int32_t PgsGamesClientStatusCodes_get_VIDEO_UNSUPPORTED();

int32_t PgsGamesClientStatusCodes_get_VIDEO_PERMISSION_ERROR();

int32_t PgsGamesClientStatusCodes_get_VIDEO_STORAGE_ERROR();

int32_t PgsGamesClientStatusCodes_get_VIDEO_UNEXPECTED_CAPTURE_ERROR();

int32_t PgsGamesClientStatusCodes_get_VIDEO_ALREADY_CAPTURING();

int32_t PgsGamesClientStatusCodes_get_VIDEO_OUT_OF_DISK_SPACE();

int32_t PgsGamesClientStatusCodes_get_CONSENT_REQUIRED();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES_H_
