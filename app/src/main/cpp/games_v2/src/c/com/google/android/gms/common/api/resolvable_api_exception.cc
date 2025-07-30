#include "com/google/android/gms/common/api/resolvable_api_exception.h"

#include "com/google/android/gms/common/api/resolvable_api_exception.hpp"

ResolvableApiException* ResolvableApiException_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ResolvableApiException*>(new ::com::google::android::gms::common::api::ResolvableApiException(jobj));
}

jobject ResolvableApiException_getJniReference(const ResolvableApiException* resolvable_api_exception) {
  return reinterpret_cast<const ::com::google::android::gms::common::api::ResolvableApiException*>(resolvable_api_exception)->GetImpl();
}

void ResolvableApiException_destroy(const ResolvableApiException* resolvable_api_exception) {
  ::com::google::android::gms::common::api::ResolvableApiException::destroy(reinterpret_cast<const ::com::google::android::gms::common::api::ResolvableApiException*>(resolvable_api_exception));
}
