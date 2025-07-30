#include "com/google/android/gms/games/leaderboard/leaderboard_buffer.hpp"
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

jclass LeaderboardBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/leaderboard/LeaderboardBuffer");
  return cached_class;
}

void LeaderboardBuffer::destroy(const LeaderboardBuffer* object)
{
  delete object;
}

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

