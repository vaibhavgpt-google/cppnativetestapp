#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.h"

#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.hpp"

SnapshotMetadataBuffer* SnapshotMetadataBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotMetadataBuffer*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer(jobj));
}

jobject SnapshotMetadataBuffer_getJniReference(const SnapshotMetadataBuffer* snapshot_metadata_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer*>(snapshot_metadata_buffer)->GetImpl();
}

void SnapshotMetadataBuffer_destroy(const SnapshotMetadataBuffer* snapshot_metadata_buffer) {
  ::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer*>(snapshot_metadata_buffer));
}

SnapshotMetadata* SnapshotMetadataBuffer_get(const SnapshotMetadataBuffer* snapshot_metadata_buffer, int32_t position) {
  return reinterpret_cast<SnapshotMetadata*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer*>(snapshot_metadata_buffer)->get(position));
}
