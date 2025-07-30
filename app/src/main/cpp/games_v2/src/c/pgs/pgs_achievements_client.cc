#include "pgs/pgs_achievements_client.h"

#include "com/google/android/gms/games/achievements_client.hpp"
#include "gni/gni_task_internal.h"

PgsAchievementsClient* PgsAchievementsClient_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsAchievementsClient*>(new ::com::google::android::gms::games::AchievementsClient(jobj));
}

jobject PgsAchievementsClient_getJniReference(const PgsAchievementsClient* pgs_achievements_client) {
  return reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->GetImpl();
}

PgsAchievementsClient* PgsAchievementsClient_implementInterface(PgsAchievementsClient_getAchievementsIntentCallback pgs_achievements_client_get_achievements_intent_callback, PgsAchievementsClient_loadCallback pgs_achievements_client_load_callback, PgsAchievementsClient_revealCallback pgs_achievements_client_reveal_callback, PgsAchievementsClient_revealImmediateCallback pgs_achievements_client_reveal_immediate_callback, PgsAchievementsClient_unlockCallback pgs_achievements_client_unlock_callback, PgsAchievementsClient_unlockImmediateCallback pgs_achievements_client_unlock_immediate_callback, PgsAchievementsClient_incrementCallback pgs_achievements_client_increment_callback, PgsAchievementsClient_incrementImmediateCallback pgs_achievements_client_increment_immediate_callback, PgsAchievementsClient_setStepsCallback pgs_achievements_client_set_steps_callback, PgsAchievementsClient_setStepsImmediateCallback pgs_achievements_client_set_steps_immediate_callback) {
  return reinterpret_cast<PgsAchievementsClient*>(::com::google::android::gms::games::AchievementsClient::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::AchievementsClient::getAchievementsIntentCallback>(pgs_achievements_client_get_achievements_intent_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::loadCallback>(pgs_achievements_client_load_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::revealCallback>(pgs_achievements_client_reveal_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::revealImmediateCallback>(pgs_achievements_client_reveal_immediate_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::unlockCallback>(pgs_achievements_client_unlock_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::unlockImmediateCallback>(pgs_achievements_client_unlock_immediate_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::incrementCallback>(pgs_achievements_client_increment_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::incrementImmediateCallback>(pgs_achievements_client_increment_immediate_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::setStepsCallback>(pgs_achievements_client_set_steps_callback), reinterpret_cast<::com::google::android::gms::games::AchievementsClient::setStepsImmediateCallback>(pgs_achievements_client_set_steps_immediate_callback)));
}

void PgsAchievementsClient_destroy(const PgsAchievementsClient* pgs_achievements_client) {
  ::com::google::android::gms::games::AchievementsClient::destroy(reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client));
}

GniTask* PgsAchievementsClient_getAchievementsIntent(const PgsAchievementsClient* pgs_achievements_client) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->getAchievementsIntent());
}

GniTaskErrorCode PgsAchievementsClient_getAchievementsIntent_getResult(
    const GniTask* task, Intent** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Intent_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

GniTask* PgsAchievementsClient_load(const PgsAchievementsClient* pgs_achievements_client, bool force_reload) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->load(force_reload));
}

GniTaskErrorCode PgsAchievementsClient_load_getResult(
    const GniTask* task, PgsAnnotatedData_AchievementBuffer** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = PgsAnnotatedData_AchievementBuffer_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

void PgsAchievementsClient_reveal(const PgsAchievementsClient* pgs_achievements_client, String* id) {
  reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->reveal(*reinterpret_cast<const ::java::lang::String*>(id));
}

GniTask* PgsAchievementsClient_revealImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->revealImmediate(*reinterpret_cast<const ::java::lang::String*>(id)));
}

void PgsAchievementsClient_unlock(const PgsAchievementsClient* pgs_achievements_client, String* id) {
  reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->unlock(*reinterpret_cast<const ::java::lang::String*>(id));
}

GniTask* PgsAchievementsClient_unlockImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->unlockImmediate(*reinterpret_cast<const ::java::lang::String*>(id)));
}

void PgsAchievementsClient_increment(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps) {
  reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->increment(*reinterpret_cast<const ::java::lang::String*>(id), num_steps);
}

GniTask* PgsAchievementsClient_incrementImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->incrementImmediate(*reinterpret_cast<const ::java::lang::String*>(id), num_steps));
}

GniTaskErrorCode PgsAchievementsClient_incrementImmediate_getResult(
    const GniTask* task, Boolean** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Boolean_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}

void PgsAchievementsClient_setSteps(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps) {
  reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->setSteps(*reinterpret_cast<const ::java::lang::String*>(id), num_steps);
}

GniTask* PgsAchievementsClient_setStepsImmediate(const PgsAchievementsClient* pgs_achievements_client, String* id, int32_t num_steps) {
  return reinterpret_cast<GniTask*>(&reinterpret_cast<const ::com::google::android::gms::games::AchievementsClient*>(pgs_achievements_client)->setStepsImmediate(*reinterpret_cast<const ::java::lang::String*>(id), num_steps));
}

GniTaskErrorCode PgsAchievementsClient_setStepsImmediate_getResult(
    const GniTask* task, Boolean** out_result) {
  jobject result;
  GniTaskErrorCode error_code = GniTask_getResult(task, &result);
  if (error_code != GNI_TASK_SUCCESS) {
    return error_code;
  }

  if (result == nullptr) {
    *out_result = nullptr;
    return GNI_TASK_SUCCESS;
  }

  *out_result = Boolean_wrapJniReference(result);
  return *out_result != nullptr ? GNI_TASK_SUCCESS : GNI_TASK_UNKNOWN_ERROR;
}
