#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO_H_

#include <cstdint>
#include <jni.h>
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "pgs/pgs_player_level.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerLevelInfo_ PgsPlayerLevelInfo;

/// Wraps a JNI reference with PgsPlayerLevelInfo object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerLevelInfo object.
/// @see PgsPlayerLevelInfo_destroy
PgsPlayerLevelInfo* PgsPlayerLevelInfo_wrapJniReference(jobject jobj);

jobject PgsPlayerLevelInfo_getJniReference(const PgsPlayerLevelInfo* pgs_player_level_info);

/// Destroys pgs_player_level_info and all internal resources related to it. This function should be
/// called when pgs_player_level_info is no longer needed.
/// @param pgs_player_level_info An object to be destroyed.
void PgsPlayerLevelInfo_destroy(const PgsPlayerLevelInfo* pgs_player_level_info);

int64_t PgsPlayerLevelInfo_getCurrentXpTotal(const PgsPlayerLevelInfo* pgs_player_level_info);

int64_t PgsPlayerLevelInfo_getLastLevelUpTimestamp(const PgsPlayerLevelInfo* pgs_player_level_info);

PgsPlayerLevel* PgsPlayerLevelInfo_getCurrentLevel(const PgsPlayerLevelInfo* pgs_player_level_info);

PgsPlayerLevel* PgsPlayerLevelInfo_getNextLevel(const PgsPlayerLevelInfo* pgs_player_level_info);

bool PgsPlayerLevelInfo_isMaxLevel(const PgsPlayerLevelInfo* pgs_player_level_info);

int32_t PgsPlayerLevelInfo_hashCode(const PgsPlayerLevelInfo* pgs_player_level_info);

void PgsPlayerLevelInfo_writeToParcel(const PgsPlayerLevelInfo* pgs_player_level_info, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO_H_
