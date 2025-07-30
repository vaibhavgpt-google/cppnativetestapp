#include "com/google/android/gms/games/snapshot/snapshot_metadata_change.h"

#include "com/google/android/gms/games/snapshot/snapshot_metadata_change.hpp"

SnapshotMetadataChange* SnapshotMetadataChange_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotMetadataChange*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange(jobj));
}

jobject SnapshotMetadataChange_getJniReference(const SnapshotMetadataChange* snapshot_metadata_change) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change)->GetImpl();
}

SnapshotMetadataChange* SnapshotMetadataChange_implementInterface(SnapshotMetadataChange_getDescriptionCallback snapshot_metadata_change_get_description_callback, SnapshotMetadataChange_getPlayedTimeMillisCallback snapshot_metadata_change_get_played_time_millis_callback, SnapshotMetadataChange_getCoverImageCallback snapshot_metadata_change_get_cover_image_callback, SnapshotMetadataChange_getProgressValueCallback snapshot_metadata_change_get_progress_value_callback) {
  return reinterpret_cast<SnapshotMetadataChange*>(::com::google::android::gms::games::snapshot::SnapshotMetadataChange::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadataChange::getDescriptionCallback>(snapshot_metadata_change_get_description_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadataChange::getPlayedTimeMillisCallback>(snapshot_metadata_change_get_played_time_millis_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadataChange::getCoverImageCallback>(snapshot_metadata_change_get_cover_image_callback), reinterpret_cast<::com::google::android::gms::games::snapshot::SnapshotMetadataChange::getProgressValueCallback>(snapshot_metadata_change_get_progress_value_callback)));
}

void SnapshotMetadataChange_destroy(const SnapshotMetadataChange* snapshot_metadata_change) {
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change));
}

String* SnapshotMetadataChange_getDescription(const SnapshotMetadataChange* snapshot_metadata_change) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change)->getDescription());
}

Long* SnapshotMetadataChange_getPlayedTimeMillis(const SnapshotMetadataChange* snapshot_metadata_change) {
  return reinterpret_cast<Long*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change)->getPlayedTimeMillis());
}

Bitmap* SnapshotMetadataChange_getCoverImage(const SnapshotMetadataChange* snapshot_metadata_change) {
  return reinterpret_cast<Bitmap*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change)->getCoverImage());
}

Long* SnapshotMetadataChange_getProgressValue(const SnapshotMetadataChange* snapshot_metadata_change) {
  return reinterpret_cast<Long*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(snapshot_metadata_change)->getProgressValue());
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_wrapJniReference(jobject jobj) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder(jobj));
}

jobject SnapshotMetadataChange_Builder_getJniReference(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder) {
  return reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->GetImpl();
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_construct() {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(new ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder());
}

void SnapshotMetadataChange_Builder_destroy(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder) {
  ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder::destroy(reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder));
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setDescription(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, String* description) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->setDescription(*reinterpret_cast<const ::java::lang::String*>(description)));
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setPlayedTimeMillis(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, int64_t played_time_millis) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->setPlayedTimeMillis(played_time_millis));
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setProgressValue(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, int64_t progress_value) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->setProgressValue(progress_value));
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_setCoverImage(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, Bitmap* cover_image) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->setCoverImage(*reinterpret_cast<const ::android::graphics::Bitmap*>(cover_image)));
}

SnapshotMetadataChange_Builder* SnapshotMetadataChange_Builder_fromMetadata(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder, SnapshotMetadata* metadata) {
  return reinterpret_cast<SnapshotMetadataChange_Builder*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->fromMetadata(*reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(metadata)));
}

SnapshotMetadataChange* SnapshotMetadataChange_Builder_build(const SnapshotMetadataChange_Builder* snapshot_metadata_change_builder) {
  return reinterpret_cast<SnapshotMetadataChange*>(&reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder*>(snapshot_metadata_change_builder)->build());
}
