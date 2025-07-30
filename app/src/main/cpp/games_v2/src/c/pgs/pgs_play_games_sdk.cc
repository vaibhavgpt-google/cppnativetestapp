#include "pgs/pgs_play_games_sdk.h"

#include "com/google/android/gms/games/play_games_sdk.hpp"

PgsPlayGamesSdk* PgsPlayGamesSdk_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayGamesSdk*>(new ::com::google::android::gms::games::PlayGamesSdk(jobj));
}

jobject PgsPlayGamesSdk_getJniReference(const PgsPlayGamesSdk* pgs_play_games_sdk) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayGamesSdk*>(pgs_play_games_sdk)->GetImpl();
}

void PgsPlayGamesSdk_destroy(const PgsPlayGamesSdk* pgs_play_games_sdk) {
  ::com::google::android::gms::games::PlayGamesSdk::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayGamesSdk*>(pgs_play_games_sdk));
}

void PgsPlayGamesSdk_initialize(jobject context) {
  ::com::google::android::gms::games::PlayGamesSdk::initialize(context);
}

int32_t PgsPlayGamesSdk_get_MIN_ANDROID_API_VERSION() {
  return ::com::google::android::gms::games::PlayGamesSdk::MIN_ANDROID_API_VERSION;
}
