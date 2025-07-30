#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
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

jclass GamesAbstractSafeParcelable::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/internal/GamesAbstractSafeParcelable");
  return cached_class;
}

void GamesAbstractSafeParcelable::destroy(const GamesAbstractSafeParcelable* object)
{
  delete object;
}

}  // namespace internal
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

