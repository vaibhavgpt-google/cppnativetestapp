#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel_file_descriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapshotContents_ SnapshotContents;

typedef ParcelFileDescriptor* (*SnapshotContents_getParcelFileDescriptorCallback)();

typedef bool (*SnapshotContents_isClosedCallback)();

typedef int8_t (*SnapshotContents_readFullyCallback)();

typedef bool (*SnapshotContents_writeBytesCallback)(int8_t content);

typedef bool (*SnapshotContents_modifyBytesCallback)(int32_t dst_offset, int8_t content, int32_t src_offset, int32_t count);

/// Wraps a JNI reference with SnapshotContents object.
/// @param jobj A JNI reference to be wrapped with SnapshotContents object.
/// @see SnapshotContents_destroy
SnapshotContents* SnapshotContents_wrapJniReference(jobject jobj);

jobject SnapshotContents_getJniReference(const SnapshotContents* snapshot_contents);

SnapshotContents* SnapshotContents_implementInterface(SnapshotContents_getParcelFileDescriptorCallback snapshot_contents_get_parcel_file_descriptor_callback, SnapshotContents_isClosedCallback snapshot_contents_is_closed_callback, SnapshotContents_readFullyCallback snapshot_contents_read_fully_callback, SnapshotContents_writeBytesCallback snapshot_contents_write_bytes_callback, SnapshotContents_modifyBytesCallback snapshot_contents_modify_bytes_callback);

/// Destroys snapshot_contents and all internal resources related to it. This function should be
/// called when snapshot_contents is no longer needed.
/// @param snapshot_contents An object to be destroyed.
void SnapshotContents_destroy(const SnapshotContents* snapshot_contents);

ParcelFileDescriptor* SnapshotContents_getParcelFileDescriptor(const SnapshotContents* snapshot_contents);

bool SnapshotContents_isClosed(const SnapshotContents* snapshot_contents);

int8_t SnapshotContents_readFully(const SnapshotContents* snapshot_contents);

bool SnapshotContents_writeBytes(const SnapshotContents* snapshot_contents, int8_t content);

bool SnapshotContents_modifyBytes(const SnapshotContents* snapshot_contents, int32_t dst_offset, int8_t content, int32_t src_offset, int32_t count);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS_H_
