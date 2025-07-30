#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ENTITYBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ENTITYBUFFER_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EntityBuffer_ EntityBuffer;

/// Wraps a JNI reference with EntityBuffer object.
/// @param jobj A JNI reference to be wrapped with EntityBuffer object.
/// @see EntityBuffer_destroy
EntityBuffer* EntityBuffer_wrapJniReference(jobject jobj);

jobject EntityBuffer_getJniReference(const EntityBuffer* entity_buffer);

/// Destroys entity_buffer and all internal resources related to it. This function should be
/// called when entity_buffer is no longer needed.
/// @param entity_buffer An object to be destroyed.
void EntityBuffer_destroy(const EntityBuffer* entity_buffer);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ENTITYBUFFER_H_
