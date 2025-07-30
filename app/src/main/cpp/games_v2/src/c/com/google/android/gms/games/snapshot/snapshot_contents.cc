#include "com/google/android/gms/games/snapshot/snapshot_contents.h"

#include "com/google/android/gms/games/snapshot/snapshot_contents.hpp"

SnapshotContents* SnapshotContents_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotContents*>(new ::com::google::android::gms::games::snapshot::SnapshotContents(jobj));
}

jobject SnapshotContents_getJniReference(const SnapshotContents* snapshot_contents) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->GetImpl();
}

SnapshotContents* SnapshotContents_implementInterface(SnapshotContents_getParcelFileDescriptorCallback snapshot_contents_get_parcel_file_descriptor_callback, SnapshotContents_isClosedCallback snapshot_contents_is_closed_callback, SnapshotContents_readFullyCallback snapshot_contents_read_fully_callback, SnapshotContents_writeBytesCallback snapshot_contents_write_bytes_callback, SnapshotContents_modifyBytesCallback snapshot_contents_modify_bytes_callback) {
  return reinterpret_cast<SnapshotContents*>(::com::google::android::gms::games::snapshot::SnapshotContents::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotContents::getParcelFileDescriptorCallback>(snapshot_contents_get_parcel_file_descriptor_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotContents::isClosedCallback>(snapshot_contents_is_closed_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotContents::readFullyCallback>(snapshot_contents_read_fully_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotContents::writeBytesCallback>(snapshot_contents_write_bytes_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotContents::modifyBytesCallback>(snapshot_contents_modify_bytes_callback)));
}

void SnapshotContents_destroy(const SnapshotContents* snapshot_contents) {
  ::com::google::android::gms::games::snapshot::SnapshotContents::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents));
}

ParcelFileDescriptor* SnapshotContents_getParcelFileDescriptor(const SnapshotContents* snapshot_contents) {
  return reinterpret_cast<ParcelFileDescriptor*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->getParcelFileDescriptor());
}

bool SnapshotContents_isClosed(const SnapshotContents* snapshot_contents) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->isClosed();
}

int8_t SnapshotContents_readFully(const SnapshotContents* snapshot_contents) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->readFully();
}

bool SnapshotContents_writeBytes(const SnapshotContents* snapshot_contents, int8_t content) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->writeBytes(content);
}

bool SnapshotContents_modifyBytes(const SnapshotContents* snapshot_contents, int32_t dst_offset, int8_t content, int32_t src_offset, int32_t count) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)->modifyBytes(dst_offset, content, src_offset, count);
}
