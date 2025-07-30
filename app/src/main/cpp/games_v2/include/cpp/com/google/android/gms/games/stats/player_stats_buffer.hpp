#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER

#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/stats/player_stats.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace stats {

class PlayerStatsBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const PlayerStatsBuffer* object);
    explicit PlayerStatsBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~PlayerStatsBuffer() override = default;
};

}  // namespace stats
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATSBUFFER

