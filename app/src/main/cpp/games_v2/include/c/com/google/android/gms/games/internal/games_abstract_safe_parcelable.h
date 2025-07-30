#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESABSTRACTSAFEPARCELABLE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESABSTRACTSAFEPARCELABLE_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamesAbstractSafeParcelable_ GamesAbstractSafeParcelable;

/// Wraps a JNI reference with GamesAbstractSafeParcelable object.
/// @param jobj A JNI reference to be wrapped with GamesAbstractSafeParcelable object.
/// @see GamesAbstractSafeParcelable_destroy
GamesAbstractSafeParcelable* GamesAbstractSafeParcelable_wrapJniReference(jobject jobj);

jobject GamesAbstractSafeParcelable_getJniReference(const GamesAbstractSafeParcelable* games_abstract_safe_parcelable);

/// Destroys games_abstract_safe_parcelable and all internal resources related to it. This function should be
/// called when games_abstract_safe_parcelable is no longer needed.
/// @param games_abstract_safe_parcelable An object to be destroyed.
void GamesAbstractSafeParcelable_destroy(const GamesAbstractSafeParcelable* games_abstract_safe_parcelable);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESABSTRACTSAFEPARCELABLE_H_
