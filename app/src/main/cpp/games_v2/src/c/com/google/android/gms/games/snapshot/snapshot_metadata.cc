#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"

#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"

SnapshotMetadata* SnapshotMetadata_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotMetadata*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadata(jobj));
}

jobject SnapshotMetadata_getJniReference(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->GetImpl();
}

SnapshotMetadata* SnapshotMetadata_implementInterface(SnapshotMetadata_getGameCallback snapshot_metadata_get_game_callback, SnapshotMetadata_getOwnerCallback snapshot_metadata_get_owner_callback, SnapshotMetadata_getSnapshotIdCallback snapshot_metadata_get_snapshot_id_callback, SnapshotMetadata_getCoverImageUriCallback snapshot_metadata_get_cover_image_uri_callback, SnapshotMetadata_getCoverImageAspectRatioCallback snapshot_metadata_get_cover_image_aspect_ratio_callback, SnapshotMetadata_getUniqueNameCallback snapshot_metadata_get_unique_name_callback, SnapshotMetadata_getDescriptionCallback snapshot_metadata_get_description_callback, SnapshotMetadata_getLastModifiedTimestampCallback snapshot_metadata_get_last_modified_timestamp_callback, SnapshotMetadata_getPlayedTimeCallback snapshot_metadata_get_played_time_callback, SnapshotMetadata_hasChangePendingCallback snapshot_metadata_has_change_pending_callback, SnapshotMetadata_getProgressValueCallback snapshot_metadata_get_progress_value_callback, SnapshotMetadata_getDeviceNameCallback snapshot_metadata_get_device_name_callback) {
  return reinterpret_cast<SnapshotMetadata*>(::com::google::android::gms::games::snapshot::SnapshotMetadata::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getGameCallback>(snapshot_metadata_get_game_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getOwnerCallback>(snapshot_metadata_get_owner_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getSnapshotIdCallback>(snapshot_metadata_get_snapshot_id_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getCoverImageUriCallback>(snapshot_metadata_get_cover_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getCoverImageAspectRatioCallback>(snapshot_metadata_get_cover_image_aspect_ratio_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getUniqueNameCallback>(snapshot_metadata_get_unique_name_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getDescriptionCallback>(snapshot_metadata_get_description_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getLastModifiedTimestampCallback>(snapshot_metadata_get_last_modified_timestamp_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getPlayedTimeCallback>(snapshot_metadata_get_played_time_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::hasChangePendingCallback>(snapshot_metadata_has_change_pending_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getProgressValueCallback>(snapshot_metadata_get_progress_value_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadata::getDeviceNameCallback>(snapshot_metadata_get_device_name_callback)));
}

void SnapshotMetadata_destroy(const SnapshotMetadata* snapshot_metadata) {
  ::com::google::android::gms::games::snapshot::SnapshotMetadata::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata));
}

PgsGame* SnapshotMetadata_getGame(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<PgsGame*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getGame());
}

PgsPlayer* SnapshotMetadata_getOwner(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getOwner());
}

String* SnapshotMetadata_getSnapshotId(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getSnapshotId());
}

Uri* SnapshotMetadata_getCoverImageUri(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getCoverImageUri());
}

float SnapshotMetadata_getCoverImageAspectRatio(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getCoverImageAspectRatio();
}

String* SnapshotMetadata_getUniqueName(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getUniqueName());
}

String* SnapshotMetadata_getDescription(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getDescription());
}

int64_t SnapshotMetadata_getLastModifiedTimestamp(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getLastModifiedTimestamp();
}

int64_t SnapshotMetadata_getPlayedTime(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getPlayedTime();
}

bool SnapshotMetadata_hasChangePending(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->hasChangePending();
}

int64_t SnapshotMetadata_getProgressValue(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getProgressValue();
}

String* SnapshotMetadata_getDeviceName(const SnapshotMetadata* snapshot_metadata) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(snapshot_metadata)->getDeviceName());
}

int64_t SnapshotMetadata_get_PLAYED_TIME_UNKNOWN() {
  return ::com::google::android::gms::games::snapshot::SnapshotMetadata::PLAYED_TIME_UNKNOWN;
}

int64_t SnapshotMetadata_get_PROGRESS_VALUE_UNKNOWN() {
  return ::com::google::android::gms::games::snapshot::SnapshotMetadata::PROGRESS_VALUE_UNKNOWN;
}
