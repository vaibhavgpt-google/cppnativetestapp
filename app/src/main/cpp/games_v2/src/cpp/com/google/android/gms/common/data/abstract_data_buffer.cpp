#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
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

jclass AbstractDataBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/data/AbstractDataBuffer");
  return cached_class;
}

void AbstractDataBuffer::destroy(const AbstractDataBuffer* object)
{
  delete object;
}

}  // namespace data
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

