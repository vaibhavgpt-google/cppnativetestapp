#include "com/google/android/gms/games/leaderboard/leaderboard.h"

#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"

Leaderboard* Leaderboard_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Leaderboard*>(new ::com::google::android::gms::games::leaderboard::Leaderboard(jobj));
}

jobject Leaderboard_getJniReference(const Leaderboard* leaderboard) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->GetImpl();
}

Leaderboard* Leaderboard_implementInterface(Leaderboard_getLeaderboardIdCallback leaderboard_get_leaderboard_id_callback, Leaderboard_getDisplayNameCallback leaderboard_get_display_name_callback, Leaderboard_getIconImageUriCallback leaderboard_get_icon_image_uri_callback, Leaderboard_getScoreOrderCallback leaderboard_get_score_order_callback, Leaderboard_getVariantsCallback leaderboard_get_variants_callback) {
  return reinterpret_cast<Leaderboard*>(::com::google::android::gms::games::leaderboard::Leaderboard::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::leaderboard::Leaderboard::getLeaderboardIdCallback>(leaderboard_get_leaderboard_id_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::Leaderboard::getDisplayNameCallback>(leaderboard_get_display_name_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::Leaderboard::getIconImageUriCallback>(leaderboard_get_icon_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::Leaderboard::getScoreOrderCallback>(leaderboard_get_score_order_callback), reinterpret_cast<::com::google::android::gms::games::leaderboard::Leaderboard::getVariantsCallback>(leaderboard_get_variants_callback)));
}

void Leaderboard_destroy(const Leaderboard* leaderboard) {
  ::com::google::android::gms::games::leaderboard::Leaderboard::destroy(reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard));
}

String* Leaderboard_getLeaderboardId(const Leaderboard* leaderboard) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->getLeaderboardId());
}

String* Leaderboard_getDisplayName(const Leaderboard* leaderboard) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->getDisplayName());
}

Uri* Leaderboard_getIconImageUri(const Leaderboard* leaderboard) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->getIconImageUri());
}

int32_t Leaderboard_getScoreOrder(const Leaderboard* leaderboard) {
  return reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->getScoreOrder();
}

ArrayList_LeaderboardVariant* Leaderboard_getVariants(const Leaderboard* leaderboard) {
  return reinterpret_cast<ArrayList_LeaderboardVariant*>(&reinterpret_cast<const ::com::google::android::gms::games::leaderboard::Leaderboard*>(leaderboard)->getVariants());
}

int32_t Leaderboard_get_SCORE_ORDER_SMALLER_IS_BETTER() {
  return ::com::google::android::gms::games::leaderboard::Leaderboard::SCORE_ORDER_SMALLER_IS_BETTER;
}

int32_t Leaderboard_get_SCORE_ORDER_LARGER_IS_BETTER() {
  return ::com::google::android::gms::games::leaderboard::Leaderboard::SCORE_ORDER_LARGER_IS_BETTER;
}
