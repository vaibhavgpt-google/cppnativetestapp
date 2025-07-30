#include "com/google/android/gms/games/events_client.hpp"
#include <memory>
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/event/event_buffer.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject EventsClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{

  return nullptr;
}

}  // namespace

EventsClient* EventsClient::ImplementInterface(loadCallback load_callback, loadByIdsCallback load_by_ids_callback, incrementCallback increment_callback)
{
  EventsClient* instance = new EventsClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/EventsClient", instance, EventsClientProxyCallback)));
  instance->load_callback_ = load_callback;
  instance->load_by_ids_callback_ = load_by_ids_callback;
  instance->increment_callback_ = increment_callback;
  return instance;
}

jclass EventsClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/EventsClient");
  return cached_class;
}

void EventsClient::destroy(const EventsClient* object)
{
  delete object;
}

::gni::Task& EventsClient::load(bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "load", "(Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload)).Get());
  return *ret;
}

::gni::Task& EventsClient::loadByIds(bool forceReload, const ::java::lang::String& eventIds) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadByIds", "(Z[Ljava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload, eventIds.GetImpl())).Get());
  return *ret;
}

void EventsClient::increment(const ::java::lang::String& eventId, int32_t incrementAmount) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "increment", "(Ljava/lang/String;I)V");
  env->CallVoidMethod(GetImpl(), method_id, eventId.GetImpl(), incrementAmount);
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

