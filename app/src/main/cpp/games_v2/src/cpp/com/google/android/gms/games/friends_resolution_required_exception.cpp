#include "com/google/android/gms/games/friends_resolution_required_exception.hpp"
#include <memory>
#include "com/google/android/gms/common/api/resolvable_api_exception.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass FriendsResolutionRequiredException::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/FriendsResolutionRequiredException");
  return cached_class;
}

void FriendsResolutionRequiredException::destroy(const FriendsResolutionRequiredException* object)
{
  delete object;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

