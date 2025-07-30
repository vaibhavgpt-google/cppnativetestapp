#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAME_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAME_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsGame_ PgsGame;

typedef String* (*PgsGame_getApplicationIdCallback)();

typedef String* (*PgsGame_getDisplayNameCallback)();

typedef String* (*PgsGame_getPrimaryCategoryCallback)();

typedef String* (*PgsGame_getSecondaryCategoryCallback)();

typedef String* (*PgsGame_getDescriptionCallback)();

typedef String* (*PgsGame_getDeveloperNameCallback)();

typedef Uri* (*PgsGame_getIconImageUriCallback)();

typedef Uri* (*PgsGame_getHiResImageUriCallback)();

typedef Uri* (*PgsGame_getFeaturedImageUriCallback)();

typedef int32_t (*PgsGame_getAchievementTotalCountCallback)();

typedef int32_t (*PgsGame_getLeaderboardCountCallback)();

typedef bool (*PgsGame_areSnapshotsEnabledCallback)();

typedef String* (*PgsGame_getThemeColorCallback)();

typedef bool (*PgsGame_hasGamepadSupportCallback)();

/// Wraps a JNI reference with PgsGame object.
/// @param jobj A JNI reference to be wrapped with PgsGame object.
/// @see PgsGame_destroy
PgsGame* PgsGame_wrapJniReference(jobject jobj);

jobject PgsGame_getJniReference(const PgsGame* pgs_game);

PgsGame* PgsGame_implementInterface(PgsGame_getApplicationIdCallback pgs_game_get_application_id_callback, PgsGame_getDisplayNameCallback pgs_game_get_display_name_callback, PgsGame_getPrimaryCategoryCallback pgs_game_get_primary_category_callback, PgsGame_getSecondaryCategoryCallback pgs_game_get_secondary_category_callback, PgsGame_getDescriptionCallback pgs_game_get_description_callback, PgsGame_getDeveloperNameCallback pgs_game_get_developer_name_callback, PgsGame_getIconImageUriCallback pgs_game_get_icon_image_uri_callback, PgsGame_getHiResImageUriCallback pgs_game_get_hi_res_image_uri_callback, PgsGame_getFeaturedImageUriCallback pgs_game_get_featured_image_uri_callback, PgsGame_getAchievementTotalCountCallback pgs_game_get_achievement_total_count_callback, PgsGame_getLeaderboardCountCallback pgs_game_get_leaderboard_count_callback, PgsGame_areSnapshotsEnabledCallback pgs_game_are_snapshots_enabled_callback, PgsGame_getThemeColorCallback pgs_game_get_theme_color_callback, PgsGame_hasGamepadSupportCallback pgs_game_has_gamepad_support_callback);

/// Destroys pgs_game and all internal resources related to it. This function should be
/// called when pgs_game is no longer needed.
/// @param pgs_game An object to be destroyed.
void PgsGame_destroy(const PgsGame* pgs_game);

String* PgsGame_getApplicationId(const PgsGame* pgs_game);

String* PgsGame_getDisplayName(const PgsGame* pgs_game);

String* PgsGame_getPrimaryCategory(const PgsGame* pgs_game);

String* PgsGame_getSecondaryCategory(const PgsGame* pgs_game);

String* PgsGame_getDescription(const PgsGame* pgs_game);

String* PgsGame_getDeveloperName(const PgsGame* pgs_game);

Uri* PgsGame_getIconImageUri(const PgsGame* pgs_game);

Uri* PgsGame_getHiResImageUri(const PgsGame* pgs_game);

Uri* PgsGame_getFeaturedImageUri(const PgsGame* pgs_game);

int32_t PgsGame_getAchievementTotalCount(const PgsGame* pgs_game);

int32_t PgsGame_getLeaderboardCount(const PgsGame* pgs_game);

bool PgsGame_areSnapshotsEnabled(const PgsGame* pgs_game);

String* PgsGame_getThemeColor(const PgsGame* pgs_game);

bool PgsGame_hasGamepadSupport(const PgsGame* pgs_game);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAME_H_
