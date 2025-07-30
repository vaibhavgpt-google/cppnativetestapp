#include "android/content/content_values.h"

#include "android/content/content_values.hpp"

ContentValues* ContentValues_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ContentValues*>(new ::android::content::ContentValues(jobj));
}

jobject ContentValues_getJniReference(const ContentValues* content_values) {
  return reinterpret_cast<const ::android::content::ContentValues*>(content_values)->GetImpl();
}

void ContentValues_destroy(const ContentValues* content_values) {
  ::android::content::ContentValues::destroy(reinterpret_cast<const ::android::content::ContentValues*>(content_values));
}
