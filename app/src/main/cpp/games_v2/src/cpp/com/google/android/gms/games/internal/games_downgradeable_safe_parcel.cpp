#include "com/google/android/gms/games/internal/games_downgradeable_safe_parcel.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace internal {

jclass GamesDowngradeableSafeParcel::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/internal/GamesDowngradeableSafeParcel");
  return cached_class;
}

void GamesDowngradeableSafeParcel::destroy(const GamesDowngradeableSafeParcel* object)
{
  delete object;
}

}  // namespace internal
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

