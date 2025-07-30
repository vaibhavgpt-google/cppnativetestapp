#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Freezable_ Freezable;

/// Wraps a JNI reference with Freezable object.
/// @param jobj A JNI reference to be wrapped with Freezable object.
/// @see Freezable_destroy
Freezable* Freezable_wrapJniReference(jobject jobj);

jobject Freezable_getJniReference(const Freezable* freezable);

/// Destroys freezable and all internal resources related to it. This function should be
/// called when freezable is no longer needed.
/// @param freezable An object to be destroyed.
void Freezable_destroy(const Freezable* freezable);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE_H_
