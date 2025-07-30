#include "com/google/android/gms/games/provider/play_games_init_provider.h"

#include "com/google/android/gms/games/provider/play_games_init_provider.hpp"

PlayGamesInitProvider* PlayGamesInitProvider_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PlayGamesInitProvider*>(new ::com::google::android::gms::games::provider::PlayGamesInitProvider(jobj));
}

jobject PlayGamesInitProvider_getJniReference(const PlayGamesInitProvider* play_games_init_provider) {
  return reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->GetImpl();
}

PlayGamesInitProvider* PlayGamesInitProvider_construct() {
  return reinterpret_cast<PlayGamesInitProvider*>(new ::com::google::android::gms::games::provider::PlayGamesInitProvider());
}

void PlayGamesInitProvider_destroy(const PlayGamesInitProvider* play_games_init_provider) {
  ::com::google::android::gms::games::provider::PlayGamesInitProvider::destroy(reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider));
}

void PlayGamesInitProvider_attachInfo(const PlayGamesInitProvider* play_games_init_provider, jobject context, ProviderInfo* info) {
  reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->attachInfo(context, *reinterpret_cast<const ::android::content::pm::ProviderInfo*>(info));
}

bool PlayGamesInitProvider_onCreate(const PlayGamesInitProvider* play_games_init_provider) {
  return reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->onCreate();
}

Cursor* PlayGamesInitProvider_query(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, String* projection, String* selection, String* selection_args, String* sort_order) {
  return reinterpret_cast<Cursor*>(&reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->query(*reinterpret_cast<const ::android::net::Uri*>(uri), *reinterpret_cast<const ::java::lang::String*>(projection), *reinterpret_cast<const ::java::lang::String*>(selection), *reinterpret_cast<const ::java::lang::String*>(selection_args), *reinterpret_cast<const ::java::lang::String*>(sort_order)));
}

String* PlayGamesInitProvider_getType(const PlayGamesInitProvider* play_games_init_provider, Uri* uri) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->getType(*reinterpret_cast<const ::android::net::Uri*>(uri)));
}

Uri* PlayGamesInitProvider_insert(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, ContentValues* values) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->insert(*reinterpret_cast<const ::android::net::Uri*>(uri), *reinterpret_cast<const ::android::content::ContentValues*>(values)));
}

int32_t PlayGamesInitProvider_delete_(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, String* selection, String* selection_args) {
  return reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->delete_(*reinterpret_cast<const ::android::net::Uri*>(uri), *reinterpret_cast<const ::java::lang::String*>(selection), *reinterpret_cast<const ::java::lang::String*>(selection_args));
}

int32_t PlayGamesInitProvider_update(const PlayGamesInitProvider* play_games_init_provider, Uri* uri, ContentValues* values, String* selection, String* selection_args) {
  return reinterpret_cast<const ::com::google::android::gms::games::provider::PlayGamesInitProvider*>(play_games_init_provider)->update(*reinterpret_cast<const ::android::net::Uri*>(uri), *reinterpret_cast<const ::android::content::ContentValues*>(values), *reinterpret_cast<const ::java::lang::String*>(selection), *reinterpret_cast<const ::java::lang::String*>(selection_args));
}
