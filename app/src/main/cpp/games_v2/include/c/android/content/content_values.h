#ifndef ANDROID_CONTENT_CONTENTVALUES_H_
#define ANDROID_CONTENT_CONTENTVALUES_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentValues_ ContentValues;

/// Wraps a JNI reference with ContentValues object.
/// @param jobj A JNI reference to be wrapped with ContentValues object.
/// @see ContentValues_destroy
ContentValues* ContentValues_wrapJniReference(jobject jobj);

jobject ContentValues_getJniReference(const ContentValues* content_values);

/// Destroys content_values and all internal resources related to it. This function should be
/// called when content_values is no longer needed.
/// @param content_values An object to be destroyed.
void ContentValues_destroy(const ContentValues* content_values);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_CONTENT_CONTENTVALUES_H_
