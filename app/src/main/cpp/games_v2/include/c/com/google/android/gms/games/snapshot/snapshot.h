#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/snapshot/snapshot_contents.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Snapshot_ Snapshot;

typedef SnapshotMetadata* (*Snapshot_getMetadataCallback)();

typedef SnapshotContents* (*Snapshot_getSnapshotContentsCallback)();

/// Wraps a JNI reference with Snapshot object.
/// @param jobj A JNI reference to be wrapped with Snapshot object.
/// @see Snapshot_destroy
Snapshot* Snapshot_wrapJniReference(jobject jobj);

jobject Snapshot_getJniReference(const Snapshot* snapshot);

Snapshot* Snapshot_implementInterface(Snapshot_getMetadataCallback snapshot_get_metadata_callback, Snapshot_getSnapshotContentsCallback snapshot_get_snapshot_contents_callback);

/// Destroys snapshot and all internal resources related to it. This function should be
/// called when snapshot is no longer needed.
/// @param snapshot An object to be destroyed.
void Snapshot_destroy(const Snapshot* snapshot);

SnapshotMetadata* Snapshot_getMetadata(const Snapshot* snapshot);

SnapshotContents* Snapshot_getSnapshotContents(const Snapshot* snapshot);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT_H_
