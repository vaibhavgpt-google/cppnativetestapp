#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Achievement_ Achievement;

typedef String* (*Achievement_getAchievementIdCallback)();

typedef int32_t (*Achievement_getTypeCallback)();

typedef String* (*Achievement_getNameCallback)();

typedef String* (*Achievement_getDescriptionCallback)();

typedef Uri* (*Achievement_getUnlockedImageUriCallback)();

typedef Uri* (*Achievement_getRevealedImageUriCallback)();

typedef int32_t (*Achievement_getTotalStepsCallback)();

typedef String* (*Achievement_getFormattedTotalStepsCallback)();

typedef PgsPlayer* (*Achievement_getPlayerCallback)();

typedef int32_t (*Achievement_getStateCallback)();

typedef int32_t (*Achievement_getCurrentStepsCallback)();

typedef String* (*Achievement_getFormattedCurrentStepsCallback)();

typedef int64_t (*Achievement_getLastUpdatedTimestampCallback)();

typedef int64_t (*Achievement_getXpValueCallback)();

/// Wraps a JNI reference with Achievement object.
/// @param jobj A JNI reference to be wrapped with Achievement object.
/// @see Achievement_destroy
Achievement* Achievement_wrapJniReference(jobject jobj);

jobject Achievement_getJniReference(const Achievement* achievement);

Achievement* Achievement_implementInterface(Achievement_getAchievementIdCallback achievement_get_achievement_id_callback, Achievement_getTypeCallback achievement_get_type_callback, Achievement_getNameCallback achievement_get_name_callback, Achievement_getDescriptionCallback achievement_get_description_callback, Achievement_getUnlockedImageUriCallback achievement_get_unlocked_image_uri_callback, Achievement_getRevealedImageUriCallback achievement_get_revealed_image_uri_callback, Achievement_getTotalStepsCallback achievement_get_total_steps_callback, Achievement_getFormattedTotalStepsCallback achievement_get_formatted_total_steps_callback, Achievement_getPlayerCallback achievement_get_player_callback, Achievement_getStateCallback achievement_get_state_callback, Achievement_getCurrentStepsCallback achievement_get_current_steps_callback, Achievement_getFormattedCurrentStepsCallback achievement_get_formatted_current_steps_callback, Achievement_getLastUpdatedTimestampCallback achievement_get_last_updated_timestamp_callback, Achievement_getXpValueCallback achievement_get_xp_value_callback);

/// Destroys achievement and all internal resources related to it. This function should be
/// called when achievement is no longer needed.
/// @param achievement An object to be destroyed.
void Achievement_destroy(const Achievement* achievement);

String* Achievement_getAchievementId(const Achievement* achievement);

int32_t Achievement_getType(const Achievement* achievement);

String* Achievement_getName(const Achievement* achievement);

String* Achievement_getDescription(const Achievement* achievement);

Uri* Achievement_getUnlockedImageUri(const Achievement* achievement);

Uri* Achievement_getRevealedImageUri(const Achievement* achievement);

int32_t Achievement_getTotalSteps(const Achievement* achievement);

String* Achievement_getFormattedTotalSteps(const Achievement* achievement);

PgsPlayer* Achievement_getPlayer(const Achievement* achievement);

int32_t Achievement_getState(const Achievement* achievement);

int32_t Achievement_getCurrentSteps(const Achievement* achievement);

String* Achievement_getFormattedCurrentSteps(const Achievement* achievement);

int64_t Achievement_getLastUpdatedTimestamp(const Achievement* achievement);

int64_t Achievement_getXpValue(const Achievement* achievement);

int32_t Achievement_get_STATE_UNLOCKED();

int32_t Achievement_get_STATE_REVEALED();

int32_t Achievement_get_STATE_HIDDEN();

int32_t Achievement_get_TYPE_STANDARD();

int32_t Achievement_get_TYPE_INCREMENTAL();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT_H_
