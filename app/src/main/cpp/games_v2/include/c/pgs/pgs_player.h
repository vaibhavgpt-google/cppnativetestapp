#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"
#include "pgs/pgs_current_player_info.h"
#include "pgs/pgs_player_level_info.h"
#include "pgs/pgs_player_relationship_info.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayer_ PgsPlayer;

typedef String* (*PgsPlayer_getPlayerIdCallback)();

typedef String* (*PgsPlayer_getDisplayNameCallback)();

typedef bool (*PgsPlayer_hasIconImageCallback)();

typedef Uri* (*PgsPlayer_getIconImageUriCallback)();

typedef bool (*PgsPlayer_hasHiResImageCallback)();

typedef Uri* (*PgsPlayer_getHiResImageUriCallback)();

typedef int64_t (*PgsPlayer_getRetrievedTimestampCallback)();

typedef String* (*PgsPlayer_getTitleCallback)();

typedef PgsPlayerLevelInfo* (*PgsPlayer_getLevelInfoCallback)();

typedef Uri* (*PgsPlayer_getBannerImageLandscapeUriCallback)();

typedef Uri* (*PgsPlayer_getBannerImagePortraitUriCallback)();

typedef PgsPlayerRelationshipInfo* (*PgsPlayer_getRelationshipInfoCallback)();

typedef PgsCurrentPlayerInfo* (*PgsPlayer_getCurrentPlayerInfoCallback)();

/// Wraps a JNI reference with PgsPlayer object.
/// @param jobj A JNI reference to be wrapped with PgsPlayer object.
/// @see PgsPlayer_destroy
PgsPlayer* PgsPlayer_wrapJniReference(jobject jobj);

jobject PgsPlayer_getJniReference(const PgsPlayer* pgs_player);

PgsPlayer* PgsPlayer_implementInterface(PgsPlayer_getPlayerIdCallback pgs_player_get_player_id_callback, PgsPlayer_getDisplayNameCallback pgs_player_get_display_name_callback, PgsPlayer_hasIconImageCallback pgs_player_has_icon_image_callback, PgsPlayer_getIconImageUriCallback pgs_player_get_icon_image_uri_callback, PgsPlayer_hasHiResImageCallback pgs_player_has_hi_res_image_callback, PgsPlayer_getHiResImageUriCallback pgs_player_get_hi_res_image_uri_callback, PgsPlayer_getRetrievedTimestampCallback pgs_player_get_retrieved_timestamp_callback, PgsPlayer_getTitleCallback pgs_player_get_title_callback, PgsPlayer_getLevelInfoCallback pgs_player_get_level_info_callback, PgsPlayer_getBannerImageLandscapeUriCallback pgs_player_get_banner_image_landscape_uri_callback, PgsPlayer_getBannerImagePortraitUriCallback pgs_player_get_banner_image_portrait_uri_callback, PgsPlayer_getRelationshipInfoCallback pgs_player_get_relationship_info_callback, PgsPlayer_getCurrentPlayerInfoCallback pgs_player_get_current_player_info_callback);

/// Destroys pgs_player and all internal resources related to it. This function should be
/// called when pgs_player is no longer needed.
/// @param pgs_player An object to be destroyed.
void PgsPlayer_destroy(const PgsPlayer* pgs_player);

String* PgsPlayer_getPlayerId(const PgsPlayer* pgs_player);

String* PgsPlayer_getDisplayName(const PgsPlayer* pgs_player);

bool PgsPlayer_hasIconImage(const PgsPlayer* pgs_player);

Uri* PgsPlayer_getIconImageUri(const PgsPlayer* pgs_player);

bool PgsPlayer_hasHiResImage(const PgsPlayer* pgs_player);

Uri* PgsPlayer_getHiResImageUri(const PgsPlayer* pgs_player);

int64_t PgsPlayer_getRetrievedTimestamp(const PgsPlayer* pgs_player);

String* PgsPlayer_getTitle(const PgsPlayer* pgs_player);

PgsPlayerLevelInfo* PgsPlayer_getLevelInfo(const PgsPlayer* pgs_player);

Uri* PgsPlayer_getBannerImageLandscapeUri(const PgsPlayer* pgs_player);

Uri* PgsPlayer_getBannerImagePortraitUri(const PgsPlayer* pgs_player);

PgsPlayerRelationshipInfo* PgsPlayer_getRelationshipInfo(const PgsPlayer* pgs_player);

PgsCurrentPlayerInfo* PgsPlayer_getCurrentPlayerInfo(const PgsPlayer* pgs_player);

int64_t PgsPlayer_get_CURRENT_XP_UNKNOWN();

int64_t PgsPlayer_get_TIMESTAMP_UNKNOWN();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER_H_
