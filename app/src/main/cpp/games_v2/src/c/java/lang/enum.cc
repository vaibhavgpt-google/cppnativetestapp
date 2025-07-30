#include "java/lang/enum.h"

#include "java/lang/enum.hpp"

Enum* Enum_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Enum*>(new ::java::lang::Enum(jobj));
}

jobject Enum_getJniReference(const Enum* _enum) {
  return reinterpret_cast<const ::java::lang::Enum*>(_enum)->GetImpl();
}

void Enum_destroy(const Enum* _enum) {
  ::java::lang::Enum::destroy(reinterpret_cast<const ::java::lang::Enum*>(_enum));
}
