#include "pgs/pgs_player_level.h"

#include "com/google/android/gms/games/player_level.hpp"

PgsPlayerLevel* PgsPlayerLevel_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerLevel*>(new ::com::google::android::gms::games::PlayerLevel(jobj));
}

jobject PgsPlayerLevel_getJniReference(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->GetImpl();
}

void PgsPlayerLevel_destroy(const PgsPlayerLevel* pgs_player_level) {
  ::com::google::android::gms::games::PlayerLevel::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level));
}

int32_t PgsPlayerLevel_getLevelNumber(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->getLevelNumber();
}

int64_t PgsPlayerLevel_getMinXp(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->getMinXp();
}

int64_t PgsPlayerLevel_getMaxXp(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->getMaxXp();
}

int32_t PgsPlayerLevel_hashCode(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->hashCode();
}

String* PgsPlayerLevel_toString(const PgsPlayerLevel* pgs_player_level) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->toString());
}

void PgsPlayerLevel_writeToParcel(const PgsPlayerLevel* pgs_player_level, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::PlayerLevel*>(pgs_player_level)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
