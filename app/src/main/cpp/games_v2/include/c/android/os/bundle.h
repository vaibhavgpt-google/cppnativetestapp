#ifndef ANDROID_OS_BUNDLE_H_
#define ANDROID_OS_BUNDLE_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Bundle_ Bundle;

/// Wraps a JNI reference with Bundle object.
/// @param jobj A JNI reference to be wrapped with Bundle object.
/// @see Bundle_destroy
Bundle* Bundle_wrapJniReference(jobject jobj);

jobject Bundle_getJniReference(const Bundle* bundle);

/// Destroys bundle and all internal resources related to it. This function should be
/// called when bundle is no longer needed.
/// @param bundle An object to be destroyed.
void Bundle_destroy(const Bundle* bundle);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_OS_BUNDLE_H_
