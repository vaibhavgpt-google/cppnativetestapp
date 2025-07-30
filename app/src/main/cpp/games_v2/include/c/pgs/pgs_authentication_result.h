#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsAuthenticationResult_ PgsAuthenticationResult;

/// Wraps a JNI reference with PgsAuthenticationResult object.
/// @param jobj A JNI reference to be wrapped with PgsAuthenticationResult object.
/// @see PgsAuthenticationResult_destroy
PgsAuthenticationResult* PgsAuthenticationResult_wrapJniReference(jobject jobj);

jobject PgsAuthenticationResult_getJniReference(const PgsAuthenticationResult* pgs_authentication_result);

/// Destroys pgs_authentication_result and all internal resources related to it. This function should be
/// called when pgs_authentication_result is no longer needed.
/// @param pgs_authentication_result An object to be destroyed.
void PgsAuthenticationResult_destroy(const PgsAuthenticationResult* pgs_authentication_result);

bool PgsAuthenticationResult_isAuthenticated(const PgsAuthenticationResult* pgs_authentication_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT_H_
