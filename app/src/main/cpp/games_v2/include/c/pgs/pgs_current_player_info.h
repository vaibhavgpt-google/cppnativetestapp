#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsCurrentPlayerInfo_ PgsCurrentPlayerInfo;

typedef int32_t (*PgsCurrentPlayerInfo_getFriendsListVisibilityStatusCallback)();

/// Wraps a JNI reference with PgsCurrentPlayerInfo object.
/// @param jobj A JNI reference to be wrapped with PgsCurrentPlayerInfo object.
/// @see PgsCurrentPlayerInfo_destroy
PgsCurrentPlayerInfo* PgsCurrentPlayerInfo_wrapJniReference(jobject jobj);

jobject PgsCurrentPlayerInfo_getJniReference(const PgsCurrentPlayerInfo* pgs_current_player_info);

PgsCurrentPlayerInfo* PgsCurrentPlayerInfo_implementInterface(PgsCurrentPlayerInfo_getFriendsListVisibilityStatusCallback pgs_current_player_info_get_friends_list_visibility_status_callback);

/// Destroys pgs_current_player_info and all internal resources related to it. This function should be
/// called when pgs_current_player_info is no longer needed.
/// @param pgs_current_player_info An object to be destroyed.
void PgsCurrentPlayerInfo_destroy(const PgsCurrentPlayerInfo* pgs_current_player_info);

int32_t PgsCurrentPlayerInfo_getFriendsListVisibilityStatus(const PgsCurrentPlayerInfo* pgs_current_player_info);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO_H_
