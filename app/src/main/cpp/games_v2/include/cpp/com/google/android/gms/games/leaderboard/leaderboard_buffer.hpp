#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER

#include <memory>
#include "com/google/android/gms/common/data/entity_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace leaderboard {

class LeaderboardBuffer : public ::com::google::android::gms::common::data::EntityBuffer
{
public:
    static jclass GetClass();
    static void destroy(const LeaderboardBuffer* object);
    explicit LeaderboardBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::EntityBuffer(object) {}
    ~LeaderboardBuffer() override = default;
};

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDBUFFER

