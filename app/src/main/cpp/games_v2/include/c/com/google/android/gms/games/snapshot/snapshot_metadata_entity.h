#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"
#include "java/lang/string.h"
#include "pgs/pgs_game.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotMetadataEntity_ SnapshotMetadataEntity;

/// Wraps a JNI reference with SnapshotMetadataEntity object.
/// @param jobj A JNI reference to be wrapped with SnapshotMetadataEntity object.
/// @see SnapshotMetadataEntity_destroy
SnapshotMetadataEntity* SnapshotMetadataEntity_wrapJniReference(jobject jobj);

jobject SnapshotMetadataEntity_getJniReference(const SnapshotMetadataEntity* snapshot_metadata_entity);

/// Destroys snapshot_metadata_entity and all internal resources related to it. This function should be
/// called when snapshot_metadata_entity is no longer needed.
/// @param snapshot_metadata_entity An object to be destroyed.
void SnapshotMetadataEntity_destroy(const SnapshotMetadataEntity* snapshot_metadata_entity);

PgsGame* SnapshotMetadataEntity_getGame(const SnapshotMetadataEntity* snapshot_metadata_entity);

PgsPlayer* SnapshotMetadataEntity_getOwner(const SnapshotMetadataEntity* snapshot_metadata_entity);

String* SnapshotMetadataEntity_getSnapshotId(const SnapshotMetadataEntity* snapshot_metadata_entity);

Uri* SnapshotMetadataEntity_getCoverImageUri(const SnapshotMetadataEntity* snapshot_metadata_entity);

float SnapshotMetadataEntity_getCoverImageAspectRatio(const SnapshotMetadataEntity* snapshot_metadata_entity);

String* SnapshotMetadataEntity_getUniqueName(const SnapshotMetadataEntity* snapshot_metadata_entity);

String* SnapshotMetadataEntity_getDescription(const SnapshotMetadataEntity* snapshot_metadata_entity);

int64_t SnapshotMetadataEntity_getLastModifiedTimestamp(const SnapshotMetadataEntity* snapshot_metadata_entity);

int64_t SnapshotMetadataEntity_getPlayedTime(const SnapshotMetadataEntity* snapshot_metadata_entity);

bool SnapshotMetadataEntity_hasChangePending(const SnapshotMetadataEntity* snapshot_metadata_entity);

int64_t SnapshotMetadataEntity_getProgressValue(const SnapshotMetadataEntity* snapshot_metadata_entity);

String* SnapshotMetadataEntity_getDeviceName(const SnapshotMetadataEntity* snapshot_metadata_entity);

SnapshotMetadata* SnapshotMetadataEntity_freeze(const SnapshotMetadataEntity* snapshot_metadata_entity);

bool SnapshotMetadataEntity_isDataValid(const SnapshotMetadataEntity* snapshot_metadata_entity);

int32_t SnapshotMetadataEntity_hashCode(const SnapshotMetadataEntity* snapshot_metadata_entity);

String* SnapshotMetadataEntity_toString(const SnapshotMetadataEntity* snapshot_metadata_entity);

void SnapshotMetadataEntity_writeToParcel(const SnapshotMetadataEntity* snapshot_metadata_entity, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY_H_
