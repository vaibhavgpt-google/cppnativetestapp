#ifndef ANDROID_NET_URI_H_
#define ANDROID_NET_URI_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Uri_ Uri;

/// Wraps a JNI reference with Uri object.
/// @param jobj A JNI reference to be wrapped with Uri object.
/// @see Uri_destroy
Uri* Uri_wrapJniReference(jobject jobj);

jobject Uri_getJniReference(const Uri* uri);

/// Destroys uri and all internal resources related to it. This function should be
/// called when uri is no longer needed.
/// @param uri An object to be destroyed.
void Uri_destroy(const Uri* uri);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_NET_URI_H_
