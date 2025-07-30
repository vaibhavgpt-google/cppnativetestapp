#include "com/google/android/gms/games/snapshot/snapshot.h"

#include "com/google/android/gms/games/snapshot/snapshot.hpp"

Snapshot* Snapshot_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Snapshot*>(new ::com::google::android::gms::games::snapshot::Snapshot(jobj));
}

jobject Snapshot_getJniReference(const Snapshot* snapshot) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot)->GetImpl();
}

Snapshot* Snapshot_implementInterface(Snapshot_getMetadataCallback snapshot_get_metadata_callback, Snapshot_getSnapshotContentsCallback snapshot_get_snapshot_contents_callback) {
  return reinterpret_cast<Snapshot*>(::com::google::android::gms::games::snapshot::Snapshot::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::snapshot::Snapshot::getMetadataCallback>(snapshot_get_metadata_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::Snapshot::getSnapshotContentsCallback>(snapshot_get_snapshot_contents_callback)));
}

void Snapshot_destroy(const Snapshot* snapshot) {
  ::com::google::android::gms::games::snapshot::Snapshot::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot));
}

SnapshotMetadata* Snapshot_getMetadata(const Snapshot* snapshot) {
  return reinterpret_cast<SnapshotMetadata*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot)->getMetadata());
}

SnapshotContents* Snapshot_getSnapshotContents(const Snapshot* snapshot) {
  return reinterpret_cast<SnapshotContents*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot)->getSnapshotContents());
}
