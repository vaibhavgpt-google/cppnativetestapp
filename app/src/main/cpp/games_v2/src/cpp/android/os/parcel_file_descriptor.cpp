#include "android/os/parcel_file_descriptor.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace os {

jclass ParcelFileDescriptor::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/os/ParcelFileDescriptor");
  return cached_class;
}

void ParcelFileDescriptor::destroy(const ParcelFileDescriptor* object)
{
  delete object;
}

}  // namespace os
}  // namespace android

