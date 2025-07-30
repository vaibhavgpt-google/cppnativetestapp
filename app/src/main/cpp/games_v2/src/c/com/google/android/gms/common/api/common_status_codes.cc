#include "com/google/android/gms/common/api/common_status_codes.h"

#include "com/google/android/gms/common/api/common_status_codes.hpp"

CommonStatusCodes* CommonStatusCodes_wrapJniReference(jobject jobj) {
  return reinterpret_cast<CommonStatusCodes*>(new ::com::google::android::gms::common::api::CommonStatusCodes(jobj));
}

jobject CommonStatusCodes_getJniReference(const CommonStatusCodes* common_status_codes) {
  return reinterpret_cast<const ::com::google::android::gms::common::api::CommonStatusCodes*>(common_status_codes)->GetImpl();
}

void CommonStatusCodes_destroy(const CommonStatusCodes* common_status_codes) {
  ::com::google::android::gms::common::api::CommonStatusCodes::destroy(reinterpret_cast<const ::com::google::android::gms::common::api::CommonStatusCodes*>(common_status_codes));
}
