#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"
#include "pgs/pgs_game.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotMetadata_ SnapshotMetadata;

typedef PgsGame* (*SnapshotMetadata_getGameCallback)();

typedef PgsPlayer* (*SnapshotMetadata_getOwnerCallback)();

typedef String* (*SnapshotMetadata_getSnapshotIdCallback)();

typedef Uri* (*SnapshotMetadata_getCoverImageUriCallback)();

typedef float (*SnapshotMetadata_getCoverImageAspectRatioCallback)();

typedef String* (*SnapshotMetadata_getUniqueNameCallback)();

typedef String* (*SnapshotMetadata_getDescriptionCallback)();

typedef int64_t (*SnapshotMetadata_getLastModifiedTimestampCallback)();

typedef int64_t (*SnapshotMetadata_getPlayedTimeCallback)();

typedef bool (*SnapshotMetadata_hasChangePendingCallback)();

typedef int64_t (*SnapshotMetadata_getProgressValueCallback)();

typedef String* (*SnapshotMetadata_getDeviceNameCallback)();

/// Wraps a JNI reference with SnapshotMetadata object.
/// @param jobj A JNI reference to be wrapped with SnapshotMetadata object.
/// @see SnapshotMetadata_destroy
SnapshotMetadata* SnapshotMetadata_wrapJniReference(jobject jobj);

jobject SnapshotMetadata_getJniReference(const SnapshotMetadata* snapshot_metadata);

SnapshotMetadata* SnapshotMetadata_implementInterface(SnapshotMetadata_getGameCallback snapshot_metadata_get_game_callback, SnapshotMetadata_getOwnerCallback snapshot_metadata_get_owner_callback, SnapshotMetadata_getSnapshotIdCallback snapshot_metadata_get_snapshot_id_callback, SnapshotMetadata_getCoverImageUriCallback snapshot_metadata_get_cover_image_uri_callback, SnapshotMetadata_getCoverImageAspectRatioCallback snapshot_metadata_get_cover_image_aspect_ratio_callback, SnapshotMetadata_getUniqueNameCallback snapshot_metadata_get_unique_name_callback, SnapshotMetadata_getDescriptionCallback snapshot_metadata_get_description_callback, SnapshotMetadata_getLastModifiedTimestampCallback snapshot_metadata_get_last_modified_timestamp_callback, SnapshotMetadata_getPlayedTimeCallback snapshot_metadata_get_played_time_callback, SnapshotMetadata_hasChangePendingCallback snapshot_metadata_has_change_pending_callback, SnapshotMetadata_getProgressValueCallback snapshot_metadata_get_progress_value_callback, SnapshotMetadata_getDeviceNameCallback snapshot_metadata_get_device_name_callback);

/// Destroys snapshot_metadata and all internal resources related to it. This function should be
/// called when snapshot_metadata is no longer needed.
/// @param snapshot_metadata An object to be destroyed.
void SnapshotMetadata_destroy(const SnapshotMetadata* snapshot_metadata);

PgsGame* SnapshotMetadata_getGame(const SnapshotMetadata* snapshot_metadata);

PgsPlayer* SnapshotMetadata_getOwner(const SnapshotMetadata* snapshot_metadata);

String* SnapshotMetadata_getSnapshotId(const SnapshotMetadata* snapshot_metadata);

Uri* SnapshotMetadata_getCoverImageUri(const SnapshotMetadata* snapshot_metadata);

float SnapshotMetadata_getCoverImageAspectRatio(const SnapshotMetadata* snapshot_metadata);

String* SnapshotMetadata_getUniqueName(const SnapshotMetadata* snapshot_metadata);

String* SnapshotMetadata_getDescription(const SnapshotMetadata* snapshot_metadata);

int64_t SnapshotMetadata_getLastModifiedTimestamp(const SnapshotMetadata* snapshot_metadata);

int64_t SnapshotMetadata_getPlayedTime(const SnapshotMetadata* snapshot_metadata);

bool SnapshotMetadata_hasChangePending(const SnapshotMetadata* snapshot_metadata);

int64_t SnapshotMetadata_getProgressValue(const SnapshotMetadata* snapshot_metadata);

String* SnapshotMetadata_getDeviceName(const SnapshotMetadata* snapshot_metadata);

int64_t SnapshotMetadata_get_PLAYED_TIME_UNKNOWN();

int64_t SnapshotMetadata_get_PROGRESS_VALUE_UNKNOWN();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA_H_
