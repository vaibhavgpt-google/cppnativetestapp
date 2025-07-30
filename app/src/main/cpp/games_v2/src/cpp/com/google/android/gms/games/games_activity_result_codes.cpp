#include "com/google/android/gms/games/games_activity_result_codes.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass GamesActivityResultCodes::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/GamesActivityResultCodes");
  return cached_class;
}

void GamesActivityResultCodes::destroy(const GamesActivityResultCodes* object)
{
  delete object;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

