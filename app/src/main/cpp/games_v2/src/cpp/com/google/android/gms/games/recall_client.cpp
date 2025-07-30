#include "com/google/android/gms/games/recall_client.hpp"
#include <memory>
#include "com/google/android/gms/games/recall_access.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject RecallClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "requestRecallAccess") == 0)
  {
    auto result = reinterpret_cast<RecallClient*>(object_pointer)->request_recall_access_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }

  return nullptr;
}

}  // namespace

RecallClient* RecallClient::ImplementInterface(requestRecallAccessCallback request_recall_access_callback)
{
  RecallClient* instance = new RecallClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/RecallClient", instance, RecallClientProxyCallback)));
  instance->request_recall_access_callback_ = request_recall_access_callback;
  return instance;
}

jclass RecallClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/RecallClient");
  return cached_class;
}

void RecallClient::destroy(const RecallClient* object)
{
  delete object;
}

::gni::Task& RecallClient::requestRecallAccess() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "requestRecallAccess", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

