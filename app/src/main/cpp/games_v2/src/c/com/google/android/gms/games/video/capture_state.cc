#include "com/google/android/gms/games/video/capture_state.h"

#include "com/google/android/gms/games/video/capture_state.hpp"

CaptureState* CaptureState_wrapJniReference(jobject jobj) {
  return reinterpret_cast<CaptureState*>(new ::com::google::android::gms::games::video::CaptureState(jobj));
}

jobject CaptureState_getJniReference(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->GetImpl();
}

void CaptureState_destroy(const CaptureState* capture_state) {
  ::com::google::android::gms::games::video::CaptureState::destroy(reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state));
}

bool CaptureState_isCapturing(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->isCapturing();
}

int32_t CaptureState_getCaptureMode(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->getCaptureMode();
}

int32_t CaptureState_getCaptureQuality(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->getCaptureQuality();
}

bool CaptureState_isOverlayVisible(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->isOverlayVisible();
}

bool CaptureState_isPaused(const CaptureState* capture_state) {
  return reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->isPaused();
}

String* CaptureState_toString(const CaptureState* capture_state) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::video::CaptureState*>(capture_state)->toString());
}
