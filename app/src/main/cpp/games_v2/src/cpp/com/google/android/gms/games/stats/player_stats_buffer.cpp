#include "com/google/android/gms/games/stats/player_stats_buffer.hpp"
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

jclass PlayerStatsBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/stats/PlayerStatsBuffer");
  return cached_class;
}

void PlayerStatsBuffer::destroy(const PlayerStatsBuffer* object)
{
  delete object;
}

}  // namespace stats
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

