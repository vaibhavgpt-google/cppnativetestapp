#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "com/google/android/gms/games/leaderboard/leaderboard_variant.h"
#include "java/lang/string.h"
#include "java/util/array_list.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Leaderboard_ Leaderboard;

typedef String* (*Leaderboard_getLeaderboardIdCallback)();

typedef String* (*Leaderboard_getDisplayNameCallback)();

typedef Uri* (*Leaderboard_getIconImageUriCallback)();

typedef int32_t (*Leaderboard_getScoreOrderCallback)();

typedef ArrayList_LeaderboardVariant* (*Leaderboard_getVariantsCallback)();

/// Wraps a JNI reference with Leaderboard object.
/// @param jobj A JNI reference to be wrapped with Leaderboard object.
/// @see Leaderboard_destroy
Leaderboard* Leaderboard_wrapJniReference(jobject jobj);

jobject Leaderboard_getJniReference(const Leaderboard* leaderboard);

Leaderboard* Leaderboard_implementInterface(Leaderboard_getLeaderboardIdCallback leaderboard_get_leaderboard_id_callback, Leaderboard_getDisplayNameCallback leaderboard_get_display_name_callback, Leaderboard_getIconImageUriCallback leaderboard_get_icon_image_uri_callback, Leaderboard_getScoreOrderCallback leaderboard_get_score_order_callback, Leaderboard_getVariantsCallback leaderboard_get_variants_callback);

/// Destroys leaderboard and all internal resources related to it. This function should be
/// called when leaderboard is no longer needed.
/// @param leaderboard An object to be destroyed.
void Leaderboard_destroy(const Leaderboard* leaderboard);

String* Leaderboard_getLeaderboardId(const Leaderboard* leaderboard);

String* Leaderboard_getDisplayName(const Leaderboard* leaderboard);

Uri* Leaderboard_getIconImageUri(const Leaderboard* leaderboard);

int32_t Leaderboard_getScoreOrder(const Leaderboard* leaderboard);

ArrayList_LeaderboardVariant* Leaderboard_getVariants(const Leaderboard* leaderboard);

int32_t Leaderboard_get_SCORE_ORDER_SMALLER_IS_BETTER();

int32_t Leaderboard_get_SCORE_ORDER_LARGER_IS_BETTER();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD_H_
