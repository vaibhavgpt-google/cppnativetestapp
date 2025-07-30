#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Releasable_ Releasable;

/// Wraps a JNI reference with Releasable object.
/// @param jobj A JNI reference to be wrapped with Releasable object.
/// @see Releasable_destroy
Releasable* Releasable_wrapJniReference(jobject jobj);

jobject Releasable_getJniReference(const Releasable* releasable);

/// Destroys releasable and all internal resources related to it. This function should be
/// called when releasable is no longer needed.
/// @param releasable An object to be destroyed.
void Releasable_destroy(const Releasable* releasable);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE_H_
