#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/gamessignin/auth_scope.h"
#include "java/lang/object.h"
#include "java/lang/string.h"
#include "java/util/list.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AuthResponse_ AuthResponse;

/// Wraps a JNI reference with AuthResponse object.
/// @param jobj A JNI reference to be wrapped with AuthResponse object.
/// @see AuthResponse_destroy
AuthResponse* AuthResponse_wrapJniReference(jobject jobj);

jobject AuthResponse_getJniReference(const AuthResponse* auth_response);

AuthResponse* AuthResponse_construct(String* auth_code, List_AuthScope* granted_scopes);

/// Destroys auth_response and all internal resources related to it. This function should be
/// called when auth_response is no longer needed.
/// @param auth_response An object to be destroyed.
void AuthResponse_destroy(const AuthResponse* auth_response);

List_AuthScope* AuthResponse_getGrantedScopes(const AuthResponse* auth_response);

String* AuthResponse_getAuthCode(const AuthResponse* auth_response);

bool AuthResponse_equals(const AuthResponse* auth_response, Object* o);

int32_t AuthResponse_hashCode(const AuthResponse* auth_response);

String* AuthResponse_toString(const AuthResponse* auth_response);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE_H_
