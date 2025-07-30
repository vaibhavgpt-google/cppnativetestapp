#include "pgs/pgs_events_client.h"

#include "com/google/android/gms/games/events_client.hpp"
#include "gni/gni_task_internal.h"

PgsEventsClient* PgsEventsClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsEventsClient*>(new ::com::google::android::gms::games::EventsClient(jobj));
}

jobject PgsEventsClient_getJniReference(const PgsEventsClient* pgs_events_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::EventsClient*>(pgs_events_client)->GetImpl();
}

PgsEventsClient* PgsEventsClient_implementInterface(PgsEventsClient_loadCallback pgs_events_client_load_callback, PgsEventsClient_loadByIdsCallback pgs_events_client_load_by_ids_callback, PgsEventsClient_incrementCallback pgs_events_client_increment_callback) {
  return reinterpret_cast<PgsEventsClient*>(::com::google::android::gms::games::EventsClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::EventsClient::loadCallback>(pgs_events_client_load_callback), reinterpret_cast<::com::google::android::gms::games::EventsClient::loadByIdsCallback>(pgs_events_client_load_by_ids_callback), reinterpret_cast<::com::google::android::gms::games::EventsClient::incrementCallback>(pgs_events_client_increment_callback)));
}

void PgsEventsClient_destroy(const PgsEventsClient* pgs_events_client) {
  ::com::google::android::gms::games::EventsClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::EventsClient*>(pgs_events_client));
}

GniTask* PgsEventsClient_load(const PgsEventsClient* pgs_events_client, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::EventsClient*>(pgs_events_client)->load(force_reload));
}

GniTaskErrorCode PgsEventsClient_load_getResult(
    const GniTask* task, PgsAnnotatedData_EventBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_EventBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsEventsClient_loadByIds(const PgsEventsClient* pgs_events_client, bool force_reload, String* event_ids) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::EventsClient*>(pgs_events_client)->loadByIds(force_reload, *reinterpret_cast<const ::java::lang::String*>(event_ids)));
}

GniTaskErrorCode PgsEventsClient_loadByIds_getResult(
    const GniTask* task, PgsAnnotatedData_EventBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_EventBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

void PgsEventsClient_increment(const PgsEventsClient* pgs_events_client, String* event_id, int32_t increment_amount) {
  reinterpret_cast<const ::com::google::android::gms::games::EventsClient*>(pgs_events_client)->increment(*reinterpret_cast<const ::java::lang::String*>(event_id), increment_amount);
}
