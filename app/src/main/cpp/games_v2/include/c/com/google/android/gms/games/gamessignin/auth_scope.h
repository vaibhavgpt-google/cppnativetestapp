#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AuthScope_ AuthScope;

/// Wraps a JNI reference with AuthScope object.
/// @param jobj A JNI reference to be wrapped with AuthScope object.
/// @see AuthScope_destroy
AuthScope* AuthScope_wrapJniReference(jobject jobj);

jobject AuthScope_getJniReference(const AuthScope* auth_scope);

/// Destroys auth_scope and all internal resources related to it. This function should be
/// called when auth_scope is no longer needed.
/// @param auth_scope An object to be destroyed.
void AuthScope_destroy(const AuthScope* auth_scope);

AuthScope* AuthScope_values();

AuthScope* AuthScope_valueOf(String* name);

String* AuthScope_getValue(const AuthScope* auth_scope);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE_H_
