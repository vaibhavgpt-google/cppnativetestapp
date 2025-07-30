#include "pgs/pgs_authentication_result.h"

#include "com/google/android/gms/games/authentication_result.hpp"

PgsAuthenticationResult* PgsAuthenticationResult_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAuthenticationResult*>(new ::com::google::android::gms::games::AuthenticationResult(jobj));
}

jobject PgsAuthenticationResult_getJniReference(const PgsAuthenticationResult* pgs_authentication_result) {
  return reinterpret_cast<const ::com::google::android::gms::games::AuthenticationResult*>(pgs_authentication_result)->GetImpl();
}

void PgsAuthenticationResult_destroy(const PgsAuthenticationResult* pgs_authentication_result) {
  ::com::google::android::gms::games::AuthenticationResult::destroy(reinterpret_cast<const ::com::google::android::gms::games::AuthenticationResult*>(pgs_authentication_result));
}

bool PgsAuthenticationResult_isAuthenticated(const PgsAuthenticationResult* pgs_authentication_result) {
  return reinterpret_cast<const ::com::google::android::gms::games::AuthenticationResult*>(pgs_authentication_result)->isAuthenticated();
}
