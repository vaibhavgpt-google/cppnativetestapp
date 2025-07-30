#include "java/lang/enum.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

jclass Enum::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/lang/Enum");
  return cached_class;
}

void Enum::destroy(const Enum* object)
{
  delete object;
}

}  // namespace lang
}  // namespace java

