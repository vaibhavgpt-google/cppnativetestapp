#include "com/google/android/gms/common/internal/safeparcel/abstract_safe_parcelable.h"

#include "com/google/android/gms/common/internal/safeparcel/abstract_safe_parcelable.hpp"

AbstractSafeParcelable* AbstractSafeParcelable_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AbstractSafeParcelable*>(new ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable(jobj));
}

jobject AbstractSafeParcelable_getJniReference(const AbstractSafeParcelable* abstract_safe_parcelable) {
  return reinterpret_cast<const ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable*>(abstract_safe_parcelable)->GetImpl();
}

void AbstractSafeParcelable_destroy(const AbstractSafeParcelable* abstract_safe_parcelable) {
  ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable::destroy(reinterpret_cast<const ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable*>(abstract_safe_parcelable));
}
