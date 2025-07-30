#include "android/content/pm/provider_info.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {
namespace pm {

jclass ProviderInfo::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/content/pm/ProviderInfo");
  return cached_class;
}

void ProviderInfo::destroy(const ProviderInfo* object)
{
  delete object;
}

}  // namespace pm
}  // namespace content
}  // namespace android

