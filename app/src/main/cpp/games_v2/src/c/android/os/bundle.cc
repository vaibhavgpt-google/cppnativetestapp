#include "android/os/bundle.h"

#include "android/os/bundle.hpp"

Bundle* Bundle_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Bundle*>(new ::android::os::Bundle(jobj));
}

jobject Bundle_getJniReference(const Bundle* bundle) {
  return reinterpret_cast<const ::android::os::Bundle*>(bundle)->GetImpl();
}

void Bundle_destroy(const Bundle* bundle) {
  ::android::os::Bundle::destroy(reinterpret_cast<const ::android::os::Bundle*>(bundle));
}
