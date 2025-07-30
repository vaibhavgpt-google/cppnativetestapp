#include "com/google/android/gms/common/internal/safeparcel/abstract_safe_parcelable.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace internal {
namespace safeparcel {

jclass AbstractSafeParcelable::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable");
  return cached_class;
}

void AbstractSafeParcelable::destroy(const AbstractSafeParcelable* object)
{
  delete object;
}

}  // namespace safeparcel
}  // namespace internal
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

