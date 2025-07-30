#include "com/google/android/gms/games/snapshot/snapshot_entity.h"

#include "com/google/android/gms/games/snapshot/snapshot_entity.hpp"

SnapshotEntity* SnapshotEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotEntity*>(new ::com::google::android::gms::games::snapshot::SnapshotEntity(jobj));
}

jobject SnapshotEntity_getJniReference(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->GetImpl();
}

void SnapshotEntity_destroy(const SnapshotEntity* snapshot_entity) {
  ::com::google::android::gms::games::snapshot::SnapshotEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity));
}

SnapshotMetadata* SnapshotEntity_getMetadata(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<SnapshotMetadata*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->getMetadata());
}

SnapshotContents* SnapshotEntity_getSnapshotContents(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<SnapshotContents*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->getSnapshotContents());
}

Snapshot* SnapshotEntity_freeze(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<Snapshot*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->freeze());
}

bool SnapshotEntity_isDataValid(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->isDataValid();
}

int32_t SnapshotEntity_hashCode(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->hashCode();
}

String* SnapshotEntity_toString(const SnapshotEntity* snapshot_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->toString());
}

void SnapshotEntity_writeToParcel(const SnapshotEntity* snapshot_entity, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotEntity*>(snapshot_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
