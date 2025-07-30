#include "pgs/pgs_recall_client.h"

#include "com/google/android/gms/games/recall_client.hpp"
#include "gni/gni_task_internal.h"

PgsRecallClient* PgsRecallClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsRecallClient*>(new ::com::google::android::gms::games::RecallClient(jobj));
}

jobject PgsRecallClient_getJniReference(const PgsRecallClient* pgs_recall_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::RecallClient*>(pgs_recall_client)->GetImpl();
}

PgsRecallClient* PgsRecallClient_implementInterface(PgsRecallClient_requestRecallAccessCallback pgs_recall_client_request_recall_access_callback) {
  return reinterpret_cast<PgsRecallClient*>(::com::google::android::gms::games::RecallClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::RecallClient::requestRecallAccessCallback>(pgs_recall_client_request_recall_access_callback)));
}

void PgsRecallClient_destroy(const PgsRecallClient* pgs_recall_client) {
  ::com::google::android::gms::games::RecallClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::RecallClient*>(pgs_recall_client));
}

GniTask* PgsRecallClient_requestRecallAccess(const PgsRecallClient* pgs_recall_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::RecallClient*>(pgs_recall_client)->requestRecallAccess());
}

GniTaskErrorCode PgsRecallClient_requestRecallAccess_getResult(
    const GniTask* task, PgsRecallAccess** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsRecallAccess_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}
