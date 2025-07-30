#include "com/google/android/gms/common/api/releasable.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace api {

jclass Releasable::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/api/Releasable");
  return cached_class;
}

void Releasable::destroy(const Releasable* object)
{
  delete object;
}

}  // namespace api
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

