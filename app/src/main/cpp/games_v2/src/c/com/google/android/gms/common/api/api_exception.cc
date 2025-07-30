#include "com/google/android/gms/common/api/api_exception.h"

#include "com/google/android/gms/common/api/api_exception.hpp"

ApiException* ApiException_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ApiException*>(new ::com::google::android::gms::common::api::ApiException(jobj));
}

jobject ApiException_getJniReference(const ApiException* api_exception) {
  return reinterpret_cast<const ::com::google::android::gms::common::api::ApiException*>(api_exception)->GetImpl();
}

void ApiException_destroy(const ApiException* api_exception) {
  ::com::google::android::gms::common::api::ApiException::destroy(reinterpret_cast<const ::com::google::android::gms::common::api::ApiException*>(api_exception));
}
