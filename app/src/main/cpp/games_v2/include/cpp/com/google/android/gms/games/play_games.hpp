#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES

#include <memory>
#include "com/google/android/gms/games/achievements_client.hpp"
#include "com/google/android/gms/games/events_client.hpp"
#include "com/google/android/gms/games/games_sign_in_client.hpp"
#include "com/google/android/gms/games/leaderboards_client.hpp"
#include "com/google/android/gms/games/player_stats_client.hpp"
#include "com/google/android/gms/games/players_client.hpp"
#include "com/google/android/gms/games/recall_client.hpp"
#include "com/google/android/gms/games/snapshots_client.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayGames : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const PlayGames* object);
    explicit PlayGames(jobject object) : ::gni::Object(object) {}
    ~PlayGames() override = default;
    static ::com::google::android::gms::games::AchievementsClient& getAchievementsClient(const jobject activity);
    static ::com::google::android::gms::games::EventsClient& getEventsClient(const jobject activity);
    static ::com::google::android::gms::games::GamesSignInClient& getGamesSignInClient(const jobject activity);
    static ::com::google::android::gms::games::RecallClient& getRecallClient(const jobject activity);
    static ::com::google::android::gms::games::LeaderboardsClient& getLeaderboardsClient(const jobject activity);
    static ::com::google::android::gms::games::PlayersClient& getPlayersClient(const jobject activity);
    static ::com::google::android::gms::games::PlayerStatsClient& getPlayerStatsClient(const jobject activity);
    static ::com::google::android::gms::games::SnapshotsClient& getSnapshotsClient(const jobject activity);
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMES

