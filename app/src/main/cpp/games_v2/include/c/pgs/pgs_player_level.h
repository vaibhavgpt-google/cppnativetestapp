#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerLevel_ PgsPlayerLevel;

/// Wraps a JNI reference with PgsPlayerLevel object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerLevel object.
/// @see PgsPlayerLevel_destroy
PgsPlayerLevel* PgsPlayerLevel_wrapJniReference(jobject jobj);

jobject PgsPlayerLevel_getJniReference(const PgsPlayerLevel* pgs_player_level);

/// Destroys pgs_player_level and all internal resources related to it. This function should be
/// called when pgs_player_level is no longer needed.
/// @param pgs_player_level An object to be destroyed.
void PgsPlayerLevel_destroy(const PgsPlayerLevel* pgs_player_level);

int32_t PgsPlayerLevel_getLevelNumber(const PgsPlayerLevel* pgs_player_level);

int64_t PgsPlayerLevel_getMinXp(const PgsPlayerLevel* pgs_player_level);

int64_t PgsPlayerLevel_getMaxXp(const PgsPlayerLevel* pgs_player_level);

int32_t PgsPlayerLevel_hashCode(const PgsPlayerLevel* pgs_player_level);

String* PgsPlayerLevel_toString(const PgsPlayerLevel* pgs_player_level);

void PgsPlayerLevel_writeToParcel(const PgsPlayerLevel* pgs_player_level, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL_H_
