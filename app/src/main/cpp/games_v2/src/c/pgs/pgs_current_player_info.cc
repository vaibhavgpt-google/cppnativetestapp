#include "pgs/pgs_current_player_info.h"

#include "com/google/android/gms/games/current_player_info.hpp"

PgsCurrentPlayerInfo* PgsCurrentPlayerInfo_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsCurrentPlayerInfo*>(new ::com::google::android::gms::games::CurrentPlayerInfo(jobj));
}

jobject PgsCurrentPlayerInfo_getJniReference(const PgsCurrentPlayerInfo* pgs_current_player_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::CurrentPlayerInfo*>(pgs_current_player_info)->GetImpl();
}

PgsCurrentPlayerInfo* PgsCurrentPlayerInfo_implementInterface(PgsCurrentPlayerInfo_getFriendsListVisibilityStatusCallback pgs_current_player_info_get_friends_list_visibility_status_callback) {
  return reinterpret_cast<PgsCurrentPlayerInfo*>(::com::google::android::gms::games::CurrentPlayerInfo::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::CurrentPlayerInfo::getFriendsListVisibilityStatusCallback>(pgs_current_player_info_get_friends_list_visibility_status_callback)));
}

void PgsCurrentPlayerInfo_destroy(const PgsCurrentPlayerInfo* pgs_current_player_info) {
  ::com::google::android::gms::games::CurrentPlayerInfo::destroy(reinterpret_cast<const ::com::google::android::gms::games::CurrentPlayerInfo*>(pgs_current_player_info));
}

int32_t PgsCurrentPlayerInfo_getFriendsListVisibilityStatus(const PgsCurrentPlayerInfo* pgs_current_player_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::CurrentPlayerInfo*>(pgs_current_player_info)->getFriendsListVisibilityStatus();
}
