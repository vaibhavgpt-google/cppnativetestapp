#include "pgs/pgs_player_entity.h"

#include "com/google/android/gms/games/player_entity.hpp"

PgsPlayerEntity* PgsPlayerEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerEntity*>(new ::com::google::android::gms::games::PlayerEntity(jobj));
}

jobject PgsPlayerEntity_getJniReference(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->GetImpl();
}

void PgsPlayerEntity_destroy(const PgsPlayerEntity* pgs_player_entity) {
  ::com::google::android::gms::games::PlayerEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity));
}

String* PgsPlayerEntity_getPlayerId(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getPlayerId());
}

String* PgsPlayerEntity_getDisplayName(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getDisplayName());
}

bool PgsPlayerEntity_hasIconImage(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->hasIconImage();
}

Uri* PgsPlayerEntity_getIconImageUri(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getIconImageUri());
}

bool PgsPlayerEntity_hasHiResImage(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->hasHiResImage();
}

Uri* PgsPlayerEntity_getHiResImageUri(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getHiResImageUri());
}

int64_t PgsPlayerEntity_getRetrievedTimestamp(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getRetrievedTimestamp();
}

int64_t PgsPlayerEntity_getLastPlayedWithTimestamp(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getLastPlayedWithTimestamp();
}

String* PgsPlayerEntity_getTitle(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getTitle());
}

PgsPlayerLevelInfo* PgsPlayerEntity_getLevelInfo(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<PgsPlayerLevelInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getLevelInfo());
}

Uri* PgsPlayerEntity_getBannerImageLandscapeUri(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getBannerImageLandscapeUri());
}

Uri* PgsPlayerEntity_getBannerImagePortraitUri(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getBannerImagePortraitUri());
}

PgsPlayerRelationshipInfo* PgsPlayerEntity_getRelationshipInfo(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<PgsPlayerRelationshipInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getRelationshipInfo());
}

PgsCurrentPlayerInfo* PgsPlayerEntity_getCurrentPlayerInfo(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<PgsCurrentPlayerInfo*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->getCurrentPlayerInfo());
}

PgsPlayer* PgsPlayerEntity_freeze(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->freeze());
}

bool PgsPlayerEntity_isDataValid(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->isDataValid();
}

int32_t PgsPlayerEntity_hashCode(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->hashCode();
}

String* PgsPlayerEntity_toString(const PgsPlayerEntity* pgs_player_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->toString());
}

void PgsPlayerEntity_writeToParcel(const PgsPlayerEntity* pgs_player_entity, Parcel* dest, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::PlayerEntity*>(pgs_player_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(dest), flags);
}
