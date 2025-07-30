#include "android/os/bundle.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace os {

jclass Bundle::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/os/Bundle");
  return cached_class;
}

void Bundle::destroy(const Bundle* object)
{
  delete object;
}

}  // namespace os
}  // namespace android

