#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventBuffer_ EventBuffer;

typedef struct PgsAnnotatedData_EventBuffer_ PgsAnnotatedData_EventBuffer;

typedef struct Leaderboard_ Leaderboard;

typedef struct PgsAnnotatedData_Leaderboard_ PgsAnnotatedData_Leaderboard;

typedef struct LeaderboardScore_ LeaderboardScore;

typedef struct PgsAnnotatedData_LeaderboardScore_ PgsAnnotatedData_LeaderboardScore;

typedef struct PgsLeaderboardsClient_LeaderboardScores_ PgsLeaderboardsClient_LeaderboardScores;

typedef struct PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_ PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores;

typedef struct PlayerStats_ PlayerStats;

typedef struct PgsAnnotatedData_PlayerStats_ PgsAnnotatedData_PlayerStats;

typedef struct SnapshotMetadataBuffer_ SnapshotMetadataBuffer;

typedef struct PgsAnnotatedData_SnapshotMetadataBuffer_ PgsAnnotatedData_SnapshotMetadataBuffer;

typedef struct PgsPlayer_ PgsPlayer;

typedef struct PgsAnnotatedData_PgsPlayer_ PgsAnnotatedData_PgsPlayer;

typedef struct PgsPlayerBuffer_ PgsPlayerBuffer;

typedef struct PgsAnnotatedData_PgsPlayerBuffer_ PgsAnnotatedData_PgsPlayerBuffer;

typedef struct AchievementBuffer_ AchievementBuffer;

typedef struct PgsAnnotatedData_AchievementBuffer_ PgsAnnotatedData_AchievementBuffer;

/// Wraps a JNI reference with PgsAnnotatedData_EventBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_EventBuffer object.
/// @see PgsAnnotatedData_EventBuffer_destroy
PgsAnnotatedData_EventBuffer* PgsAnnotatedData_EventBuffer_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_EventBuffer_getJniReference(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer);

/// Destroys pgs_annotated_data_event_buffer and all internal resources related to it. This function should be
/// called when pgs_annotated_data_event_buffer is no longer needed.
/// @param pgs_annotated_data_event_buffer An object to be destroyed.
void PgsAnnotatedData_EventBuffer_destroy(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer);

EventBuffer* PgsAnnotatedData_EventBuffer_get(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer);

bool PgsAnnotatedData_EventBuffer_isStale(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer);

/// Wraps a JNI reference with PgsAnnotatedData_Leaderboard object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_Leaderboard object.
/// @see PgsAnnotatedData_Leaderboard_destroy
PgsAnnotatedData_Leaderboard* PgsAnnotatedData_Leaderboard_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_Leaderboard_getJniReference(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard);

/// Destroys pgs_annotated_data_leaderboard and all internal resources related to it. This function should be
/// called when pgs_annotated_data_leaderboard is no longer needed.
/// @param pgs_annotated_data_leaderboard An object to be destroyed.
void PgsAnnotatedData_Leaderboard_destroy(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard);

Leaderboard* PgsAnnotatedData_Leaderboard_get(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard);

bool PgsAnnotatedData_Leaderboard_isStale(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard);

/// Wraps a JNI reference with PgsAnnotatedData_LeaderboardScore object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_LeaderboardScore object.
/// @see PgsAnnotatedData_LeaderboardScore_destroy
PgsAnnotatedData_LeaderboardScore* PgsAnnotatedData_LeaderboardScore_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_LeaderboardScore_getJniReference(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score);

/// Destroys pgs_annotated_data_leaderboard_score and all internal resources related to it. This function should be
/// called when pgs_annotated_data_leaderboard_score is no longer needed.
/// @param pgs_annotated_data_leaderboard_score An object to be destroyed.
void PgsAnnotatedData_LeaderboardScore_destroy(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score);

LeaderboardScore* PgsAnnotatedData_LeaderboardScore_get(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score);

bool PgsAnnotatedData_LeaderboardScore_isStale(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score);

/// Wraps a JNI reference with PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores object.
/// @see PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy
PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_getJniReference(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores);

/// Destroys pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores and all internal resources related to it. This function should be
/// called when pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores is no longer needed.
/// @param pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores An object to be destroyed.
void PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores);

PgsLeaderboardsClient_LeaderboardScores* PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_get(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores);

bool PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_isStale(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores);

/// Wraps a JNI reference with PgsAnnotatedData_PlayerStats object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_PlayerStats object.
/// @see PgsAnnotatedData_PlayerStats_destroy
PgsAnnotatedData_PlayerStats* PgsAnnotatedData_PlayerStats_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_PlayerStats_getJniReference(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats);

/// Destroys pgs_annotated_data_player_stats and all internal resources related to it. This function should be
/// called when pgs_annotated_data_player_stats is no longer needed.
/// @param pgs_annotated_data_player_stats An object to be destroyed.
void PgsAnnotatedData_PlayerStats_destroy(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats);

PlayerStats* PgsAnnotatedData_PlayerStats_get(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats);

bool PgsAnnotatedData_PlayerStats_isStale(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats);

/// Wraps a JNI reference with PgsAnnotatedData_SnapshotMetadataBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_SnapshotMetadataBuffer object.
/// @see PgsAnnotatedData_SnapshotMetadataBuffer_destroy
PgsAnnotatedData_SnapshotMetadataBuffer* PgsAnnotatedData_SnapshotMetadataBuffer_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_SnapshotMetadataBuffer_getJniReference(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer);

/// Destroys pgs_annotated_data_snapshot_metadata_buffer and all internal resources related to it. This function should be
/// called when pgs_annotated_data_snapshot_metadata_buffer is no longer needed.
/// @param pgs_annotated_data_snapshot_metadata_buffer An object to be destroyed.
void PgsAnnotatedData_SnapshotMetadataBuffer_destroy(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer);

SnapshotMetadataBuffer* PgsAnnotatedData_SnapshotMetadataBuffer_get(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer);

bool PgsAnnotatedData_SnapshotMetadataBuffer_isStale(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer);

/// Wraps a JNI reference with PgsAnnotatedData_PgsPlayer object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_PgsPlayer object.
/// @see PgsAnnotatedData_PgsPlayer_destroy
PgsAnnotatedData_PgsPlayer* PgsAnnotatedData_PgsPlayer_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_PgsPlayer_getJniReference(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player);

/// Destroys pgs_annotated_data_pgs_player and all internal resources related to it. This function should be
/// called when pgs_annotated_data_pgs_player is no longer needed.
/// @param pgs_annotated_data_pgs_player An object to be destroyed.
void PgsAnnotatedData_PgsPlayer_destroy(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player);

PgsPlayer* PgsAnnotatedData_PgsPlayer_get(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player);

bool PgsAnnotatedData_PgsPlayer_isStale(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player);

/// Wraps a JNI reference with PgsAnnotatedData_PgsPlayerBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_PgsPlayerBuffer object.
/// @see PgsAnnotatedData_PgsPlayerBuffer_destroy
PgsAnnotatedData_PgsPlayerBuffer* PgsAnnotatedData_PgsPlayerBuffer_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_PgsPlayerBuffer_getJniReference(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer);

/// Destroys pgs_annotated_data_pgs_player_buffer and all internal resources related to it. This function should be
/// called when pgs_annotated_data_pgs_player_buffer is no longer needed.
/// @param pgs_annotated_data_pgs_player_buffer An object to be destroyed.
void PgsAnnotatedData_PgsPlayerBuffer_destroy(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer);

PgsPlayerBuffer* PgsAnnotatedData_PgsPlayerBuffer_get(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer);

bool PgsAnnotatedData_PgsPlayerBuffer_isStale(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer);

/// Wraps a JNI reference with PgsAnnotatedData_AchievementBuffer object.
/// @param jobj A JNI reference to be wrapped with PgsAnnotatedData_AchievementBuffer object.
/// @see PgsAnnotatedData_AchievementBuffer_destroy
PgsAnnotatedData_AchievementBuffer* PgsAnnotatedData_AchievementBuffer_wrapJniReference(jobject jobj);

jobject PgsAnnotatedData_AchievementBuffer_getJniReference(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer);

/// Destroys pgs_annotated_data_achievement_buffer and all internal resources related to it. This function should be
/// called when pgs_annotated_data_achievement_buffer is no longer needed.
/// @param pgs_annotated_data_achievement_buffer An object to be destroyed.
void PgsAnnotatedData_AchievementBuffer_destroy(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer);

AchievementBuffer* PgsAnnotatedData_AchievementBuffer_get(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer);

bool PgsAnnotatedData_AchievementBuffer_isStale(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA_H_
