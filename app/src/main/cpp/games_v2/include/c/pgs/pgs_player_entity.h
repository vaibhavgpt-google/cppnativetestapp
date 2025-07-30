#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "java/lang/string.h"
#include "pgs/pgs_current_player_info.h"
#include "pgs/pgs_player.h"
#include "pgs/pgs_player_level_info.h"
#include "pgs/pgs_player_relationship_info.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerEntity_ PgsPlayerEntity;

/// Wraps a JNI reference with PgsPlayerEntity object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerEntity object.
/// @see PgsPlayerEntity_destroy
PgsPlayerEntity* PgsPlayerEntity_wrapJniReference(jobject jobj);

jobject PgsPlayerEntity_getJniReference(const PgsPlayerEntity* pgs_player_entity);

/// Destroys pgs_player_entity and all internal resources related to it. This function should be
/// called when pgs_player_entity is no longer needed.
/// @param pgs_player_entity An object to be destroyed.
void PgsPlayerEntity_destroy(const PgsPlayerEntity* pgs_player_entity);

String* PgsPlayerEntity_getPlayerId(const PgsPlayerEntity* pgs_player_entity);

String* PgsPlayerEntity_getDisplayName(const PgsPlayerEntity* pgs_player_entity);

bool PgsPlayerEntity_hasIconImage(const PgsPlayerEntity* pgs_player_entity);

Uri* PgsPlayerEntity_getIconImageUri(const PgsPlayerEntity* pgs_player_entity);

bool PgsPlayerEntity_hasHiResImage(const PgsPlayerEntity* pgs_player_entity);

Uri* PgsPlayerEntity_getHiResImageUri(const PgsPlayerEntity* pgs_player_entity);

int64_t PgsPlayerEntity_getRetrievedTimestamp(const PgsPlayerEntity* pgs_player_entity);

int64_t PgsPlayerEntity_getLastPlayedWithTimestamp(const PgsPlayerEntity* pgs_player_entity);

String* PgsPlayerEntity_getTitle(const PgsPlayerEntity* pgs_player_entity);

PgsPlayerLevelInfo* PgsPlayerEntity_getLevelInfo(const PgsPlayerEntity* pgs_player_entity);

Uri* PgsPlayerEntity_getBannerImageLandscapeUri(const PgsPlayerEntity* pgs_player_entity);

Uri* PgsPlayerEntity_getBannerImagePortraitUri(const PgsPlayerEntity* pgs_player_entity);

PgsPlayerRelationshipInfo* PgsPlayerEntity_getRelationshipInfo(const PgsPlayerEntity* pgs_player_entity);

PgsCurrentPlayerInfo* PgsPlayerEntity_getCurrentPlayerInfo(const PgsPlayerEntity* pgs_player_entity);

PgsPlayer* PgsPlayerEntity_freeze(const PgsPlayerEntity* pgs_player_entity);

bool PgsPlayerEntity_isDataValid(const PgsPlayerEntity* pgs_player_entity);

int32_t PgsPlayerEntity_hashCode(const PgsPlayerEntity* pgs_player_entity);

String* PgsPlayerEntity_toString(const PgsPlayerEntity* pgs_player_entity);

void PgsPlayerEntity_writeToParcel(const PgsPlayerEntity* pgs_player_entity, Parcel* dest, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY_H_
