#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPlayerRelationshipInfo_ PgsPlayerRelationshipInfo;

typedef int32_t (*PgsPlayerRelationshipInfo_getFriendStatusCallback)();

/// Wraps a JNI reference with PgsPlayerRelationshipInfo object.
/// @param jobj A JNI reference to be wrapped with PgsPlayerRelationshipInfo object.
/// @see PgsPlayerRelationshipInfo_destroy
PgsPlayerRelationshipInfo* PgsPlayerRelationshipInfo_wrapJniReference(jobject jobj);

jobject PgsPlayerRelationshipInfo_getJniReference(const PgsPlayerRelationshipInfo* pgs_player_relationship_info);

PgsPlayerRelationshipInfo* PgsPlayerRelationshipInfo_implementInterface(PgsPlayerRelationshipInfo_getFriendStatusCallback pgs_player_relationship_info_get_friend_status_callback);

/// Destroys pgs_player_relationship_info and all internal resources related to it. This function should be
/// called when pgs_player_relationship_info is no longer needed.
/// @param pgs_player_relationship_info An object to be destroyed.
void PgsPlayerRelationshipInfo_destroy(const PgsPlayerRelationshipInfo* pgs_player_relationship_info);

int32_t PgsPlayerRelationshipInfo_getFriendStatus(const PgsPlayerRelationshipInfo* pgs_player_relationship_info);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO_H_
