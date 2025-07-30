#ifndef ANDROID_CONTENT_CONTENTPROVIDER_H_
#define ANDROID_CONTENT_CONTENTPROVIDER_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentProvider_ ContentProvider;

/// Wraps a JNI reference with ContentProvider object.
/// @param jobj A JNI reference to be wrapped with ContentProvider object.
/// @see ContentProvider_destroy
ContentProvider* ContentProvider_wrapJniReference(jobject jobj);

jobject ContentProvider_getJniReference(const ContentProvider* content_provider);

/// Destroys content_provider and all internal resources related to it. This function should be
/// called when content_provider is no longer needed.
/// @param content_provider An object to be destroyed.
void ContentProvider_destroy(const ContentProvider* content_provider);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_CONTENT_CONTENTPROVIDER_H_
