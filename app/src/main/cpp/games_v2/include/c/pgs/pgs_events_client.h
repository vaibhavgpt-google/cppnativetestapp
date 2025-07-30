#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/event/event_buffer.h"
#include "gni/gni_task.h"
#include "java/lang/string.h"
#include "pgs/pgs_annotated_data.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsEventsClient_ PgsEventsClient;

typedef GniTask* (*PgsEventsClient_loadCallback)(bool force_reload);

typedef GniTask* (*PgsEventsClient_loadByIdsCallback)(bool force_reload, String* event_ids);

typedef void (*PgsEventsClient_incrementCallback)(String* event_id, int32_t increment_amount);

/// Wraps a JNI reference with PgsEventsClient object.
/// @param jobj A JNI reference to be wrapped with PgsEventsClient object.
/// @see PgsEventsClient_destroy
PgsEventsClient* PgsEventsClient_wrapJniReference(jobject jobj);

jobject PgsEventsClient_getJniReference(const PgsEventsClient* pgs_events_client);

PgsEventsClient* PgsEventsClient_implementInterface(PgsEventsClient_loadCallback pgs_events_client_load_callback, PgsEventsClient_loadByIdsCallback pgs_events_client_load_by_ids_callback, PgsEventsClient_incrementCallback pgs_events_client_increment_callback);

/// Destroys pgs_events_client and all internal resources related to it. This function should be
/// called when pgs_events_client is no longer needed.
/// @param pgs_events_client An object to be destroyed.
void PgsEventsClient_destroy(const PgsEventsClient* pgs_events_client);

GniTask* PgsEventsClient_load(const PgsEventsClient* pgs_events_client, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsEventsClient_load.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_EventBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsEventsClient_load.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsEventsClient_load
/// @see PgsAnnotatedData_EventBuffer_destroy
GniTaskErrorCode PgsEventsClient_load_getResult(const GniTask* task, PgsAnnotatedData_EventBuffer** out_result);

GniTask* PgsEventsClient_loadByIds(const PgsEventsClient* pgs_events_client, bool force_reload, String* event_ids);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsEventsClient_loadByIds.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_EventBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsEventsClient_loadByIds.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsEventsClient_loadByIds
/// @see PgsAnnotatedData_EventBuffer_destroy
GniTaskErrorCode PgsEventsClient_loadByIds_getResult(const GniTask* task, PgsAnnotatedData_EventBuffer** out_result);

void PgsEventsClient_increment(const PgsEventsClient* pgs_events_client, String* event_id, int32_t increment_amount);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT_H_
