#include "java/util/list.h"

#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "java/util/list.hpp"

List_AuthScope* List_AuthScope_wrapJniReference(jobject jobj) {
  return reinterpret_cast<List_AuthScope*>(new ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>(jobj));
}

jobject List_AuthScope_getJniReference(const List_AuthScope* list_auth_scope) {
  return reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(list_auth_scope)->GetImpl();
}

void List_AuthScope_destroy(const List_AuthScope* list_auth_scope) {
  ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>::destroy(reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(list_auth_scope));
}

bool List_AuthScope_add(const List_AuthScope* list_auth_scope, AuthScope* e) {
  return reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(list_auth_scope)->add(*reinterpret_cast<const ::com::google::android::gms::games::gamessignin::AuthScope*>(e));
}

AuthScope* List_AuthScope_get(const List_AuthScope* list_auth_scope, int32_t index) {
  return reinterpret_cast<AuthScope*>(&reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(list_auth_scope)->get(index));
}

int32_t List_AuthScope_size(const List_AuthScope* list_auth_scope) {
  return reinterpret_cast<const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*>(list_auth_scope)->size();
}
