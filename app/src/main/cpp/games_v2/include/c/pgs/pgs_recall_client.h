#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "gni/gni_task.h"
#include "pgs/pgs_recall_access.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsRecallClient_ PgsRecallClient;

typedef GniTask* (*PgsRecallClient_requestRecallAccessCallback)();

/// Wraps a JNI reference with PgsRecallClient object.
/// @param jobj A JNI reference to be wrapped with PgsRecallClient object.
/// @see PgsRecallClient_destroy
PgsRecallClient* PgsRecallClient_wrapJniReference(jobject jobj);

jobject PgsRecallClient_getJniReference(const PgsRecallClient* pgs_recall_client);

PgsRecallClient* PgsRecallClient_implementInterface(PgsRecallClient_requestRecallAccessCallback pgs_recall_client_request_recall_access_callback);

/// Destroys pgs_recall_client and all internal resources related to it. This function should be
/// called when pgs_recall_client is no longer needed.
/// @param pgs_recall_client An object to be destroyed.
void PgsRecallClient_destroy(const PgsRecallClient* pgs_recall_client);

GniTask* PgsRecallClient_requestRecallAccess(const PgsRecallClient* pgs_recall_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsRecallClient_requestRecallAccess.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsRecallAccess_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsRecallClient_requestRecallAccess.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsRecallClient_requestRecallAccess
/// @see PgsRecallAccess_destroy
GniTaskErrorCode PgsRecallClient_requestRecallAccess_getResult(const GniTask* task, PgsRecallAccess** out_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT_H_
