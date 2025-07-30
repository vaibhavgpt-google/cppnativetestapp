#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "android/content/intent.h"
#include "android/os/bundle.h"
#include "com/google/android/gms/games/snapshot/snapshot.h"
#include "com/google/android/gms/games/snapshot/snapshot_contents.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.h"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_change.h"
#include "gni/gni_task.h"
#include "java/lang/integer.h"
#include "java/lang/string.h"
#include "pgs/pgs_annotated_data.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsSnapshotsClient_ PgsSnapshotsClient;

typedef struct Snapshot_ Snapshot;

typedef struct PgsSnapshotsClient_DataOrConflict_Snapshot_ PgsSnapshotsClient_DataOrConflict_Snapshot;

typedef struct PgsSnapshotsClient_SnapshotConflict_ PgsSnapshotsClient_SnapshotConflict;

typedef struct PgsSnapshotsClient_SnapshotContentUnavailableApiException_ PgsSnapshotsClient_SnapshotContentUnavailableApiException;

typedef GniTask* (*PgsSnapshotsClient_getMaxDataSizeCallback)();

typedef GniTask* (*PgsSnapshotsClient_getMaxCoverImageSizeCallback)();

typedef GniTask* (*PgsSnapshotsClient_getSelectSnapshotIntentCallback)(String* title, bool allow_add_button, bool allow_delete, int32_t max_snapshots);

typedef GniTask* (*PgsSnapshotsClient_loadCallback)(bool force_reload);

typedef GniTask* (*PgsSnapshotsClient_openCallback)(String* file_name, bool create_if_not_found, int32_t conflict_policy);

typedef GniTask* (*PgsSnapshotsClient_commitAndCloseCallback)(Snapshot* snapshot, SnapshotMetadataChange* metadata_change);

typedef GniTask* (*PgsSnapshotsClient_discardAndCloseCallback)(Snapshot* snapshot);

typedef GniTask* (*PgsSnapshotsClient_delete_Callback)(SnapshotMetadata* metadata);

typedef SnapshotMetadata* (*PgsSnapshotsClient_getSnapshotFromBundleCallback)(Bundle* extras);

typedef GniTask* (*PgsSnapshotsClient_resolveConflictCallback)(String* conflict_id, String* snapshot_id, SnapshotMetadataChange* metadata_change, SnapshotContents* snapshot_contents);

/// Wraps a JNI reference with PgsSnapshotsClient object.
/// @param jobj A JNI reference to be wrapped with PgsSnapshotsClient object.
/// @see PgsSnapshotsClient_destroy
PgsSnapshotsClient* PgsSnapshotsClient_wrapJniReference(jobject jobj);

jobject PgsSnapshotsClient_getJniReference(const PgsSnapshotsClient* pgs_snapshots_client);

PgsSnapshotsClient* PgsSnapshotsClient_implementInterface(PgsSnapshotsClient_getMaxDataSizeCallback pgs_snapshots_client_get_max_data_size_callback, PgsSnapshotsClient_getMaxCoverImageSizeCallback pgs_snapshots_client_get_max_cover_image_size_callback, PgsSnapshotsClient_getSelectSnapshotIntentCallback pgs_snapshots_client_get_select_snapshot_intent_callback, PgsSnapshotsClient_loadCallback pgs_snapshots_client_load_callback, PgsSnapshotsClient_openCallback pgs_snapshots_client_open_callback, PgsSnapshotsClient_commitAndCloseCallback pgs_snapshots_client_commit_and_close_callback, PgsSnapshotsClient_discardAndCloseCallback pgs_snapshots_client_discard_and_close_callback, PgsSnapshotsClient_delete_Callback pgs_snapshots_client_delete__callback, PgsSnapshotsClient_getSnapshotFromBundleCallback pgs_snapshots_client_get_snapshot_from_bundle_callback, PgsSnapshotsClient_resolveConflictCallback pgs_snapshots_client_resolve_conflict_callback);

/// Destroys pgs_snapshots_client and all internal resources related to it. This function should be
/// called when pgs_snapshots_client is no longer needed.
/// @param pgs_snapshots_client An object to be destroyed.
void PgsSnapshotsClient_destroy(const PgsSnapshotsClient* pgs_snapshots_client);

GniTask* PgsSnapshotsClient_getMaxDataSize(const PgsSnapshotsClient* pgs_snapshots_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_getMaxDataSize.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Integer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_getMaxDataSize.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_getMaxDataSize
/// @see Integer_destroy
GniTaskErrorCode PgsSnapshotsClient_getMaxDataSize_getResult(const GniTask* task, Integer** out_result);

GniTask* PgsSnapshotsClient_getMaxCoverImageSize(const PgsSnapshotsClient* pgs_snapshots_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_getMaxCoverImageSize.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Integer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_getMaxCoverImageSize.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_getMaxCoverImageSize
/// @see Integer_destroy
GniTaskErrorCode PgsSnapshotsClient_getMaxCoverImageSize_getResult(const GniTask* task, Integer** out_result);

GniTask* PgsSnapshotsClient_getSelectSnapshotIntent(const PgsSnapshotsClient* pgs_snapshots_client, String* title, bool allow_add_button, bool allow_delete, int32_t max_snapshots);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_getSelectSnapshotIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_getSelectSnapshotIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_getSelectSnapshotIntent
/// @see Intent_destroy
GniTaskErrorCode PgsSnapshotsClient_getSelectSnapshotIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsSnapshotsClient_load(const PgsSnapshotsClient* pgs_snapshots_client, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_load.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_SnapshotMetadataBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_load.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_load
/// @see PgsAnnotatedData_SnapshotMetadataBuffer_destroy
GniTaskErrorCode PgsSnapshotsClient_load_getResult(const GniTask* task, PgsAnnotatedData_SnapshotMetadataBuffer** out_result);

GniTask* PgsSnapshotsClient_open(const PgsSnapshotsClient* pgs_snapshots_client, String* file_name, bool create_if_not_found, int32_t conflict_policy);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_open.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsSnapshotsClient_DataOrConflict_Snapshot_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_open.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_open
/// @see PgsSnapshotsClient_DataOrConflict_Snapshot_destroy
GniTaskErrorCode PgsSnapshotsClient_open_getResult(const GniTask* task, PgsSnapshotsClient_DataOrConflict_Snapshot** out_result);

GniTask* PgsSnapshotsClient_commitAndClose(const PgsSnapshotsClient* pgs_snapshots_client, Snapshot* snapshot, SnapshotMetadataChange* metadata_change);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_commitAndClose.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call SnapshotMetadata_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_commitAndClose.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_commitAndClose
/// @see SnapshotMetadata_destroy
GniTaskErrorCode PgsSnapshotsClient_commitAndClose_getResult(const GniTask* task, SnapshotMetadata** out_result);

GniTask* PgsSnapshotsClient_discardAndClose(const PgsSnapshotsClient* pgs_snapshots_client, Snapshot* snapshot);

GniTask* PgsSnapshotsClient_delete_(const PgsSnapshotsClient* pgs_snapshots_client, SnapshotMetadata* metadata);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_delete_.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call GniString_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_delete_.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_delete_
/// @see GniString_destroy
GniTaskErrorCode PgsSnapshotsClient_delete__getResult(const GniTask* task, const char** out_result);

SnapshotMetadata* PgsSnapshotsClient_getSnapshotFromBundle(Bundle* extras);

GniTask* PgsSnapshotsClient_resolveConflict(const PgsSnapshotsClient* pgs_snapshots_client, String* conflict_id, String* snapshot_id, SnapshotMetadataChange* metadata_change, SnapshotContents* snapshot_contents);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsSnapshotsClient_resolveConflict.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsSnapshotsClient_DataOrConflict_Snapshot_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsSnapshotsClient_resolveConflict.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsSnapshotsClient_resolveConflict
/// @see PgsSnapshotsClient_DataOrConflict_Snapshot_destroy
GniTaskErrorCode PgsSnapshotsClient_resolveConflict_getResult(const GniTask* task, PgsSnapshotsClient_DataOrConflict_Snapshot** out_result);

const char* PgsSnapshotsClient_get_EXTRA_SNAPSHOT_METADATA();

const char* PgsSnapshotsClient_get_EXTRA_SNAPSHOT_NEW();

int32_t PgsSnapshotsClient_get_DISPLAY_LIMIT_NONE();

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_MANUAL();

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_LONGEST_PLAYTIME();

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_LAST_KNOWN_GOOD();

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_MOST_RECENTLY_MODIFIED();

int32_t PgsSnapshotsClient_get_RESOLUTION_POLICY_HIGHEST_PROGRESS();

/// Wraps a JNI reference with PgsSnapshotsClient_DataOrConflict_Snapshot object.
/// @param jobj A JNI reference to be wrapped with PgsSnapshotsClient_DataOrConflict_Snapshot object.
/// @see PgsSnapshotsClient_DataOrConflict_Snapshot_destroy
PgsSnapshotsClient_DataOrConflict_Snapshot* PgsSnapshotsClient_DataOrConflict_Snapshot_wrapJniReference(jobject jobj);

jobject PgsSnapshotsClient_DataOrConflict_Snapshot_getJniReference(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot);

/// Destroys pgs_snapshots_client_data_or_conflict_snapshot and all internal resources related to it. This function should be
/// called when pgs_snapshots_client_data_or_conflict_snapshot is no longer needed.
/// @param pgs_snapshots_client_data_or_conflict_snapshot An object to be destroyed.
void PgsSnapshotsClient_DataOrConflict_Snapshot_destroy(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot);

bool PgsSnapshotsClient_DataOrConflict_Snapshot_isConflict(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot);

Snapshot* PgsSnapshotsClient_DataOrConflict_Snapshot_getData(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot);

PgsSnapshotsClient_SnapshotConflict* PgsSnapshotsClient_DataOrConflict_Snapshot_getConflict(const PgsSnapshotsClient_DataOrConflict_Snapshot* pgs_snapshots_client_data_or_conflict_snapshot);

/// Wraps a JNI reference with PgsSnapshotsClient_SnapshotConflict object.
/// @param jobj A JNI reference to be wrapped with PgsSnapshotsClient_SnapshotConflict object.
/// @see PgsSnapshotsClient_SnapshotConflict_destroy
PgsSnapshotsClient_SnapshotConflict* PgsSnapshotsClient_SnapshotConflict_wrapJniReference(jobject jobj);

jobject PgsSnapshotsClient_SnapshotConflict_getJniReference(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

/// Destroys pgs_snapshots_client_snapshot_conflict and all internal resources related to it. This function should be
/// called when pgs_snapshots_client_snapshot_conflict is no longer needed.
/// @param pgs_snapshots_client_snapshot_conflict An object to be destroyed.
void PgsSnapshotsClient_SnapshotConflict_destroy(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

Snapshot* PgsSnapshotsClient_SnapshotConflict_getSnapshot(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

Snapshot* PgsSnapshotsClient_SnapshotConflict_getConflictingSnapshot(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

String* PgsSnapshotsClient_SnapshotConflict_getConflictId(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

SnapshotContents* PgsSnapshotsClient_SnapshotConflict_getResolutionSnapshotContents(const PgsSnapshotsClient_SnapshotConflict* pgs_snapshots_client_snapshot_conflict);

/// Wraps a JNI reference with PgsSnapshotsClient_SnapshotContentUnavailableApiException object.
/// @param jobj A JNI reference to be wrapped with PgsSnapshotsClient_SnapshotContentUnavailableApiException object.
/// @see PgsSnapshotsClient_SnapshotContentUnavailableApiException_destroy
PgsSnapshotsClient_SnapshotContentUnavailableApiException* PgsSnapshotsClient_SnapshotContentUnavailableApiException_wrapJniReference(jobject jobj);

jobject PgsSnapshotsClient_SnapshotContentUnavailableApiException_getJniReference(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception);

/// Destroys pgs_snapshots_client_snapshot_content_unavailable_api_exception and all internal resources related to it. This function should be
/// called when pgs_snapshots_client_snapshot_content_unavailable_api_exception is no longer needed.
/// @param pgs_snapshots_client_snapshot_content_unavailable_api_exception An object to be destroyed.
void PgsSnapshotsClient_SnapshotContentUnavailableApiException_destroy(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception);

SnapshotMetadata* PgsSnapshotsClient_SnapshotContentUnavailableApiException_getSnapshotMetadata(const PgsSnapshotsClient_SnapshotContentUnavailableApiException* pgs_snapshots_client_snapshot_content_unavailable_api_exception);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT_H_
