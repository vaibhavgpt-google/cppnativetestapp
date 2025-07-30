#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER_H_

#include <cstdint>
#include <jni.h>
#include "android/content/content_values.h"
#include "android/content/pm/provider_info.h"
#include "android/database/cursor.h"
#include "android/net/uri.h"
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PlayGamesInitProvider_ PlayGamesInitProvider;

/// Wraps a JNI reference with PlayGamesInitProvider object.
/// @param jobj A JNI reference to be wrapped with PlayGamesInitProvider object.
/// @see PlayGamesInitProvider_destroy
PlayGamesInitProvider* PlayGamesInitProvider_wrapJniReference(jobject jobj);

jobject PlayGamesInitProvider_getJniReference(const PlayGamesInitProvider* play_games_init_provider);

PlayGamesInitProvider* PlayGamesInitProvider_construct();

/// Destroys play_games_init_provider and all internal resources related to it. This function should be
/// called when play_games_init_provider is no longer needed.
/// @param play_games_init_provider An object to be destroyed.
void PlayGamesInitProvider_destroy(const PlayGamesInitProvider* play_games_init_provider);

void PlayGamesInitProvider_attachInfo(const PlayGamesInitProvider* play_games_init_provider, jobject context, ProviderInfo* info);

bool PlayGamesInitProvider_onCreate(const PlayGamesInitProvider* play_games_init_provider);

Cursor* PlayGamesInitProvider_query(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, String* projection, String* selection, String* selection_args, String* sort_order);

String* PlayGamesInitProvider_getType(const PlayGamesInitProvider* play_games_init_provider, Uri* uri);

Uri* PlayGamesInitProvider_insert(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, ContentValues* values);

int32_t PlayGamesInitProvider_delete_(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, String* selection, String* selection_args);

int32_t PlayGamesInitProvider_update(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, ContentValues* values, String* selection, String* selection_args);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER_H_
