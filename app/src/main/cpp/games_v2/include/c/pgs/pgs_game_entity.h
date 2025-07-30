#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "java/lang/string.h"
#include "pgs/pgs_game.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGameEntity_ PgsGameEntity;

/// Wraps a JNI reference with PgsGameEntity object.
/// @param jobj A JNI reference to be wrapped with PgsGameEntity object.
/// @see PgsGameEntity_destroy
PgsGameEntity* PgsGameEntity_wrapJniReference(jobject jobj);

jobject PgsGameEntity_getJniReference(const PgsGameEntity* pgs_game_entity);

/// Destroys pgs_game_entity and all internal resources related to it. This function should be
/// called when pgs_game_entity is no longer needed.
/// @param pgs_game_entity An object to be destroyed.
void PgsGameEntity_destroy(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getApplicationId(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getDisplayName(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getPrimaryCategory(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getSecondaryCategory(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getDescription(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getDeveloperName(const PgsGameEntity* pgs_game_entity);

Uri* PgsGameEntity_getIconImageUri(const PgsGameEntity* pgs_game_entity);

Uri* PgsGameEntity_getHiResImageUri(const PgsGameEntity* pgs_game_entity);

Uri* PgsGameEntity_getFeaturedImageUri(const PgsGameEntity* pgs_game_entity);

int32_t PgsGameEntity_getAchievementTotalCount(const PgsGameEntity* pgs_game_entity);

int32_t PgsGameEntity_getLeaderboardCount(const PgsGameEntity* pgs_game_entity);

bool PgsGameEntity_areSnapshotsEnabled(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_getThemeColor(const PgsGameEntity* pgs_game_entity);

bool PgsGameEntity_hasGamepadSupport(const PgsGameEntity* pgs_game_entity);

PgsGame* PgsGameEntity_freeze(const PgsGameEntity* pgs_game_entity);

bool PgsGameEntity_isDataValid(const PgsGameEntity* pgs_game_entity);

int32_t PgsGameEntity_hashCode(const PgsGameEntity* pgs_game_entity);

String* PgsGameEntity_toString(const PgsGameEntity* pgs_game_entity);

void PgsGameEntity_writeToParcel(const PgsGameEntity* pgs_game_entity, Parcel* dest, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY_H_
