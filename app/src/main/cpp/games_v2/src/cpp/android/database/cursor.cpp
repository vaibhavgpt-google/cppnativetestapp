#include "android/database/cursor.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace database {

jclass Cursor::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("android/database/Cursor");
  return cached_class;
}

void Cursor::destroy(const Cursor* object)
{
  delete object;
}

}  // namespace database
}  // namespace android

