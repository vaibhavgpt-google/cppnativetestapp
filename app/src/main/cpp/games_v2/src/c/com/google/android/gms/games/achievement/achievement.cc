#include "com/google/android/gms/games/achievement/achievement.h"

#include "com/google/android/gms/games/achievement/achievement.hpp"

Achievement* Achievement_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Achievement*>(new ::com::google::android::gms::games::achievement::Achievement(jobj));
}

jobject Achievement_getJniReference(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->GetImpl();
}

Achievement* Achievement_implementInterface(Achievement_getAchievementIdCallback achievement_get_achievement_id_callback, Achievement_getTypeCallback achievement_get_type_callback, Achievement_getNameCallback achievement_get_name_callback, Achievement_getDescriptionCallback achievement_get_description_callback, Achievement_getUnlockedImageUriCallback achievement_get_unlocked_image_uri_callback, Achievement_getRevealedImageUriCallback achievement_get_revealed_image_uri_callback, Achievement_getTotalStepsCallback achievement_get_total_steps_callback, Achievement_getFormattedTotalStepsCallback achievement_get_formatted_total_steps_callback, Achievement_getPlayerCallback achievement_get_player_callback, Achievement_getStateCallback achievement_get_state_callback, Achievement_getCurrentStepsCallback achievement_get_current_steps_callback, Achievement_getFormattedCurrentStepsCallback achievement_get_formatted_current_steps_callback, Achievement_getLastUpdatedTimestampCallback achievement_get_last_updated_timestamp_callback, Achievement_getXpValueCallback achievement_get_xp_value_callback) {
  return reinterpret_cast<Achievement*>(::com::google::android::gms::games::achievement::Achievement::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getAchievementIdCallback>(achievement_get_achievement_id_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getTypeCallback>(achievement_get_type_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getNameCallback>(achievement_get_name_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getDescriptionCallback>(achievement_get_description_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getUnlockedImageUriCallback>(achievement_get_unlocked_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getRevealedImageUriCallback>(achievement_get_revealed_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getTotalStepsCallback>(achievement_get_total_steps_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getFormattedTotalStepsCallback>(achievement_get_formatted_total_steps_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getPlayerCallback>(achievement_get_player_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getStateCallback>(achievement_get_state_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getCurrentStepsCallback>(achievement_get_current_steps_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getFormattedCurrentStepsCallback>(achievement_get_formatted_current_steps_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getLastUpdatedTimestampCallback>(achievement_get_last_updated_timestamp_callback), reinterpret_cast<::com::google::android::gms::games::achievement::Achievement::getXpValueCallback>(achievement_get_xp_value_callback)));
}

void Achievement_destroy(const Achievement* achievement) {
  ::com::google::android::gms::games::achievement::Achievement::destroy(reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement));
}

String* Achievement_getAchievementId(const Achievement* achievement) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getAchievementId());
}

int32_t Achievement_getType(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getType();
}

String* Achievement_getName(const Achievement* achievement) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getName());
}

String* Achievement_getDescription(const Achievement* achievement) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getDescription());
}

Uri* Achievement_getUnlockedImageUri(const Achievement* achievement) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getUnlockedImageUri());
}

Uri* Achievement_getRevealedImageUri(const Achievement* achievement) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getRevealedImageUri());
}

int32_t Achievement_getTotalSteps(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getTotalSteps();
}

String* Achievement_getFormattedTotalSteps(const Achievement* achievement) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getFormattedTotalSteps());
}

PgsPlayer* Achievement_getPlayer(const Achievement* achievement) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getPlayer());
}

int32_t Achievement_getState(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getState();
}

int32_t Achievement_getCurrentSteps(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getCurrentSteps();
}

String* Achievement_getFormattedCurrentSteps(const Achievement* achievement) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getFormattedCurrentSteps());
}

int64_t Achievement_getLastUpdatedTimestamp(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getLastUpdatedTimestamp();
}

int64_t Achievement_getXpValue(const Achievement* achievement) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::Achievement*>(achievement)->getXpValue();
}

int32_t Achievement_get_STATE_UNLOCKED() {
  return ::com::google::android::gms::games::achievement::Achievement::STATE_UNLOCKED;
}

int32_t Achievement_get_STATE_REVEALED() {
  return ::com::google::android::gms::games::achievement::Achievement::STATE_REVEALED;
}

int32_t Achievement_get_STATE_HIDDEN() {
  return ::com::google::android::gms::games::achievement::Achievement::STATE_HIDDEN;
}

int32_t Achievement_get_TYPE_STANDARD() {
  return ::com::google::android::gms::games::achievement::Achievement::TYPE_STANDARD;
}

int32_t Achievement_get_TYPE_INCREMENTAL() {
  return ::com::google::android::gms::games::achievement::Achievement::TYPE_INCREMENTAL;
}
