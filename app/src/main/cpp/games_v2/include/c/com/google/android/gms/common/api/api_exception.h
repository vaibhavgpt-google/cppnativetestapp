#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ApiException_ ApiException;

/// Wraps a JNI reference with ApiException object.
/// @param jobj A JNI reference to be wrapped with ApiException object.
/// @see ApiException_destroy
ApiException* ApiException_wrapJniReference(jobject jobj);

jobject ApiException_getJniReference(const ApiException* api_exception);

/// Destroys api_exception and all internal resources related to it. This function should be
/// called when api_exception is no longer needed.
/// @param api_exception An object to be destroyed.
void ApiException_destroy(const ApiException* api_exception);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION_H_
