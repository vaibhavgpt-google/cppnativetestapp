#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsFriendsResolutionRequiredException_ PgsFriendsResolutionRequiredException;

/// Wraps a JNI reference with PgsFriendsResolutionRequiredException object.
/// @param jobj A JNI reference to be wrapped with PgsFriendsResolutionRequiredException object.
/// @see PgsFriendsResolutionRequiredException_destroy
PgsFriendsResolutionRequiredException* PgsFriendsResolutionRequiredException_wrapJniReference(jobject jobj);

jobject PgsFriendsResolutionRequiredException_getJniReference(const PgsFriendsResolutionRequiredException* pgs_friends_resolution_required_exception);

/// Destroys pgs_friends_resolution_required_exception and all internal resources related to it. This function should be
/// called when pgs_friends_resolution_required_exception is no longer needed.
/// @param pgs_friends_resolution_required_exception An object to be destroyed.
void PgsFriendsResolutionRequiredException_destroy(const PgsFriendsResolutionRequiredException* pgs_friends_resolution_required_exception);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION_H_
