#include "java/lang/long.h"

#include "java/lang/long.hpp"

Long* Long_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Long*>(new ::java::lang::Long(jobj));
}

jobject Long_getJniReference(const Long* _long) {
  return reinterpret_cast<const ::java::lang::Long*>(_long)->GetImpl();
}

Long* Long_construct(int64_t value) {
  return reinterpret_cast<Long*>(new ::java::lang::Long(value));
}

void Long_destroy(const Long* _long) {
  ::java::lang::Long::destroy(reinterpret_cast<const ::java::lang::Long*>(_long));
}

int64_t Long_longValue(const Long* _long) {
  return reinterpret_cast<const ::java::lang::Long*>(_long)->longValue();
}
