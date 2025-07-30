#include "pgs/pgs_player_level_info.h"

#include "com/google/android/gms/games/player_level_info.hpp"

PgsPlayerLevelInfo* PgsPlayerLevelInfo_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerLevelInfo*>(new ::com::google::android::gms::games::PlayerLevelInfo(jobj));
}

jobject PgsPlayerLevelInfo_getJniReference(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->GetImpl();
}

void PgsPlayerLevelInfo_destroy(const PgsPlayerLevelInfo* pgs_player_level_info) {
  ::com::google::android::gms::games::PlayerLevelInfo::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info));
}

int64_t PgsPlayerLevelInfo_getCurrentXpTotal(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->getCurrentXpTotal();
}

int64_t PgsPlayerLevelInfo_getLastLevelUpTimestamp(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->getLastLevelUpTimestamp();
}

PgsPlayerLevel* PgsPlayerLevelInfo_getCurrentLevel(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<PgsPlayerLevel*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->getCurrentLevel());
}

PgsPlayerLevel* PgsPlayerLevelInfo_getNextLevel(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<PgsPlayerLevel*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->getNextLevel());
}

bool PgsPlayerLevelInfo_isMaxLevel(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->isMaxLevel();
}

int32_t PgsPlayerLevelInfo_hashCode(const PgsPlayerLevelInfo* pgs_player_level_info) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->hashCode();
}

void PgsPlayerLevelInfo_writeToParcel(const PgsPlayerLevelInfo* pgs_player_level_info, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::PlayerLevelInfo*>(pgs_player_level_info)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
