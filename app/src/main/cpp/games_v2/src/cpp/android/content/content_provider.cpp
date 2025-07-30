#include "android/content/content_provider.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {

jclass ContentProvider::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/content/ContentProvider");
  return cached_class;
}

void ContentProvider::destroy(const ContentProvider* object)
{
  delete object;
}

}  // namespace content
}  // namespace android

