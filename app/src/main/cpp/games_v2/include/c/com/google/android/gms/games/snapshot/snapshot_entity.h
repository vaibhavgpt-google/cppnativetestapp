#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "com/google/android/gms/games/snapshot/snapshot.h"
#include "com/google/android/gms/games/snapshot/snapshot_contents.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotEntity_ SnapshotEntity;

/// Wraps a JNI reference with SnapshotEntity object.
/// @param jobj A JNI reference to be wrapped with SnapshotEntity object.
/// @see SnapshotEntity_destroy
SnapshotEntity* SnapshotEntity_wrapJniReference(jobject jobj);

jobject SnapshotEntity_getJniReference(const SnapshotEntity* snapshot_entity);

/// Destroys snapshot_entity and all internal resources related to it. This function should be
/// called when snapshot_entity is no longer needed.
/// @param snapshot_entity An object to be destroyed.
void SnapshotEntity_destroy(const SnapshotEntity* snapshot_entity);

SnapshotMetadata* SnapshotEntity_getMetadata(const SnapshotEntity* snapshot_entity);

SnapshotContents* SnapshotEntity_getSnapshotContents(const SnapshotEntity* snapshot_entity);

Snapshot* SnapshotEntity_freeze(const SnapshotEntity* snapshot_entity);

bool SnapshotEntity_isDataValid(const SnapshotEntity* snapshot_entity);

int32_t SnapshotEntity_hashCode(const SnapshotEntity* snapshot_entity);

String* SnapshotEntity_toString(const SnapshotEntity* snapshot_entity);

void SnapshotEntity_writeToParcel(const SnapshotEntity* snapshot_entity, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY_H_
