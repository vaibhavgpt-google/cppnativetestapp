#include "java/util/array_list.h"

#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"
#include "java/util/array_list.hpp"

ArrayList_LeaderboardVariant* ArrayList_LeaderboardVariant_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ArrayList_LeaderboardVariant*>(new ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>(jobj));
}

jobject ArrayList_LeaderboardVariant_getJniReference(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant) {
  return reinterpret_cast<const ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>*>(array_list_leaderboard_variant)->GetImpl();
}

ArrayList_LeaderboardVariant* ArrayList_LeaderboardVariant_construct() {
  return reinterpret_cast<ArrayList_LeaderboardVariant*>(new ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>());
}

void ArrayList_LeaderboardVariant_destroy(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant) {
  ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>::destroy(reinterpret_cast<const ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>*>(array_list_leaderboard_variant));
}

bool ArrayList_LeaderboardVariant_add(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant, LeaderboardVariant* e) {
  return reinterpret_cast<const ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>*>(array_list_leaderboard_variant)->add(*reinterpret_cast<const ::com::google::android::gms::games::leaderboard::LeaderboardVariant*>(e));
}

LeaderboardVariant* ArrayList_LeaderboardVariant_get(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant, int32_t index) {
  return reinterpret_cast<LeaderboardVariant*>(&reinterpret_cast<const ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>*>(array_list_leaderboard_variant)->get(index));
}

int32_t ArrayList_LeaderboardVariant_size(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant) {
  return reinterpret_cast<const ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>*>(array_list_leaderboard_variant)->size();
}
