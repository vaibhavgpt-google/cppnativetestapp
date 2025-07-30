#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LeaderboardVariant_ LeaderboardVariant;

typedef int32_t (*LeaderboardVariant_getTimeSpanCallback)();

typedef int32_t (*LeaderboardVariant_getCollectionCallback)();

typedef bool (*LeaderboardVariant_hasPlayerInfoCallback)();

typedef int64_t (*LeaderboardVariant_getRawPlayerScoreCallback)();

typedef String* (*LeaderboardVariant_getDisplayPlayerScoreCallback)();

typedef int64_t (*LeaderboardVariant_getPlayerRankCallback)();

typedef String* (*LeaderboardVariant_getDisplayPlayerRankCallback)();

typedef String* (*LeaderboardVariant_getPlayerScoreTagCallback)();

typedef int64_t (*LeaderboardVariant_getNumScoresCallback)();

/// Wraps a JNI reference with LeaderboardVariant object.
/// @param jobj A JNI reference to be wrapped with LeaderboardVariant object.
/// @see LeaderboardVariant_destroy
LeaderboardVariant* LeaderboardVariant_wrapJniReference(jobject jobj);

jobject LeaderboardVariant_getJniReference(const LeaderboardVariant* leaderboard_variant);

LeaderboardVariant* LeaderboardVariant_implementInterface(LeaderboardVariant_getTimeSpanCallback leaderboard_variant_get_time_span_callback, LeaderboardVariant_getCollectionCallback leaderboard_variant_get_collection_callback, LeaderboardVariant_hasPlayerInfoCallback leaderboard_variant_has_player_info_callback, LeaderboardVariant_getRawPlayerScoreCallback leaderboard_variant_get_raw_player_score_callback, LeaderboardVariant_getDisplayPlayerScoreCallback leaderboard_variant_get_display_player_score_callback, LeaderboardVariant_getPlayerRankCallback leaderboard_variant_get_player_rank_callback, LeaderboardVariant_getDisplayPlayerRankCallback leaderboard_variant_get_display_player_rank_callback, LeaderboardVariant_getPlayerScoreTagCallback leaderboard_variant_get_player_score_tag_callback, LeaderboardVariant_getNumScoresCallback leaderboard_variant_get_num_scores_callback);

/// Destroys leaderboard_variant and all internal resources related to it. This function should be
/// called when leaderboard_variant is no longer needed.
/// @param leaderboard_variant An object to be destroyed.
void LeaderboardVariant_destroy(const LeaderboardVariant* leaderboard_variant);

int32_t LeaderboardVariant_getTimeSpan(const LeaderboardVariant* leaderboard_variant);

int32_t LeaderboardVariant_getCollection(const LeaderboardVariant* leaderboard_variant);

bool LeaderboardVariant_hasPlayerInfo(const LeaderboardVariant* leaderboard_variant);

int64_t LeaderboardVariant_getRawPlayerScore(const LeaderboardVariant* leaderboard_variant);

String* LeaderboardVariant_getDisplayPlayerScore(const LeaderboardVariant* leaderboard_variant);

int64_t LeaderboardVariant_getPlayerRank(const LeaderboardVariant* leaderboard_variant);

String* LeaderboardVariant_getDisplayPlayerRank(const LeaderboardVariant* leaderboard_variant);

String* LeaderboardVariant_getPlayerScoreTag(const LeaderboardVariant* leaderboard_variant);

int64_t LeaderboardVariant_getNumScores(const LeaderboardVariant* leaderboard_variant);

int32_t LeaderboardVariant_get_COLLECTION_PUBLIC();

int32_t LeaderboardVariant_get_COLLECTION_FRIENDS();

int32_t LeaderboardVariant_get_TIME_SPAN_DAILY();

int32_t LeaderboardVariant_get_TIME_SPAN_WEEKLY();

int32_t LeaderboardVariant_get_TIME_SPAN_ALL_TIME();

int32_t LeaderboardVariant_get_NUM_TIME_SPANS();

int32_t LeaderboardVariant_get_PLAYER_SCORE_UNKNOWN();

int32_t LeaderboardVariant_get_PLAYER_RANK_UNKNOWN();

int32_t LeaderboardVariant_get_NUM_SCORES_UNKNOWN();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT_H_
