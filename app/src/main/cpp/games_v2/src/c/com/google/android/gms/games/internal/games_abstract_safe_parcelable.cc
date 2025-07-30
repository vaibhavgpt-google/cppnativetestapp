#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.h"

#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"

GamesAbstractSafeParcelable* GamesAbstractSafeParcelable_wrapJniReference(jobject jobj) {
  return reinterpret_cast<GamesAbstractSafeParcelable*>(new ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(jobj));
}

jobject GamesAbstractSafeParcelable_getJniReference(const GamesAbstractSafeParcelable* games_abstract_safe_parcelable) {
  return reinterpret_cast<const ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable*>(games_abstract_safe_parcelable)->GetImpl();
}

void GamesAbstractSafeParcelable_destroy(const GamesAbstractSafeParcelable* games_abstract_safe_parcelable) {
  ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable::destroy(reinterpret_cast<const ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable*>(games_abstract_safe_parcelable));
}
