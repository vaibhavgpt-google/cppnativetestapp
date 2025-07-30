#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbstractDataBuffer_ AbstractDataBuffer;

/// Wraps a JNI reference with AbstractDataBuffer object.
/// @param jobj A JNI reference to be wrapped with AbstractDataBuffer object.
/// @see AbstractDataBuffer_destroy
AbstractDataBuffer* AbstractDataBuffer_wrapJniReference(jobject jobj);

jobject AbstractDataBuffer_getJniReference(const AbstractDataBuffer* abstract_data_buffer);

/// Destroys abstract_data_buffer and all internal resources related to it. This function should be
/// called when abstract_data_buffer is no longer needed.
/// @param abstract_data_buffer An object to be destroyed.
void AbstractDataBuffer_destroy(const AbstractDataBuffer* abstract_data_buffer);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER_H_
