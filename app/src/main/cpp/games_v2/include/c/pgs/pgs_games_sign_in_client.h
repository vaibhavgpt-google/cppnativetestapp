#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/gamessignin/auth_response.h"
#include "com/google/android/gms/games/gamessignin/auth_scope.h"
#include "gni/gni_task.h"
#include "java/lang/string.h"
#include "java/util/list.h"
#include "pgs/pgs_authentication_result.h"

#ifdef __cplusplus
extern "C" {
#endif

/// A client for performing sign-in with Play Games Services.
typedef struct PgsGamesSignInClient_ PgsGamesSignInClient;

typedef GniTask* (*PgsGamesSignInClient_isAuthenticatedCallback)();

typedef GniTask* (*PgsGamesSignInClient_signInCallback)();

typedef GniTask* (*PgsGamesSignInClient_requestServerSideAccessCallback)(String* server_client_id, bool force_refresh_token);

typedef GniTask* (*PgsGamesSignInClient_requestServerSideAccessWithScopesCallback)(String* server_client_id, bool force_refresh_token, List_AuthScope* scopes);

/// Wraps a JNI reference with PgsGamesSignInClient object.
/// @param jobj A JNI reference to be wrapped with PgsGamesSignInClient object.
/// @see PgsGamesSignInClient_destroy
PgsGamesSignInClient* PgsGamesSignInClient_wrapJniReference(jobject jobj);

jobject PgsGamesSignInClient_getJniReference(const PgsGamesSignInClient* pgs_games_sign_in_client);

PgsGamesSignInClient* PgsGamesSignInClient_implementInterface(PgsGamesSignInClient_isAuthenticatedCallback pgs_games_sign_in_client_is_authenticated_callback, PgsGamesSignInClient_signInCallback pgs_games_sign_in_client_sign_in_callback, PgsGamesSignInClient_requestServerSideAccessCallback pgs_games_sign_in_client_request_server_side_access_callback, PgsGamesSignInClient_requestServerSideAccessWithScopesCallback pgs_games_sign_in_client_request_server_side_access_with_scopes_callback);

/// Destroys pgs_games_sign_in_client and all internal resources related to it. This function should be
/// called when pgs_games_sign_in_client is no longer needed.
/// @param pgs_games_sign_in_client An object to be destroyed.
void PgsGamesSignInClient_destroy(const PgsGamesSignInClient* pgs_games_sign_in_client);

/// Returns the current authentication status via an AuthenticationResult.
///
/// If a sign-in flow is currently in progress (such as the automatic sign-in attempt during
/// game start), delivery of this call's result will be postponed until the current sign-in attempt
/// has completed.
///
/// This API is useful for understanding if your game has access to Play Games Services. This
/// method should be called when your game starts in order to conditionally enable or disable your
/// Play Games Services integration.
/// @return A GniTask providing an AuthenticationResult that indicates the current authentication
/// status.
GniTask* PgsGamesSignInClient_isAuthenticated(const PgsGamesSignInClient* pgs_games_sign_in_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsGamesSignInClient_isAuthenticated.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAuthenticationResult_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsGamesSignInClient_isAuthenticated.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsGamesSignInClient_isAuthenticated
/// @see PgsAuthenticationResult_destroy
GniTaskErrorCode PgsGamesSignInClient_isAuthenticated_getResult(const GniTask* task, PgsAuthenticationResult** out_result);

/// Manually requests that your game sign in with Play Games Services.
///
/// Note that a sign-in attempt will be made automatically when your game starts. Games will
/// only need to manually request to sign in if the automatic sign-in attempt failed.
/// @return A GniTask that signals the result of the sign-in attempt.
GniTask* PgsGamesSignInClient_signIn(const PgsGamesSignInClient* pgs_games_sign_in_client);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsGamesSignInClient_signIn.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call PgsAuthenticationResult_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsGamesSignInClient_signIn.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsGamesSignInClient_signIn
/// @see PgsAuthenticationResult_destroy
GniTaskErrorCode PgsGamesSignInClient_signIn_getResult(const GniTask* task, PgsAuthenticationResult** out_result);

/// Requests server-side access to Play Games Services for the currently signed-in player.
///
/// When requested, an authorization code is returned that can be used by your server to
/// exchange for an access token (and conditionally a refresh token when forceRefreshToken
/// is true). The access token may then be used by your server to access the Play Games
/// Services web APIs. This is commonly used to complete a sign-in flow by verifying the Play Games
/// Services player ID.
///
/// If forceRefreshToken is true, when exchanging the authorization code, a
/// refresh token will be returned in addition to the access token. The refresh token allows your
/// server to request additional access tokens, allowing your server to continue accesses Play
/// Games Services while the user is not actively playing your game.
/// @param serverClientId The client ID of the server that will perform the authorization code flow
/// exchange.
/// @param forceRefreshToken If true, when the returned authorization code is exchanged, a
/// refresh token will be included in addition to an access token.
/// @return A GniTask providing an OAuth 2.0 authorization code as a string. This code can be
/// exchanged by your server for an access token (and conditionally a refresh token) that can
/// be used to access the Play Games Services web APIs.
GniTask* PgsGamesSignInClient_requestServerSideAccess(const PgsGamesSignInClient* pgs_games_sign_in_client, String* server_client_id, bool force_refresh_token);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsGamesSignInClient_requestServerSideAccess.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call GniString_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsGamesSignInClient_requestServerSideAccess.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsGamesSignInClient_requestServerSideAccess
/// @see GniString_destroy
GniTaskErrorCode PgsGamesSignInClient_requestServerSideAccess_getResult(const GniTask* task, const char** out_result);

GniTask* PgsGamesSignInClient_requestServerSideAccessWithScopes(const PgsGamesSignInClient* pgs_games_sign_in_client, String* server_client_id, bool force_refresh_token, List_AuthScope* scopes);

/// Gets a result of an asynchronous operation represented by a GniTask. This function can only be
/// used with a GniTask returned from PgsGamesSignInClient_requestServerSideAccessWithScopes.
/// The out_result parameter will be set to the task's result if this function returns
/// GNI_TASK_SUCCESS, otherwise it will be undefined. Note that *out_result may be null for certain
/// successful tasks. Call AuthResponse_destroy when out_result is on longer needed.
/// @param task A GniTask returned from PgsGamesSignInClient_requestServerSideAccessWithScopes.
/// @param out_result An out-parameter which holds the result of a task that has completed
/// successfully.
/// @return A GniTaskErrorCode that tells about the success or failure of getting the results.
/// @see PgsGamesSignInClient_requestServerSideAccessWithScopes
/// @see AuthResponse_destroy
GniTaskErrorCode PgsGamesSignInClient_requestServerSideAccessWithScopes_getResult(const GniTask* task, AuthResponse** out_result);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT_H_
