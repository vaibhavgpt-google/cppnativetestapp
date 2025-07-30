#include "pgs/pgs_snapshots_client.h"

#include "com/google/android/gms/games/snapshots_client.hpp"
#include "gni/gni_task_internal.h"

PgsSnapshotsClient* PgsSnapshotsClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsSnapshotsClient*>(new ::com::google::android::gms::games::SnapshotsClient(jobj));
}

jobject PgsSnapshotsClient_getJniReference(const PgsSnapshotsClient* pgs_snapshots_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->GetImpl();
}

PgsSnapshotsClient* PgsSnapshotsClient_implementInterface(PgsSnapshotsClient_getMaxDataSizeCallback pgs_snapshots_client_get_max_data_size_callback, PgsSnapshotsClient_getMaxCoverImageSizeCallback pgs_snapshots_client_get_max_cover_image_size_callback, PgsSnapshotsClient_getSelectSnapshotIntentCallback pgs_snapshots_client_get_select_snapshot_intent_callback, PgsSnapshotsClient_loadCallback pgs_snapshots_client_load_callback, PgsSnapshotsClient_openCallback pgs_snapshots_client_open_callback, PgsSnapshotsClient_commitAndCloseCallback pgs_snapshots_client_commit_and_close_callback, PgsSnapshotsClient_discardAndCloseCallback pgs_snapshots_client_discard_and_close_callback, PgsSnapshotsClient_delete_Callback pgs_snapshots_client_delete__callback, PgsSnapshotsClient_getSnapshotFromBundleCallback pgs_snapshots_client_get_snapshot_from_bundle_callback, PgsSnapshotsClient_resolveConflictCallback pgs_snapshots_client_resolve_conflict_callback) {
  return reinterpret_cast<PgsSnapshotsClient*>(::com::google::android::gms::games::SnapshotsClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::getMaxDataSizeCallback>(pgs_snapshots_client_get_max_data_size_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::getMaxCoverImageSizeCallback>(pgs_snapshots_client_get_max_cover_image_size_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::getSelectSnapshotIntentCallback>(pgs_snapshots_client_get_select_snapshot_intent_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::loadCallback>(pgs_snapshots_client_load_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::openCallback>(pgs_snapshots_client_open_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::commitAndCloseCallback>(pgs_snapshots_client_commit_and_close_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::discardAndCloseCallback>(pgs_snapshots_client_discard_and_close_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::delete_Callback>(pgs_snapshots_client_delete__callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::getSnapshotFromBundleCallback>(pgs_snapshots_client_get_snapshot_from_bundle_callback), reinterpret_cast<::com::google::android::gms::games::SnapshotsClient::resolveConflictCallback>(pgs_snapshots_client_resolve_conflict_callback)));
}

void PgsSnapshotsClient_destroy(const PgsSnapshotsClient* pgs_snapshots_client) {
  ::com::google::android::gms::games::SnapshotsClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client));
}

GniTask* PgsSnapshotsClient_getMaxDataSize(const PgsSnapshotsClient* pgs_snapshots_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->getMaxDataSize());
}

GniTaskErrorCode PgsSnapshotsClient_getMaxDataSize_getResult(
    const GniTask* task, Integer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Integer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_getMaxCoverImageSize(const PgsSnapshotsClient* pgs_snapshots_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->getMaxCoverImageSize());
}

GniTaskErrorCode PgsSnapshotsClient_getMaxCoverImageSize_getResult(
    const GniTask* task, Integer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Integer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_getSelectSnapshotIntent(const PgsSnapshotsClient* pgs_snapshots_client, String* title, bool allow_add_button, bool allow_delete, int32_t max_snapshots) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->getSelectSnapshotIntent(*reinterpret_cast<const ::java::lang::String*>(title), allow_add_button, allow_delete, max_snapshots));
}

GniTaskErrorCode PgsSnapshotsClient_getSelectSnapshotIntent_getResult(
    const GniTask* task, Intent** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Intent_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_load(const PgsSnapshotsClient* pgs_snapshots_client, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->load(force_reload));
}

GniTaskErrorCode PgsSnapshotsClient_load_getResult(
    const GniTask* task, PgsAnnotatedData_SnapshotMetadataBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_SnapshotMetadataBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_open(const PgsSnapshotsClient* pgs_snapshots_client, String* file_name, bool create_if_not_found, int32_t conflict_policy) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->open(*reinterpret_cast<const ::java::lang::String*>(file_name), create_if_not_found, conflict_policy));
}

GniTaskErrorCode PgsSnapshotsClient_open_getResult(
    const GniTask* task, PgsSnapshotsClient_DataOrConflict_Snapshot** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsSnapshotsClient_DataOrConflict_Snapshot_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_commitAndClose(const PgsSnapshotsClient* pgs_snapshots_client, Snapshot* snapshot, SnapshotMetadataChange* metadata_change) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->commitAndClose(*reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot), *reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(metadata_change)));
}

GniTaskErrorCode PgsSnapshotsClient_commitAndClose_getResult(
    const GniTask* task, SnapshotMetadata** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = SnapshotMetadata_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsSnapshotsClient_discardAndClose(const PgsSnapshotsClient* pgs_snapshots_client, Snapshot* snapshot) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->discardAndClose(*reinterpret_cast<const ::com::google::android::gms::games::snapshot::Snapshot*>(snapshot)));
}

GniTask* PgsSnapshotsClient_delete_(const PgsSnapshotsClient* pgs_snapshots_client, SnapshotMetadata* metadata) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->delete_(*reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadata*>(metadata)));
}

GniTaskErrorCode PgsSnapshotsClient_delete__getResult(
    const GniTask* task, const char** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
  } else {
    *out_result = gni::GniCore::GetInstance()->ConvertString(result);
  }

  return GNI_TASK_SUCCESS;
}

SnapshotMetadata* PgsSnapshotsClient_getSnapshotFromBundle(Bundle* extras) {
  return reinterpret_cast<SnapshotMetadata*>(&::com::google::android::gms::games::SnapshotsClient::getSnapshotFromBundle(*reinterpret_cast<const ::android::os::Bundle*>(extras)));
}

GniTask* PgsSnapshotsClient_resolveConflict(const PgsSnapshotsClient* pgs_snapshots_client, String* conflict_id, String* snapshot_id, SnapshotMetadataChange* metadata_change, SnapshotContents* snapshot_contents) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient*>(pgs_snapshots_client)->resolveConflict(*reinterpret_cast<const ::java::lang::String*>(conflict_id), *reinterpret_cast<const ::java::lang::String*>(snapshot_id), *reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*>(metadata_change), *reinterpret_cast<const ::com::google::android::gms::games::snapshot::SnapshotContents*>(snapshot_contents)));
}

GniTaskErrorCode PgsSnapshotsClient_resolveConflict_getResult(
    const GniTask* task, PgsSnapshotsClient_DataOrConflict_Snapshot** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsSnapshotsClient_DataOrConflict_Snapshot_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

const char* PgsSnapshotsClient_get_EXTRA_SNAPSHOT_METADATA() {
  return ::com::google::android::gms::games::SnapshotsClient::EXTRA_SNAPSHOT_METADATA;
}

const char* PgsSnapshotsClient_get_EXTRA_SNAPSHOT_NEW() {
  return ::com::google::android::gms::games::SnapshotsClient::EXTRA_SNAPSHOT_NEW;
}

int32_t PgsSnapshotsClient_get_DISPLAY_LIMIT_NONE() {
  return ::com::google::android::gms::games::SnapshotsClient::DISPLAY_LIMIT_NONE;
}

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_MANUAL() {
  return ::com::google::android::gms::games::SnapshotsClient::RESOLUTION_POLICY_MANUAL;
}

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_LONGEST_PLAYTIME() {
  return ::com::google::android::gms::games::SnapshotsClient::RESOLUTION_POLICY_LONGEST_PLAYTIME;
}

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_LAST_KNOWN_GOOD() {
  return ::com::google::android::gms::games::SnapshotsClient::RESOLUTION_POLICY_LAST_KNOWN_GOOD;
}

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_MOST_RECENTLY_MODIFIED() {
  return ::com::google::android::gms::games::SnapshotsClient::RESOLUTION_POLICY_MOST_RECENTLY_MODIFIED;
}

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_HIGHEST_PROGRESS() {
  return ::com::google::android::gms::games::SnapshotsClient::RESOLUTION_POLICY_HIGHEST_PROGRESS;
}

PgsSnapshotsClient_DataOrConflict_Snapshot* PgsSnapshotsClient_DataOrConflict_Snapshot_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsSnapshotsClient_DataOrConflict_Snapshot*>(new ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>(jobj));
}

jobject PgsSnapshotsClient_DataOrConflict_Snapshot_getJniReference(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot) {
  return reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>*>(pgs_snapshots_client_data_or_conflict_snapshot)->GetImpl();
}

void PgsSnapshotsClient_DataOrConflict_Snapshot_destroy(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot) {
  ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>::destroy(reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>*>(pgs_snapshots_client_data_or_conflict_snapshot));
}

bool PgsSnapshotsClient_DataOrConflict_Snapshot_isConflict(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot) {
  return reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>*>(pgs_snapshots_client_data_or_conflict_snapshot)->isConflict();
}

Snapshot* PgsSnapshotsClient_DataOrConflict_Snapshot_getData(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot) {
  return reinterpret_cast<Snapshot*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>*>(pgs_snapshots_client_data_or_conflict_snapshot)->getData());
}

PgsSnapshotsClient_SnapshotConflict* PgsSnapshotsClient_DataOrConflict_Snapshot_getConflict(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot) {
  return reinterpret_cast<PgsSnapshotsClient_SnapshotConflict*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>*>(pgs_snapshots_client_data_or_conflict_snapshot)->getConflict());
}

PgsSnapshotsClient_SnapshotConflict* PgsSnapshotsClient_SnapshotConflict_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsSnapshotsClient_SnapshotConflict*>(new ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict(jobj));
}

jobject PgsSnapshotsClient_SnapshotConflict_getJniReference(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  return reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict)->GetImpl();
}

void PgsSnapshotsClient_SnapshotConflict_destroy(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict::destroy(reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict));
}

Snapshot* PgsSnapshotsClient_SnapshotConflict_getSnapshot(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  return reinterpret_cast<Snapshot*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict)->getSnapshot());
}

Snapshot* PgsSnapshotsClient_SnapshotConflict_getConflictingSnapshot(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  return reinterpret_cast<Snapshot*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict)->getConflictingSnapshot());
}

String* PgsSnapshotsClient_SnapshotConflict_getConflictId(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict)->getConflictId());
}

SnapshotContents* PgsSnapshotsClient_SnapshotConflict_getResolutionSnapshotContents(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict) {
  return reinterpret_cast<SnapshotContents*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict*>(pgs_snapshots_client_snapshot_conflict)->getResolutionSnapshotContents());
}

PgsSnapshotsClient_SnapshotContentUnavailableApiException* PgsSnapshotsClient_SnapshotContentUnavailableApiException_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsSnapshotsClient_SnapshotContentUnavailableApiException*>(new ::com::google::android::gms::games::SnapshotsClient::SnapshotContentUnavailableApiException(jobj));
}

jobject PgsSnapshotsClient_SnapshotContentUnavailableApiException_getJniReference(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception) {
  return reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotContentUnavailableApiException*>(pgs_snapshots_client_snapshot_content_unavailable_api_exception)->GetImpl();
}

void PgsSnapshotsClient_SnapshotContentUnavailableApiException_destroy(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception) {
  ::com::google::android::gms::games::SnapshotsClient::SnapshotContentUnavailableApiException::destroy(reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotContentUnavailableApiException*>(pgs_snapshots_client_snapshot_content_unavailable_api_exception));
}

SnapshotMetadata* PgsSnapshotsClient_SnapshotContentUnavailableApiException_getSnapshotMetadata(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception) {
  return reinterpret_cast<SnapshotMetadata*>(&reinterpret_cast<const ::com::google::android::gms::games::SnapshotsClient::SnapshotContentUnavailableApiException*>(pgs_snapshots_client_snapshot_content_unavailable_api_exception)->getSnapshotMetadata());
}
