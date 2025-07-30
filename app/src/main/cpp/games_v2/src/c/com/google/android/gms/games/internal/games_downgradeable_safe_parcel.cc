#include "com/google/android/gms/games/internal/games_downgradeable_safe_parcel.h"

#include "com/google/android/gms/games/internal/games_downgradeable_safe_parcel.hpp"

GamesDowngradeableSafeParcel* GamesDowngradeableSafeParcel_wrapJniReference(jobject jobj) {
  return reinterpret_cast<GamesDowngradeableSafeParcel*>(new ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel(jobj));
}

jobject GamesDowngradeableSafeParcel_getJniReference(const GamesDowngradeableSafeParcel* games_downgradeable_safe_parcel) {
  return reinterpret_cast<const ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel*>(games_downgradeable_safe_parcel)->GetImpl();
}

void GamesDowngradeableSafeParcel_destroy(const GamesDowngradeableSafeParcel* games_downgradeable_safe_parcel) {
  ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel::destroy(reinterpret_cast<const ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel*>(games_downgradeable_safe_parcel));
}
