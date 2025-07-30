#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "android/content/intent.h"
#include "gni/gni_task.h"
#include "java/lang/string.h"
#include "pgs/pgs_annotated_data.h"
#include "pgs/pgs_player.h"
#include "pgs/pgs_player_buffer.h"

#ifdef __cplusplus
extern "C" {
#endif

/// A client to interact with Players.
typedef struct PgsPlayersClient_ PgsPlayersClient;

typedef GniTask* (*PgsPlayersClient_getCurrentPlayerIdCallback)();

typedef GniTask* (*PgsPlayersClient_getCurrentPlayerCallback)(bool force_reload);

typedef GniTask* (*PgsPlayersClient_loadPlayerCallback)(String* player_id);

typedef GniTask* (*PgsPlayersClient_getCompareProfileIntentCallback)(PgsPlayer* player);

typedef GniTask* (*PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHintsCallback)(String* other_player_id, String* other_player_in_game_name, String* current_player_in_game_name);

typedef GniTask* (*PgsPlayersClient_getPlayerSearchIntentCallback)();

typedef GniTask* (*PgsPlayersClient_loadFriendsCallback)(int32_t page_size, bool force_reload);

typedef GniTask* (*PgsPlayersClient_loadMoreFriendsCallback)(int32_t page_size);

/// Wraps a JNI reference with PgsPlayersClient object.
/// @param jobj A JNI reference to be wrapped with PgsPlayersClient object.
/// @see PgsPlayersClient_destroy
PgsPlayersClient* PgsPlayersClient_wrapJniReference(jobject jobj);

jobject PgsPlayersClient_getJniReference(const PgsPlayersClient* pgs_players_client);

PgsPlayersClient* PgsPlayersClient_implementInterface(PgsPlayersClient_getCurrentPlayerIdCallback pgs_players_client_get_current_player_id_callback, PgsPlayersClient_getCurrentPlayerCallback pgs_players_client_get_current_player_callback, PgsPlayersClient_loadPlayerCallback pgs_players_client_load_player_callback, PgsPlayersClient_getCompareProfileIntentCallback pgs_players_client_get_compare_profile_intent_callback, PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHintsCallback pgs_players_client_get_compare_profile_intent_with_alternative_name_hints_callback, PgsPlayersClient_getPlayerSearchIntentCallback pgs_players_client_get_player_search_intent_callback, PgsPlayersClient_loadFriendsCallback pgs_players_client_load_friends_callback, PgsPlayersClient_loadMoreFriendsCallback pgs_players_client_load_more_friends_callback);

/// Destroys pgs_players_client and all internal resources related to it. This function should be
/// called when pgs_players_client is no longer needed.
/// @param pgs_players_client An object to be destroyed.
void PgsPlayersClient_destroy(const PgsPlayersClient* pgs_players_client);

/// Asynchronously loads the current signed-in player ID, if available. Returns a GniTask which can
/// be used to monitor progress or get the ID, if the operation is successful.
GniTask* PgsPlayersClient_getCurrentPlayerId(const PgsPlayersClient* pgs_players_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_getCurrentPlayerId.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call GniString_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_getCurrentPlayerId.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_getCurrentPlayerId
/// @see GniString_destroy
GniTaskErrorCode PgsPlayersClient_getCurrentPlayerId_getResult(const GniTask* task, const char** out_result);

GniTask* PgsPlayersClient_getCurrentPlayer(const PgsPlayersClient* pgs_players_client, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_getCurrentPlayer.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsPlayer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_getCurrentPlayer.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_getCurrentPlayer
/// @see PgsAnnotatedData_PgsPlayer_destroy
GniTaskErrorCode PgsPlayersClient_getCurrentPlayer_getResult(const GniTask* task, PgsAnnotatedData_PgsPlayer** out_result);

GniTask* PgsPlayersClient_loadPlayer(const PgsPlayersClient* pgs_players_client, String* player_id);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_loadPlayer.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsPlayer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_loadPlayer.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_loadPlayer
/// @see PgsAnnotatedData_PgsPlayer_destroy
GniTaskErrorCode PgsPlayersClient_loadPlayer_getResult(const GniTask* task, PgsAnnotatedData_PgsPlayer** out_result);

GniTask* PgsPlayersClient_getCompareProfileIntent(const PgsPlayersClient* pgs_players_client, PgsPlayer* player);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_getCompareProfileIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_getCompareProfileIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_getCompareProfileIntent
/// @see Intent_destroy
GniTaskErrorCode PgsPlayersClient_getCompareProfileIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints(const PgsPlayersClient* pgs_players_client, String* other_player_id, String* other_player_in_game_name, String* current_player_in_game_name);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints
/// @see Intent_destroy
GniTaskErrorCode PgsPlayersClient_getCompareProfileIntentWithAlternativeNameHints_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsPlayersClient_getPlayerSearchIntent(const PgsPlayersClient* pgs_players_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_getPlayerSearchIntent.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call Intent_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_getPlayerSearchIntent.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_getPlayerSearchIntent
/// @see Intent_destroy
GniTaskErrorCode PgsPlayersClient_getPlayerSearchIntent_getResult(const GniTask* task, Intent** out_result);

GniTask* PgsPlayersClient_loadFriends(const PgsPlayersClient* pgs_players_client, int32_t page_size, bool force_reload);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_loadFriends.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsPlayerBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_loadFriends.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_loadFriends
/// @see PgsAnnotatedData_PgsPlayerBuffer_destroy
GniTaskErrorCode PgsPlayersClient_loadFriends_getResult(const GniTask* task, PgsAnnotatedData_PgsPlayerBuffer** out_result);

GniTask* PgsPlayersClient_loadMoreFriends(const PgsPlayersClient* pgs_players_client, int32_t page_size);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsPlayersClient_loadMoreFriends.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAnnotatedData_PgsPlayerBuffer_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsPlayersClient_loadMoreFriends.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsPlayersClient_loadMoreFriends
/// @see PgsAnnotatedData_PgsPlayerBuffer_destroy
GniTaskErrorCode PgsPlayersClient_loadMoreFriends_getResult(const GniTask* task, PgsAnnotatedData_PgsPlayerBuffer** out_result);

const char* PgsPlayersClient_get_EXTRA_PLAYER_SEARCH_RESULTS();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT_H_
