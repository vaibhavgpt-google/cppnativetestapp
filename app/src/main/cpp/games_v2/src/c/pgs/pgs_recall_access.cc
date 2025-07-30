#include "pgs/pgs_recall_access.h"

#include "com/google/android/gms/games/recall_access.hpp"

PgsRecallAccess* PgsRecallAccess_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsRecallAccess*>(new ::com::google::android::gms::games::RecallAccess(jobj));
}

jobject PgsRecallAccess_getJniReference(const PgsRecallAccess* pgs_recall_access) {
  return reinterpret_cast<const ::com::google::android::gms::games::RecallAccess*>(pgs_recall_access)->GetImpl();
}

void PgsRecallAccess_destroy(const PgsRecallAccess* pgs_recall_access) {
  ::com::google::android::gms::games::RecallAccess::destroy(reinterpret_cast<const ::com::google::android::gms::games::RecallAccess*>(pgs_recall_access));
}

String* PgsRecallAccess_getSessionId(const PgsRecallAccess* pgs_recall_access) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::RecallAccess*>(pgs_recall_access)->getSessionId());
}

int32_t PgsRecallAccess_hashCode(const PgsRecallAccess* pgs_recall_access) {
  return reinterpret_cast<const ::com::google::android::gms::games::RecallAccess*>(pgs_recall_access)->hashCode();
}
