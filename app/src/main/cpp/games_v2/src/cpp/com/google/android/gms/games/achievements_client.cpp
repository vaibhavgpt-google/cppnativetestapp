#include "com/google/android/gms/games/achievements_client.hpp"
#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/boolean.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject AchievementsClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getAchievementsIntent") == 0)
  {
    auto result = reinterpret_cast<AchievementsClient*>(object_pointer)->get_achievements_intent_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "reveal") == 0)
  {
    reinterpret_cast<AchievementsClient*>(object_pointer)->reveal_callback_(new ::java::lang::String(arguments[0]));
  }
  else if (strcmp(method_name, "revealImmediate") == 0)
  {
    auto result = reinterpret_cast<AchievementsClient*>(object_pointer)->reveal_immediate_callback_(new ::java::lang::String(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "unlock") == 0)
  {
    reinterpret_cast<AchievementsClient*>(object_pointer)->unlock_callback_(new ::java::lang::String(arguments[0]));
  }
  else if (strcmp(method_name, "unlockImmediate") == 0)
  {
    auto result = reinterpret_cast<AchievementsClient*>(object_pointer)->unlock_immediate_callback_(new ::java::lang::String(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }

  return nullptr;
}

}  // namespace

AchievementsClient* AchievementsClient::ImplementInterface(getAchievementsIntentCallback get_achievements_intent_callback, loadCallback load_callback, revealCallback reveal_callback, revealImmediateCallback reveal_immediate_callback, unlockCallback unlock_callback, unlockImmediateCallback unlock_immediate_callback, incrementCallback increment_callback, incrementImmediateCallback increment_immediate_callback, setStepsCallback set_steps_callback, setStepsImmediateCallback set_steps_immediate_callback)
{
  AchievementsClient* instance = new AchievementsClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/AchievementsClient", instance, AchievementsClientProxyCallback)));
  instance->get_achievements_intent_callback_ = get_achievements_intent_callback;
  instance->load_callback_ = load_callback;
  instance->reveal_callback_ = reveal_callback;
  instance->reveal_immediate_callback_ = reveal_immediate_callback;
  instance->unlock_callback_ = unlock_callback;
  instance->unlock_immediate_callback_ = unlock_immediate_callback;
  instance->increment_callback_ = increment_callback;
  instance->increment_immediate_callback_ = increment_immediate_callback;
  instance->set_steps_callback_ = set_steps_callback;
  instance->set_steps_immediate_callback_ = set_steps_immediate_callback;
  return instance;
}

jclass AchievementsClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/AchievementsClient");
  return cached_class;
}

void AchievementsClient::destroy(const AchievementsClient* object)
{
  delete object;
}

::gni::Task& AchievementsClient::getAchievementsIntent() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAchievementsIntent", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& AchievementsClient::load(bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "load", "(Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload)).Get());
  return *ret;
}

void AchievementsClient::reveal(const ::java::lang::String& id) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "reveal", "(Ljava/lang/String;)V");
  env->CallVoidMethod(GetImpl(), method_id, id.GetImpl());
}

::gni::Task& AchievementsClient::revealImmediate(const ::java::lang::String& id) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "revealImmediate", "(Ljava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, id.GetImpl())).Get());
  return *ret;
}

void AchievementsClient::unlock(const ::java::lang::String& id) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "unlock", "(Ljava/lang/String;)V");
  env->CallVoidMethod(GetImpl(), method_id, id.GetImpl());
}

::gni::Task& AchievementsClient::unlockImmediate(const ::java::lang::String& id) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "unlockImmediate", "(Ljava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, id.GetImpl())).Get());
  return *ret;
}

void AchievementsClient::increment(const ::java::lang::String& id, int32_t numSteps) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "increment", "(Ljava/lang/String;I)V");
  env->CallVoidMethod(GetImpl(), method_id, id.GetImpl(), numSteps);
}

::gni::Task& AchievementsClient::incrementImmediate(const ::java::lang::String& id, int32_t numSteps) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "incrementImmediate", "(Ljava/lang/String;I)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, id.GetImpl(), numSteps)).Get());
  return *ret;
}

void AchievementsClient::setSteps(const ::java::lang::String& id, int32_t numSteps) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setSteps", "(Ljava/lang/String;I)V");
  env->CallVoidMethod(GetImpl(), method_id, id.GetImpl(), numSteps);
}

::gni::Task& AchievementsClient::setStepsImmediate(const ::java::lang::String& id, int32_t numSteps) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "setStepsImmediate", "(Ljava/lang/String;I)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, id.GetImpl(), numSteps)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

