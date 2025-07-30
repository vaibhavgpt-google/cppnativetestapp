#include "android/net/uri.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace net {

jclass Uri::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/net/Uri");
  return cached_class;
}

void Uri::destroy(const Uri* object)
{
  delete object;
}

}  // namespace net
}  // namespace android

