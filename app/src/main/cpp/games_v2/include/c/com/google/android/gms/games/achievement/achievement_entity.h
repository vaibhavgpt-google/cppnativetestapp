#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "com/google/android/gms/games/achievement/achievement.h"
#include "java/lang/string.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AchievementEntity_ AchievementEntity;

/// Wraps a JNI reference with AchievementEntity object.
/// @param jobj A JNI reference to be wrapped with AchievementEntity object.
/// @see AchievementEntity_destroy
AchievementEntity* AchievementEntity_wrapJniReference(jobject jobj);

jobject AchievementEntity_getJniReference(const AchievementEntity* achievement_entity);

/// Destroys achievement_entity and all internal resources related to it. This function should be
/// called when achievement_entity is no longer needed.
/// @param achievement_entity An object to be destroyed.
void AchievementEntity_destroy(const AchievementEntity* achievement_entity);

String* AchievementEntity_getAchievementId(const AchievementEntity* achievement_entity);

int32_t AchievementEntity_getType(const AchievementEntity* achievement_entity);

String* AchievementEntity_getName(const AchievementEntity* achievement_entity);

String* AchievementEntity_getDescription(const AchievementEntity* achievement_entity);

Uri* AchievementEntity_getUnlockedImageUri(const AchievementEntity* achievement_entity);

String* AchievementEntity_getUnlockedImageUrl(const AchievementEntity* achievement_entity);

Uri* AchievementEntity_getRevealedImageUri(const AchievementEntity* achievement_entity);

String* AchievementEntity_getRevealedImageUrl(const AchievementEntity* achievement_entity);

int32_t AchievementEntity_getTotalSteps(const AchievementEntity* achievement_entity);

String* AchievementEntity_getFormattedTotalSteps(const AchievementEntity* achievement_entity);

PgsPlayer* AchievementEntity_getPlayer(const AchievementEntity* achievement_entity);

int32_t AchievementEntity_getState(const AchievementEntity* achievement_entity);

int32_t AchievementEntity_getCurrentSteps(const AchievementEntity* achievement_entity);

String* AchievementEntity_getFormattedCurrentSteps(const AchievementEntity* achievement_entity);

int64_t AchievementEntity_getLastUpdatedTimestamp(const AchievementEntity* achievement_entity);

int64_t AchievementEntity_getXpValue(const AchievementEntity* achievement_entity);

Achievement* AchievementEntity_freeze(const AchievementEntity* achievement_entity);

bool AchievementEntity_isDataValid(const AchievementEntity* achievement_entity);

int32_t AchievementEntity_hashCode(const AchievementEntity* achievement_entity);

String* AchievementEntity_toString(const AchievementEntity* achievement_entity);

void AchievementEntity_writeToParcel(const AchievementEntity* achievement_entity, Parcel* dest, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY_H_
