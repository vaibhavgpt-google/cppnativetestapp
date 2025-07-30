#include "com/google/android/gms/games/gamessignin/auth_scope.h"

#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"

AuthScope* AuthScope_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AuthScope*>(new ::com::google::android::gms::games::gamessignin::AuthScope(jobj));
}

jobject AuthScope_getJniReference(const AuthScope* auth_scope) {
  return reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthScope*>(auth_scope)->GetImpl();
}

void AuthScope_destroy(const AuthScope* auth_scope) {
  ::com::google::android::gms::games::gamessignin::AuthScope::destroy(reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthScope*>(auth_scope));
}

AuthScope* AuthScope_values() {
  return reinterpret_cast<AuthScope*>(&::com::google::android::gms::games::gamessignin::AuthScope::values());
}

AuthScope* AuthScope_valueOf(String* name) {
  return reinterpret_cast<AuthScope*>(&::com::google::android::gms::games::gamessignin::AuthScope::valueOf(*reinterpret_cast<const ::java::lang::String*>(name)));
}

String* AuthScope_getValue(const AuthScope* auth_scope) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthScope*>(auth_scope)->getValue());
}
