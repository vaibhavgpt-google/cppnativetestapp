#include "android/content/content_values.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {

jclass ContentValues::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/content/ContentValues");
  return cached_class;
}

void ContentValues::destroy(const ContentValues* object)
{
  delete object;
}

}  // namespace content
}  // namespace android

