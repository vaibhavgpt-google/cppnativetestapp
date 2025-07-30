#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE_H_

#include <cstdint>
#include <jni.h>
#include "android/graphics/bitmap.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"
#include "java/lang/long.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotMetadataChange_ SnapshotMetadataChange;

typedef struct SnapshotMetadataChange_Builder_ SnapshotMetadataChange_Builder;

typedef String* (*SnapshotMetadataChange_getDescriptionCallback)();

typedef Long* (*SnapshotMetadataChange_getPlayedTimeMillisCallback)();

typedef Bitmap* (*SnapshotMetadataChange_getCoverImageCallback)();

typedef Long* (*SnapshotMetadataChange_getProgressValueCallback)();

/// Wraps a JNI reference with SnapshotMetadataChange object.
/// @param jobj A JNI reference to be wrapped with SnapshotMetadataChange object.
/// @see SnapshotMetadataChange_destroy
SnapshotMetadataChange* SnapshotMetadataChange_wrapJniReference(jobject jobj);

jobject SnapshotMetadataChange_getJniReference(const SnapshotMetadataChange* snapshot_metadata_change);

SnapshotMetadataChange* SnapshotMetadataChange_implementInterface(SnapshotMetadataChange_getDescriptionCallback snapshot_metadata_change_get_description_callback, SnapshotMetadataChange_getPlayedTimeMillisCallback snapshot_metadata_change_get_played_time_millis_callback, SnapshotMetadataChange_getCoverImageCallback snapshot_metadata_change_get_cover_image_callback, SnapshotMetadataChange_getProgressValueCallback snapshot_metadata_change_get_progress_value_callback);

/// Destroys snapshot_metadata_change and all internal resources related to it. This function should be
/// called when snapshot_metadata_change is no longer needed.
/// @param snapshot_metadata_change An object to be destroyed.
void SnapshotMetadataChange_destroy(const SnapshotMetadataChange* snapshot_metadata_change);

String* SnapshotMetadataChange_getDescription(const SnapshotMetadataChange* snapshot_metadata_change);

Long* SnapshotMetadataChange_getPlayedTimeMillis(const SnapshotMetadataChange* snapshot_metadata_change);

Bitmap* SnapshotMetadataChange_getCoverImage(const SnapshotMetadataChange* snapshot_metadata_change);

Long* SnapshotMetadataChange_getProgressValue(const SnapshotMetadataChange* snapshot_metadata_change);

/// Wraps a JNI reference with SnapshotMetadataChange_Builder object.
/// @param jobj A JNI reference to be wrapped with SnapshotMetadataChange_Builder object.
/// @see SnapshotMetadataChange_Builder_destroy
SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_wrapJniReference(jobject jobj);

jobject SnapshotMetadataChange_Builder_getJniReference(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_construct();

/// Destroys snapshot_metadata_change_builder and all internal resources related to it. This function should be
/// called when snapshot_metadata_change_builder is no longer needed.
/// @param snapshot_metadata_change_builder An object to be destroyed.
void SnapshotMetadataChange_Builder_destroy(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setDescription(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, String* description);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setPlayedTimeMillis(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, int64_t played_time_millis);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setProgressValue(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, int64_t progress_value);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setCoverImage(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, Bitmap* cover_image);

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_fromMetadata(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, SnapshotMetadata* metadata);

SnapshotMetadataChange* SnapshotMetadataChange_Builder_build(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE_H_
