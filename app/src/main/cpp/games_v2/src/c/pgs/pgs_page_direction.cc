#include "pgs/pgs_page_direction.h"

#include "com/google/android/gms/games/page_direction.hpp"

PgsPageDirection* PgsPageDirection_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPageDirection*>(new ::com::google::android::gms::games::PageDirection(jobj));
}

jobject PgsPageDirection_getJniReference(const PgsPageDirection* pgs_page_direction) {
  return reinterpret_cast<const ::com::google::android::gms::games::PageDirection*>(pgs_page_direction)->GetImpl();
}

void PgsPageDirection_destroy(const PgsPageDirection* pgs_page_direction) {
  ::com::google::android::gms::games::PageDirection::destroy(reinterpret_cast<const ::com::google::android::gms::games::PageDirection*>(pgs_page_direction));
}

int32_t PgsPageDirection_get_NONE() {
  return ::com::google::android::gms::games::PageDirection::NONE;
}

int32_t PgsPageDirection_get_NEXT() {
  return ::com::google::android::gms::games::PageDirection::NEXT;
}

int32_t PgsPageDirection_get_PREV() {
  return ::com::google::android::gms::games::PageDirection::PREV;
}
