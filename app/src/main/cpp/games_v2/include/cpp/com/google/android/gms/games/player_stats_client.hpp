#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT

#include <memory>
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/stats/player_stats.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerStatsClient : virtual public ::gni::Object
{
public:
    using loadPlayerStatsCallback = ::gni::Task* (*)(bool);

    static jclass GetClass();
    static void destroy(const PlayerStatsClient* object);
    static PlayerStatsClient* ImplementInterface(loadPlayerStatsCallback load_player_stats_callback);
    explicit PlayerStatsClient(jobject object) : ::gni::Object(object) {}
    ~PlayerStatsClient() override = default;
    virtual ::gni::Task& loadPlayerStats(bool forceReload) const;
    loadPlayerStatsCallback load_player_stats_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERSTATSCLIENT

