#include "com/google/android/gms/common/data/freezable.h"

#include "com/google/android/gms/common/data/freezable.hpp"

Freezable* Freezable_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Freezable*>(new ::com::google::android::gms::common::data::Freezable(jobj));
}

jobject Freezable_getJniReference(const Freezable* freezable) {
  return reinterpret_cast<const ::com::google::android::gms::common::data::Freezable*>(freezable)->GetImpl();
}

void Freezable_destroy(const Freezable* freezable) {
  ::com::google::android::gms::common::data::Freezable::destroy(reinterpret_cast<const ::com::google::android::gms::common::data::Freezable*>(freezable));
}
