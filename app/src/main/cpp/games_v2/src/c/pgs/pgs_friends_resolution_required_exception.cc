#include "pgs/pgs_friends_resolution_required_exception.h"

#include "com/google/android/gms/games/friends_resolution_required_exception.hpp"

PgsFriendsResolutionRequiredException* PgsFriendsResolutionRequiredException_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsFriendsResolutionRequiredException*>(new ::com::google::android::gms::games::FriendsResolutionRequiredException(jobj));
}

jobject PgsFriendsResolutionRequiredException_getJniReference(const PgsFriendsResolutionRequiredException* pgs_friends_resolution_required_exception) {
  return reinterpret_cast<const ::com::google::android::gms::games::FriendsResolutionRequiredException*>(pgs_friends_resolution_required_exception)->GetImpl();
}

void PgsFriendsResolutionRequiredException_destroy(const PgsFriendsResolutionRequiredException* pgs_friends_resolution_required_exception) {
  ::com::google::android::gms::games::FriendsResolutionRequiredException::destroy(reinterpret_cast<const ::com::google::android::gms::games::FriendsResolutionRequiredException*>(pgs_friends_resolution_required_exception));
}
