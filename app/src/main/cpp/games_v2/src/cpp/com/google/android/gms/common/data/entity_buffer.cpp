#include "com/google/android/gms/common/data/entity_buffer.hpp"
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

jclass EntityBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/data/EntityBuffer");
  return cached_class;
}

void EntityBuffer::destroy(const EntityBuffer* object)
{
  delete object;
}

}  // namespace data
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

