#include "com/google/android/gms/common/data/freezable.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace data {

jclass Freezable::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/data/Freezable");
  return cached_class;
}

void Freezable::destroy(const Freezable* object)
{
  delete object;
}

}  // namespace data
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

