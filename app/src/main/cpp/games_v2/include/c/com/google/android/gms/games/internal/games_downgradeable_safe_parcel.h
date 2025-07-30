#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamesDowngradeableSafeParcel_ GamesDowngradeableSafeParcel;

/// Wraps a JNI reference with GamesDowngradeableSafeParcel object.
/// @param jobj A JNI reference to be wrapped with GamesDowngradeableSafeParcel object.
/// @see GamesDowngradeableSafeParcel_destroy
GamesDowngradeableSafeParcel* GamesDowngradeableSafeParcel_wrapJniReference(jobject jobj);

jobject GamesDowngradeableSafeParcel_getJniReference(const GamesDowngradeableSafeParcel* games_downgradeable_safe_parcel);

/// Destroys games_downgradeable_safe_parcel and all internal resources related to it. This function should be
/// called when games_downgradeable_safe_parcel is no longer needed.
/// @param games_downgradeable_safe_parcel An object to be destroyed.
void GamesDowngradeableSafeParcel_destroy(const GamesDowngradeableSafeParcel* games_downgradeable_safe_parcel);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL_H_
