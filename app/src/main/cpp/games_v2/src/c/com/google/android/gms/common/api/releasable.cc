#include "com/google/android/gms/common/api/releasable.h"

#include "com/google/android/gms/common/api/releasable.hpp"

Releasable* Releasable_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Releasable*>(new ::com::google::android::gms::common::api::Releasable(jobj));
}

jobject Releasable_getJniReference(const Releasable* releasable) {
  return reinterpret_cast<const ::com::google::android::gms::common::api::Releasable*>(releasable)->GetImpl();
}

void Releasable_destroy(const Releasable* releasable) {
  ::com::google::android::gms::common::api::Releasable::destroy(reinterpret_cast<const ::com::google::android::gms::common::api::Releasable*>(releasable));
}
