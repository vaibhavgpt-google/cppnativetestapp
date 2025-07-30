#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotMetadataBuffer_ SnapshotMetadataBuffer;

/// Wraps a JNI reference with SnapshotMetadataBuffer object.
/// @param jobj A JNI reference to be wrapped with SnapshotMetadataBuffer object.
/// @see SnapshotMetadataBuffer_destroy
SnapshotMetadataBuffer* SnapshotMetadataBuffer_wrapJniReference(jobject jobj);

jobject SnapshotMetadataBuffer_getJniReference(const SnapshotMetadataBuffer* snapshot_metadata_buffer);

/// Destroys snapshot_metadata_buffer and all internal resources related to it. This function should be
/// called when snapshot_metadata_buffer is no longer needed.
/// @param snapshot_metadata_buffer An object to be destroyed.
void SnapshotMetadataBuffer_destroy(const SnapshotMetadataBuffer* snapshot_metadata_buffer);

SnapshotMetadata* SnapshotMetadataBuffer_get(const SnapshotMetadataBuffer* snapshot_metadata_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER_H_
