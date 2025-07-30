#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbstractSafeParcelable_ AbstractSafeParcelable;

/// Wraps a JNI reference with AbstractSafeParcelable object.
/// @param jobj A JNI reference to be wrapped with AbstractSafeParcelable object.
/// @see AbstractSafeParcelable_destroy
AbstractSafeParcelable* AbstractSafeParcelable_wrapJniReference(jobject jobj);

jobject AbstractSafeParcelable_getJniReference(const AbstractSafeParcelable* abstract_safe_parcelable);

/// Destroys abstract_safe_parcelable and all internal resources related to it. This function should be
/// called when abstract_safe_parcelable is no longer needed.
/// @param abstract_safe_parcelable An object to be destroyed.
void AbstractSafeParcelable_destroy(const AbstractSafeParcelable* abstract_safe_parcelable);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE_H_
