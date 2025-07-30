#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGamesCallbackStatusCodes_ PgsGamesCallbackStatusCodes;

/// Wraps a JNI reference with PgsGamesCallbackStatusCodes object.
/// @param jobj A JNI reference to be wrapped with PgsGamesCallbackStatusCodes object.
/// @see PgsGamesCallbackStatusCodes_destroy
PgsGamesCallbackStatusCodes* PgsGamesCallbackStatusCodes_wrapJniReference(jobject jobj);

jobject PgsGamesCallbackStatusCodes_getJniReference(const PgsGamesCallbackStatusCodes* pgs_games_callback_status_codes);

/// Destroys pgs_games_callback_status_codes and all internal resources related to it. This function should be
/// called when pgs_games_callback_status_codes is no longer needed.
/// @param pgs_games_callback_status_codes An object to be destroyed.
void PgsGamesCallbackStatusCodes_destroy(const PgsGamesCallbackStatusCodes* pgs_games_callback_status_codes);

String* PgsGamesCallbackStatusCodes_getStatusCodeString(int32_t status_code);

int32_t PgsGamesCallbackStatusCodes_get_OK();

int32_t PgsGamesCallbackStatusCodes_get_INTERNAL_ERROR();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES_H_
