#include "pgs/pgs_annotated_data.h"

#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/event/event_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include "com/google/android/gms/games/leaderboards_client.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/player_buffer.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.hpp"
#include "com/google/android/gms/games/stats/player_stats.hpp"

PgsAnnotatedData_EventBuffer* PgsAnnotatedData_EventBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_EventBuffer*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>(jobj));
}

jobject PgsAnnotatedData_EventBuffer_getJniReference(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>*>(pgs_annotated_data_event_buffer)->GetImpl();
}

void PgsAnnotatedData_EventBuffer_destroy(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>*>(pgs_annotated_data_event_buffer));
}

EventBuffer* PgsAnnotatedData_EventBuffer_get(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer) {
  return reinterpret_cast<EventBuffer*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>*>(pgs_annotated_data_event_buffer)->get());
}

bool PgsAnnotatedData_EventBuffer_isStale(const PgsAnnotatedData_EventBuffer* pgs_annotated_data_event_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::event::EventBuffer>*>(pgs_annotated_data_event_buffer)->isStale();
}

PgsAnnotatedData_Leaderboard* PgsAnnotatedData_Leaderboard_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_Leaderboard*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>(jobj));
}

jobject PgsAnnotatedData_Leaderboard_getJniReference(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>*>(pgs_annotated_data_leaderboard)->GetImpl();
}

void PgsAnnotatedData_Leaderboard_destroy(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>*>(pgs_annotated_data_leaderboard));
}

Leaderboard* PgsAnnotatedData_Leaderboard_get(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard) {
  return reinterpret_cast<Leaderboard*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>*>(pgs_annotated_data_leaderboard)->get());
}

bool PgsAnnotatedData_Leaderboard_isStale(const PgsAnnotatedData_Leaderboard* pgs_annotated_data_leaderboard) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::Leaderboard>*>(pgs_annotated_data_leaderboard)->isStale();
}

PgsAnnotatedData_LeaderboardScore* PgsAnnotatedData_LeaderboardScore_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_LeaderboardScore*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>(jobj));
}

jobject PgsAnnotatedData_LeaderboardScore_getJniReference(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>*>(pgs_annotated_data_leaderboard_score)->GetImpl();
}

void PgsAnnotatedData_LeaderboardScore_destroy(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>*>(pgs_annotated_data_leaderboard_score));
}

LeaderboardScore* PgsAnnotatedData_LeaderboardScore_get(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score) {
  return reinterpret_cast<LeaderboardScore*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>*>(pgs_annotated_data_leaderboard_score)->get());
}

bool PgsAnnotatedData_LeaderboardScore_isStale(const PgsAnnotatedData_LeaderboardScore* pgs_annotated_data_leaderboard_score) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::leaderboard::LeaderboardScore>*>(pgs_annotated_data_leaderboard_score)->isStale();
}

PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>(jobj));
}

jobject PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_getJniReference(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>*>(pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores)->GetImpl();
}

void PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_destroy(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>*>(pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores));
}

PgsLeaderboardsClient_LeaderboardScores* PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_get(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<PgsLeaderboardsClient_LeaderboardScores*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>*>(pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores)->get());
}

bool PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores_isStale(const PgsAnnotatedData_PgsLeaderboardsClient_LeaderboardScores* pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::LeaderboardsClient::LeaderboardScores>*>(pgs_annotated_data_pgs_leaderboards_client_leaderboard_scores)->isStale();
}

PgsAnnotatedData_PlayerStats* PgsAnnotatedData_PlayerStats_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_PlayerStats*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>(jobj));
}

jobject PgsAnnotatedData_PlayerStats_getJniReference(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>*>(pgs_annotated_data_player_stats)->GetImpl();
}

void PgsAnnotatedData_PlayerStats_destroy(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>*>(pgs_annotated_data_player_stats));
}

PlayerStats* PgsAnnotatedData_PlayerStats_get(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats) {
  return reinterpret_cast<PlayerStats*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>*>(pgs_annotated_data_player_stats)->get());
}

bool PgsAnnotatedData_PlayerStats_isStale(const PgsAnnotatedData_PlayerStats* pgs_annotated_data_player_stats) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::stats::PlayerStats>*>(pgs_annotated_data_player_stats)->isStale();
}

PgsAnnotatedData_SnapshotMetadataBuffer* PgsAnnotatedData_SnapshotMetadataBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_SnapshotMetadataBuffer*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>(jobj));
}

jobject PgsAnnotatedData_SnapshotMetadataBuffer_getJniReference(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>*>(pgs_annotated_data_snapshot_metadata_buffer)->GetImpl();
}

void PgsAnnotatedData_SnapshotMetadataBuffer_destroy(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>*>(pgs_annotated_data_snapshot_metadata_buffer));
}

SnapshotMetadataBuffer* PgsAnnotatedData_SnapshotMetadataBuffer_get(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer) {
  return reinterpret_cast<SnapshotMetadataBuffer*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>*>(pgs_annotated_data_snapshot_metadata_buffer)->get());
}

bool PgsAnnotatedData_SnapshotMetadataBuffer_isStale(const PgsAnnotatedData_SnapshotMetadataBuffer* pgs_annotated_data_snapshot_metadata_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::snapshot::SnapshotMetadataBuffer>*>(pgs_annotated_data_snapshot_metadata_buffer)->isStale();
}

PgsAnnotatedData_PgsPlayer* PgsAnnotatedData_PgsPlayer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_PgsPlayer*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>(jobj));
}

jobject PgsAnnotatedData_PgsPlayer_getJniReference(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>*>(pgs_annotated_data_pgs_player)->GetImpl();
}

void PgsAnnotatedData_PgsPlayer_destroy(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>*>(pgs_annotated_data_pgs_player));
}

PgsPlayer* PgsAnnotatedData_PgsPlayer_get(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>*>(pgs_annotated_data_pgs_player)->get());
}

bool PgsAnnotatedData_PgsPlayer_isStale(const PgsAnnotatedData_PgsPlayer* pgs_annotated_data_pgs_player) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::Player>*>(pgs_annotated_data_pgs_player)->isStale();
}

PgsAnnotatedData_PgsPlayerBuffer* PgsAnnotatedData_PgsPlayerBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_PgsPlayerBuffer*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>(jobj));
}

jobject PgsAnnotatedData_PgsPlayerBuffer_getJniReference(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>*>(pgs_annotated_data_pgs_player_buffer)->GetImpl();
}

void PgsAnnotatedData_PgsPlayerBuffer_destroy(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>*>(pgs_annotated_data_pgs_player_buffer));
}

PgsPlayerBuffer* PgsAnnotatedData_PgsPlayerBuffer_get(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer) {
  return reinterpret_cast<PgsPlayerBuffer*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>*>(pgs_annotated_data_pgs_player_buffer)->get());
}

bool PgsAnnotatedData_PgsPlayerBuffer_isStale(const PgsAnnotatedData_PgsPlayerBuffer* pgs_annotated_data_pgs_player_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::PlayerBuffer>*>(pgs_annotated_data_pgs_player_buffer)->isStale();
}

PgsAnnotatedData_AchievementBuffer* PgsAnnotatedData_AchievementBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAnnotatedData_AchievementBuffer*>(new ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>(jobj));
}

jobject PgsAnnotatedData_AchievementBuffer_getJniReference(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>*>(pgs_annotated_data_achievement_buffer)->GetImpl();
}

void PgsAnnotatedData_AchievementBuffer_destroy(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer) {
  ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>::destroy(reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>*>(pgs_annotated_data_achievement_buffer));
}

AchievementBuffer* PgsAnnotatedData_AchievementBuffer_get(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer) {
  return reinterpret_cast<AchievementBuffer*>(&reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>*>(pgs_annotated_data_achievement_buffer)->get());
}

bool PgsAnnotatedData_AchievementBuffer_isStale(const PgsAnnotatedData_AchievementBuffer* pgs_annotated_data_achievement_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::AnnotatedData<::com::google::android::gms::games::achievement::AchievementBuffer>*>(pgs_annotated_data_achievement_buffer)->isStale();
}
