#include "android/database/cursor.h"

#include "android/database/cursor.hpp"

Cursor* Cursor_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Cursor*>(new ::android::database::Cursor(jobj));
}

jobject Cursor_getJniReference(const Cursor* cursor) {
  return reinterpret_cast<const ::android::database::Cursor*>(cursor)->GetImpl();
}

void Cursor_destroy(const Cursor* cursor) {
  ::android::database::Cursor::destroy(reinterpret_cast<const ::android::database::Cursor*>(cursor));
}
