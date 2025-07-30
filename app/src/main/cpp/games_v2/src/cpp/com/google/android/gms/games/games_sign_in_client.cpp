#include "com/google/android/gms/games/games_sign_in_client.hpp"
#include <memory>
#include "com/google/android/gms/games/authentication_result.hpp"
#include "com/google/android/gms/games/gamessignin/auth_response.hpp"
#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"
#include "java/util/list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject GamesSignInClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "isAuthenticated") == 0)
  {
    auto result = reinterpret_cast<GamesSignInClient*>(object_pointer)->is_authenticated_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "signIn") == 0)
  {
    auto result = reinterpret_cast<GamesSignInClient*>(object_pointer)->sign_in_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }

  return nullptr;
}

}  // namespace

GamesSignInClient* GamesSignInClient::ImplementInterface(isAuthenticatedCallback is_authenticated_callback, signInCallback sign_in_callback, requestServerSideAccessCallback request_server_side_access_callback, requestServerSideAccessWithScopesCallback request_server_side_access_with_scopes_callback)
{
  GamesSignInClient* instance = new GamesSignInClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/GamesSignInClient", instance, GamesSignInClientProxyCallback)));
  instance->is_authenticated_callback_ = is_authenticated_callback;
  instance->sign_in_callback_ = sign_in_callback;
  instance->request_server_side_access_callback_ = request_server_side_access_callback;
  instance->request_server_side_access_with_scopes_callback_ = request_server_side_access_with_scopes_callback;
  return instance;
}

jclass GamesSignInClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/GamesSignInClient");
  return cached_class;
}

void GamesSignInClient::destroy(const GamesSignInClient* object)
{
  delete object;
}

::gni::Task& GamesSignInClient::isAuthenticated() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isAuthenticated", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& GamesSignInClient::signIn() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "signIn", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& GamesSignInClient::requestServerSideAccess(const ::java::lang::String& serverClientId, bool forceRefreshToken) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "requestServerSideAccess", "(Ljava/lang/String;Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, serverClientId.GetImpl(), forceRefreshToken)).Get());
  return *ret;
}

::gni::Task& GamesSignInClient::requestServerSideAccessWithScopes(const ::java::lang::String& serverClientId, bool forceRefreshToken, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& scopes) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "requestServerSideAccessWithScopes", "(Ljava/lang/String;ZLjava/util/List;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, serverClientId.GetImpl(), forceRefreshToken, scopes.GetImpl())).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

