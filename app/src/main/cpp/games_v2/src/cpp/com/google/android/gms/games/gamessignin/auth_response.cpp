#include "com/google/android/gms/games/gamessignin/auth_response.hpp"
#include <memory>
#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/object.hpp"
#include "java/lang/string.hpp"
#include "java/util/list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace gamessignin {

namespace {

jobject CreateJavaAuthResponseObject(const ::java::lang::String& authCode, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& grantedScopes) {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(AuthResponse::GetClass(), "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
  return env->NewObject(AuthResponse::GetClass(), method_id, authCode.GetImpl(), grantedScopes.GetImpl());
}

}  // namespace

jclass AuthResponse::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/gamessignin/AuthResponse");
  return cached_class;
}

void AuthResponse::destroy(const AuthResponse* object)
{
  delete object;
}

AuthResponse::AuthResponse(const ::java::lang::String& authCode, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& grantedScopes) : AuthResponse(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaAuthResponseObject(authCode, grantedScopes)).Get()) {}

::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& AuthResponse::getGrantedScopes() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getGrantedScopes", "()Ljava/util/List;");
  ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>* ret = new ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& AuthResponse::getAuthCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAuthCode", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool AuthResponse::equals(const ::java::lang::Object& o) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "equals", "(Ljava/lang/Object;)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, o.GetImpl());
  return ret;
}

int32_t AuthResponse::hashCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hashCode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& AuthResponse::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace gamessignin
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

