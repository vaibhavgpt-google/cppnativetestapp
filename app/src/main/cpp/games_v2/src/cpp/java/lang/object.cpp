#include "java/lang/object.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

jclass Object::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/lang/Object");
  return cached_class;
}

void Object::destroy(const Object* object)
{
  delete object;
}

}  // namespace lang
}  // namespace java

