#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT

#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/player_buffer.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayersClient : virtual public ::gni::Object
{
public:
    using getCurrentPlayerIdCallback = ::gni::Task* (*)();
    using getCurrentPlayerCallback = ::gni::Task* (*)(bool);
    using loadPlayerCallback = ::gni::Task* (*)(const ::java::lang::String*);
    using getCompareProfileIntentCallback = ::gni::Task* (*)(const ::com::google::android::gms::games::Player*);
    using getCompareProfileIntentWithAlternativeNameHintsCallback = ::gni::Task* (*)(const ::java::lang::String*, const ::java::lang::String*, const ::java::lang::String*);
    using getPlayerSearchIntentCallback = ::gni::Task* (*)();
    using loadFriendsCallback = ::gni::Task* (*)(int32_t, bool);
    using loadMoreFriendsCallback = ::gni::Task* (*)(int32_t);

    static jclass GetClass();
    static void destroy(const PlayersClient* object);
    static PlayersClient* ImplementInterface(getCurrentPlayerIdCallback get_current_player_id_callback, getCurrentPlayerCallback get_current_player_callback, loadPlayerCallback load_player_callback, getCompareProfileIntentCallback get_compare_profile_intent_callback, getCompareProfileIntentWithAlternativeNameHintsCallback get_compare_profile_intent_with_alternative_name_hints_callback, getPlayerSearchIntentCallback get_player_search_intent_callback, loadFriendsCallback load_friends_callback, loadMoreFriendsCallback load_more_friends_callback);
    explicit PlayersClient(jobject object) : ::gni::Object(object) {}
    ~PlayersClient() override = default;
    static constexpr const char* EXTRA_PLAYER_SEARCH_RESULTS = "player_search_results";
    virtual ::gni::Task& getCurrentPlayerId() const;
    virtual ::gni::Task& getCurrentPlayer(bool forceReload) const;
    virtual ::gni::Task& loadPlayer(const ::java::lang::String& playerId) const;
    virtual ::gni::Task& getCompareProfileIntent(const ::com::google::android::gms::games::Player& player) const;
    virtual ::gni::Task& getCompareProfileIntentWithAlternativeNameHints(const ::java::lang::String& otherPlayerId, const ::java::lang::String& otherPlayerInGameName, const ::java::lang::String& currentPlayerInGameName) const;
    virtual ::gni::Task& getPlayerSearchIntent() const;
    virtual ::gni::Task& loadFriends(int32_t pageSize, bool forceReload) const;
    virtual ::gni::Task& loadMoreFriends(int32_t pageSize) const;
    getCurrentPlayerIdCallback get_current_player_id_callback_ = nullptr;
    getCurrentPlayerCallback get_current_player_callback_ = nullptr;
    loadPlayerCallback load_player_callback_ = nullptr;
    getCompareProfileIntentCallback get_compare_profile_intent_callback_ = nullptr;
    getCompareProfileIntentWithAlternativeNameHintsCallback get_compare_profile_intent_with_alternative_name_hints_callback_ = nullptr;
    getPlayerSearchIntentCallback get_player_search_intent_callback_ = nullptr;
    loadFriendsCallback load_friends_callback_ = nullptr;
    loadMoreFriendsCallback load_more_friends_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSCLIENT

