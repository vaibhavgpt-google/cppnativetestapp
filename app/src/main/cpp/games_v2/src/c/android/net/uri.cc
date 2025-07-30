#include "android/net/uri.h"

#include "android/net/uri.hpp"

Uri* Uri_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Uri*>(new ::android::net::Uri(jobj));
}

jobject Uri_getJniReference(const Uri* uri) {
  return reinterpret_cast<const ::android::net::Uri*>(uri)->GetImpl();
}

void Uri_destroy(const Uri* uri) {
  ::android::net::Uri::destroy(reinterpret_cast<const ::android::net::Uri*>(uri));
}
