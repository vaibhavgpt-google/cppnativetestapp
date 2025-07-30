#include "pgs/pgs_player_relationship_info.h"

#include "com/google/android/gms/games/player_relationship_info.hpp"

PgsPlayerRelationshipInfo* PgsPlayerRelationshipInfo_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerRelationshipInfo*>(new ::com::google::android::gms::games::PlayerRelationshipInfo(jobj));
}

jobject PgsPlayerRelationshipInfo_getJniReference(const PgsPlayerRelationshipInfo* pgs_player_relationship_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerRelationshipInfo*>(pgs_player_relationship_info)->GetImpl();
}

PgsPlayerRelationshipInfo* PgsPlayerRelationshipInfo_implementInterface(PgsPlayerRelationshipInfo_getFriendStatusCallback pgs_player_relationship_info_get_friend_status_callback) {
  return reinterpret_cast<PgsPlayerRelationshipInfo*>(::com::google::android::gms::games::PlayerRelationshipInfo::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::PlayerRelationshipInfo::getFriendStatusCallback>(pgs_player_relationship_info_get_friend_status_callback)));
}

void PgsPlayerRelationshipInfo_destroy(const PgsPlayerRelationshipInfo* pgs_player_relationship_info) {
  ::com::google::android::gms::games::PlayerRelationshipInfo::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerRelationshipInfo*>(pgs_player_relationship_info));
}

int32_t PgsPlayerRelationshipInfo_getFriendStatus(const PgsPlayerRelationshipInfo* pgs_player_relationship_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerRelationshipInfo*>(pgs_player_relationship_info)->getFriendStatus();
}
