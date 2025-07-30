#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LeaderboardScore_ LeaderboardScore;

typedef int64_t (*LeaderboardScore_getRankCallback)();

typedef String* (*LeaderboardScore_getDisplayRankCallback)();

typedef String* (*LeaderboardScore_getDisplayScoreCallback)();

typedef int64_t (*LeaderboardScore_getRawScoreCallback)();

typedef int64_t (*LeaderboardScore_getTimestampMillisCallback)();

typedef String* (*LeaderboardScore_getScoreHolderDisplayNameCallback)();

typedef Uri* (*LeaderboardScore_getScoreHolderIconImageUriCallback)();

typedef Uri* (*LeaderboardScore_getScoreHolderHiResImageUriCallback)();

typedef PgsPlayer* (*LeaderboardScore_getScoreHolderCallback)();

typedef String* (*LeaderboardScore_getScoreTagCallback)();

/// Wraps a JNI reference with LeaderboardScore object.
/// @param jobj A JNI reference to be wrapped with LeaderboardScore object.
/// @see LeaderboardScore_destroy
LeaderboardScore* LeaderboardScore_wrapJniReference(jobject jobj);

jobject LeaderboardScore_getJniReference(const LeaderboardScore* leaderboard_score);

LeaderboardScore* LeaderboardScore_implementInterface(LeaderboardScore_getRankCallback leaderboard_score_get_rank_callback, LeaderboardScore_getDisplayRankCallback leaderboard_score_get_display_rank_callback, LeaderboardScore_getDisplayScoreCallback leaderboard_score_get_display_score_callback, LeaderboardScore_getRawScoreCallback leaderboard_score_get_raw_score_callback, LeaderboardScore_getTimestampMillisCallback leaderboard_score_get_timestamp_millis_callback, LeaderboardScore_getScoreHolderDisplayNameCallback leaderboard_score_get_score_holder_display_name_callback, LeaderboardScore_getScoreHolderIconImageUriCallback leaderboard_score_get_score_holder_icon_image_uri_callback, LeaderboardScore_getScoreHolderHiResImageUriCallback leaderboard_score_get_score_holder_hi_res_image_uri_callback, LeaderboardScore_getScoreHolderCallback leaderboard_score_get_score_holder_callback, LeaderboardScore_getScoreTagCallback leaderboard_score_get_score_tag_callback);

/// Destroys leaderboard_score and all internal resources related to it. This function should be
/// called when leaderboard_score is no longer needed.
/// @param leaderboard_score An object to be destroyed.
void LeaderboardScore_destroy(const LeaderboardScore* leaderboard_score);

int64_t LeaderboardScore_getRank(const LeaderboardScore* leaderboard_score);

String* LeaderboardScore_getDisplayRank(const LeaderboardScore* leaderboard_score);

String* LeaderboardScore_getDisplayScore(const LeaderboardScore* leaderboard_score);

int64_t LeaderboardScore_getRawScore(const LeaderboardScore* leaderboard_score);

int64_t LeaderboardScore_getTimestampMillis(const LeaderboardScore* leaderboard_score);

String* LeaderboardScore_getScoreHolderDisplayName(const LeaderboardScore* leaderboard_score);

Uri* LeaderboardScore_getScoreHolderIconImageUri(const LeaderboardScore* leaderboard_score);

Uri* LeaderboardScore_getScoreHolderHiResImageUri(const LeaderboardScore* leaderboard_score);

PgsPlayer* LeaderboardScore_getScoreHolder(const LeaderboardScore* leaderboard_score);

String* LeaderboardScore_getScoreTag(const LeaderboardScore* leaderboard_score);

int32_t LeaderboardScore_get_LEADERBOARD_RANK_UNKNOWN();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE_H_
