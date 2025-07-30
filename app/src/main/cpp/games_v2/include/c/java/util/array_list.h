#ifndef JAVA_UTIL_ARRAYLIST_H_
#define JAVA_UTIL_ARRAYLIST_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LeaderboardVariant_ LeaderboardVariant;

typedef struct ArrayList_LeaderboardVariant_ ArrayList_LeaderboardVariant;

/// Wraps a JNI reference with ArrayList_LeaderboardVariant object.
/// @param jobj A JNI reference to be wrapped with ArrayList_LeaderboardVariant object.
/// @see ArrayList_LeaderboardVariant_destroy
ArrayList_LeaderboardVariant* ArrayList_LeaderboardVariant_wrapJniReference(jobject jobj);

jobject ArrayList_LeaderboardVariant_getJniReference(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant);

ArrayList_LeaderboardVariant* ArrayList_LeaderboardVariant_construct();

/// Destroys array_list_leaderboard_variant and all internal resources related to it. This function should be
/// called when array_list_leaderboard_variant is no longer needed.
/// @param array_list_leaderboard_variant An object to be destroyed.
void ArrayList_LeaderboardVariant_destroy(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant);

bool ArrayList_LeaderboardVariant_add(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant, LeaderboardVariant* e);

LeaderboardVariant* ArrayList_LeaderboardVariant_get(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant, int32_t index);

int32_t ArrayList_LeaderboardVariant_size(const ArrayList_LeaderboardVariant* array_list_leaderboard_variant);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // JAVA_UTIL_ARRAYLIST_H_
