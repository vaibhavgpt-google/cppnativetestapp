#include "com/google/android/gms/games/gamessignin/auth_response.h"

#include "com/google/android/gms/games/gamessignin/auth_response.hpp"

AuthResponse* AuthResponse_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AuthResponse*>(new ::com::google::android::gms::games::gamessignin::AuthResponse(jobj));
}

jobject AuthResponse_getJniReference(const AuthResponse* auth_response) {
  return reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->GetImpl();
}

AuthResponse* AuthResponse_construct(String* auth_code, List_AuthScope* granted_scopes) {
  return reinterpret_cast<AuthResponse*>(new ::com::google::android::gms::games::gamessignin::AuthResponse(*reinterpret_cast<const ::java::lang::String*>(auth_code), *reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(granted_scopes)));
}

void AuthResponse_destroy(const AuthResponse* auth_response) {
  ::com::google::android::gms::games::gamessignin::AuthResponse::destroy(reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response));
}

List_AuthScope* AuthResponse_getGrantedScopes(const AuthResponse* auth_response) {
  return reinterpret_cast<List_AuthScope*>(&reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->getGrantedScopes());
}

String* AuthResponse_getAuthCode(const AuthResponse* auth_response) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->getAuthCode());
}

bool AuthResponse_equals(const AuthResponse* auth_response, Object* o) {
  return reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->equals(*reinterpret_cast<const ::java::lang::Object*>(o));
}

int32_t AuthResponse_hashCode(const AuthResponse* auth_response) {
  return reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->hashCode();
}

String* AuthResponse_toString(const AuthResponse* auth_response) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthResponse*>(auth_response)->toString());
}
