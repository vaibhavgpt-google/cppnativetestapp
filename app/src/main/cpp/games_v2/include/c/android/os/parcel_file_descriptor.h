#ifndef ANDROID_OS_PARCELFILEDESCRIPTOR_H_
#define ANDROID_OS_PARCELFILEDESCRIPTOR_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ParcelFileDescriptor_ ParcelFileDescriptor;

/// Wraps a JNI reference with ParcelFileDescriptor object.
/// @param jobj A JNI reference to be wrapped with ParcelFileDescriptor object.
/// @see ParcelFileDescriptor_destroy
ParcelFileDescriptor* ParcelFileDescriptor_wrapJniReference(jobject jobj);

jobject ParcelFileDescriptor_getJniReference(const ParcelFileDescriptor* parcel_file_descriptor);

/// Destroys parcel_file_descriptor and all internal resources related to it. This function should be
/// called when parcel_file_descriptor is no longer needed.
/// @param parcel_file_descriptor An object to be destroyed.
void ParcelFileDescriptor_destroy(const ParcelFileDescriptor* parcel_file_descriptor);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_OS_PARCELFILEDESCRIPTOR_H_
