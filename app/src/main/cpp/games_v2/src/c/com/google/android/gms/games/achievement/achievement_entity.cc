#include "com/google/android/gms/games/achievement/achievement_entity.h"

#include "com/google/android/gms/games/achievement/achievement_entity.hpp"

AchievementEntity* AchievementEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AchievementEntity*>(new ::com::google::android::gms::games::achievement::AchievementEntity(jobj));
}

jobject AchievementEntity_getJniReference(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->GetImpl();
}

void AchievementEntity_destroy(const AchievementEntity* achievement_entity) {
  ::com::google::android::gms::games::achievement::AchievementEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity));
}

String* AchievementEntity_getAchievementId(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getAchievementId());
}

int32_t AchievementEntity_getType(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getType();
}

String* AchievementEntity_getName(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getName());
}

String* AchievementEntity_getDescription(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getDescription());
}

Uri* AchievementEntity_getUnlockedImageUri(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getUnlockedImageUri());
}

String* AchievementEntity_getUnlockedImageUrl(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getUnlockedImageUrl());
}

Uri* AchievementEntity_getRevealedImageUri(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getRevealedImageUri());
}

String* AchievementEntity_getRevealedImageUrl(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getRevealedImageUrl());
}

int32_t AchievementEntity_getTotalSteps(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getTotalSteps();
}

String* AchievementEntity_getFormattedTotalSteps(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getFormattedTotalSteps());
}

PgsPlayer* AchievementEntity_getPlayer(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getPlayer());
}

int32_t AchievementEntity_getState(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getState();
}

int32_t AchievementEntity_getCurrentSteps(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getCurrentSteps();
}

String* AchievementEntity_getFormattedCurrentSteps(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getFormattedCurrentSteps());
}

int64_t AchievementEntity_getLastUpdatedTimestamp(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getLastUpdatedTimestamp();
}

int64_t AchievementEntity_getXpValue(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->getXpValue();
}

Achievement* AchievementEntity_freeze(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<Achievement*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->freeze());
}

bool AchievementEntity_isDataValid(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->isDataValid();
}

int32_t AchievementEntity_hashCode(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->hashCode();
}

String* AchievementEntity_toString(const AchievementEntity* achievement_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->toString());
}

void AchievementEntity_writeToParcel(const AchievementEntity* achievement_entity, Parcel* dest, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementEntity*>(achievement_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(dest), flags);
}
