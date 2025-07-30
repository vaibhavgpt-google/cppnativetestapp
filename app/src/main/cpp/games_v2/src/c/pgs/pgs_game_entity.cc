#include "pgs/pgs_game_entity.h"

#include "com/google/android/gms/games/game_entity.hpp"

PgsGameEntity* PgsGameEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGameEntity*>(new ::com::google::android::gms::games::GameEntity(jobj));
}

jobject PgsGameEntity_getJniReference(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->GetImpl();
}

void PgsGameEntity_destroy(const PgsGameEntity* pgs_game_entity) {
  ::com::google::android::gms::games::GameEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity));
}

String* PgsGameEntity_getApplicationId(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getApplicationId());
}

String* PgsGameEntity_getDisplayName(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getDisplayName());
}

String* PgsGameEntity_getPrimaryCategory(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getPrimaryCategory());
}

String* PgsGameEntity_getSecondaryCategory(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getSecondaryCategory());
}

String* PgsGameEntity_getDescription(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getDescription());
}

String* PgsGameEntity_getDeveloperName(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getDeveloperName());
}

Uri* PgsGameEntity_getIconImageUri(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getIconImageUri());
}

Uri* PgsGameEntity_getHiResImageUri(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getHiResImageUri());
}

Uri* PgsGameEntity_getFeaturedImageUri(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getFeaturedImageUri());
}

int32_t PgsGameEntity_getAchievementTotalCount(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getAchievementTotalCount();
}

int32_t PgsGameEntity_getLeaderboardCount(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getLeaderboardCount();
}

bool PgsGameEntity_areSnapshotsEnabled(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->areSnapshotsEnabled();
}

String* PgsGameEntity_getThemeColor(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->getThemeColor());
}

bool PgsGameEntity_hasGamepadSupport(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->hasGamepadSupport();
}

PgsGame* PgsGameEntity_freeze(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<PgsGame*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->freeze());
}

bool PgsGameEntity_isDataValid(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->isDataValid();
}

int32_t PgsGameEntity_hashCode(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->hashCode();
}

String* PgsGameEntity_toString(const PgsGameEntity* pgs_game_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->toString());
}

void PgsGameEntity_writeToParcel(const PgsGameEntity* pgs_game_entity, Parcel* dest, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::GameEntity*>(pgs_game_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(dest), flags);
}
