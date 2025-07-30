#include "java/lang/boolean.h"

#include "java/lang/boolean.hpp"

Boolean* Boolean_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Boolean*>(new ::java::lang::Boolean(jobj));
}

jobject Boolean_getJniReference(const Boolean* boolean) {
  return reinterpret_cast<const ::java::lang::Boolean*>(boolean)->GetImpl();
}

Boolean* Boolean_construct(bool value) {
  return reinterpret_cast<Boolean*>(new ::java::lang::Boolean(value));
}

void Boolean_destroy(const Boolean* boolean) {
  ::java::lang::Boolean::destroy(reinterpret_cast<const ::java::lang::Boolean*>(boolean));
}

bool Boolean_booleanValue(const Boolean* boolean) {
  return reinterpret_cast<const ::java::lang::Boolean*>(boolean)->booleanValue();
}
