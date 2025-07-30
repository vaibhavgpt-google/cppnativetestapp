#include "com/google/android/gms/common/api/common_status_codes.hpp"
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

jclass CommonStatusCodes::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/common/api/CommonStatusCodes");
  return cached_class;
}

void CommonStatusCodes::destroy(const CommonStatusCodes* object)
{
  delete object;
}

}  // namespace api
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

