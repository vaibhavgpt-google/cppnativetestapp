#include "android/content/content_provider.h"

#include "android/content/content_provider.hpp"

ContentProvider* ContentProvider_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ContentProvider*>(new ::android::content::ContentProvider(jobj));
}

jobject ContentProvider_getJniReference(const ContentProvider* content_provider) {
  return reinterpret_cast<const ::android::content::ContentProvider*>(content_provider)->GetImpl();
}

void ContentProvider_destroy(const ContentProvider* content_provider) {
  ::android::content::ContentProvider::destroy(reinterpret_cast<const ::android::content::ContentProvider*>(content_provider));
}
