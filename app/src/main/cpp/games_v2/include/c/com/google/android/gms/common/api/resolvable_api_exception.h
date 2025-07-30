#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_API_RESOLVABLEAPIEXCEPTION_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_API_RESOLVABLEAPIEXCEPTION_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ResolvableApiException_ ResolvableApiException;

/// Wraps a JNI reference with ResolvableApiException object.
/// @param jobj A JNI reference to be wrapped with ResolvableApiException object.
/// @see ResolvableApiException_destroy
ResolvableApiException* ResolvableApiException_wrapJniReference(jobject jobj);

jobject ResolvableApiException_getJniReference(const ResolvableApiException* resolvable_api_exception);

/// Destroys resolvable_api_exception and all internal resources related to it. This function should be
/// called when resolvable_api_exception is no longer needed.
/// @param resolvable_api_exception An object to be destroyed.
void ResolvableApiException_destroy(const ResolvableApiException* resolvable_api_exception);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_API_RESOLVABLEAPIEXCEPTION_H_
