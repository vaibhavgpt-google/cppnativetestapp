#include "com/google/android/gms/games/snapshot/snapshot_metadata_entity.h"

#include "com/google/android/gms/games/snapshot/snapshot_metadata_entity.hpp"

SnapshotMetadataEntity* SnapshotMetadataEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotMetadataEntity*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity(jobj));
}

jobject SnapshotMetadataEntity_getJniReference(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->GetImpl();
}

void SnapshotMetadataEntity_destroy(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity));
}

PgsGame* SnapshotMetadataEntity_getGame(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<PgsGame*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getGame());
}

PgsPlayer* SnapshotMetadataEntity_getOwner(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getOwner());
}

String* SnapshotMetadataEntity_getSnapshotId(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getSnapshotId());
}

Uri* SnapshotMetadataEntity_getCoverImageUri(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getCoverImageUri());
}

float SnapshotMetadataEntity_getCoverImageAspectRatio(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getCoverImageAspectRatio();
}

String* SnapshotMetadataEntity_getUniqueName(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getUniqueName());
}

String* SnapshotMetadataEntity_getDescription(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getDescription());
}

int64_t SnapshotMetadataEntity_getLastModifiedTimestamp(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getLastModifiedTimestamp();
}

int64_t SnapshotMetadataEntity_getPlayedTime(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getPlayedTime();
}

bool SnapshotMetadataEntity_hasChangePending(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->hasChangePending();
}

int64_t SnapshotMetadataEntity_getProgressValue(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getProgressValue();
}

String* SnapshotMetadataEntity_getDeviceName(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->getDeviceName());
}

SnapshotMetadata* SnapshotMetadataEntity_freeze(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<SnapshotMetadata*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->freeze());
}

bool SnapshotMetadataEntity_isDataValid(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->isDataValid();
}

int32_t SnapshotMetadataEntity_hashCode(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->hashCode();
}

String* SnapshotMetadataEntity_toString(const SnapshotMetadataEntity* snapshot_metadata_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->toString());
}

void SnapshotMetadataEntity_writeToParcel(const SnapshotMetadataEntity* snapshot_metadata_entity, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataEntity*>(snapshot_metadata_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
