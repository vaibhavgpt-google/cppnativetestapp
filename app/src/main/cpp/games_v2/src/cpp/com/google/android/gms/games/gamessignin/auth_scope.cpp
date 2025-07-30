#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/enum.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace gamessignin {

jclass AuthScope::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/gamessignin/AuthScope");
  return cached_class;
}

void AuthScope::destroy(const AuthScope* object)
{
  delete object;
}

::com::google::android::gms::games::gamessignin::AuthScope& AuthScope::values()
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "values", "()[Lcom/google/android/gms/games/gamessignin/AuthScope;");
  ::com::google::android::gms::games::gamessignin::AuthScope* ret = new ::com::google::android::gms::games::gamessignin::AuthScope(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::gamessignin::AuthScope& AuthScope::valueOf(const ::java::lang::String& name)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "valueOf", "(Ljava/lang/String;)Lcom/google/android/gms/games/gamessignin/AuthScope;");
  ::com::google::android::gms::games::gamessignin::AuthScope* ret = new ::com::google::android::gms::games::gamessignin::AuthScope(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, name.GetImpl())).Get());
  return *ret;
}

::java::lang::String& AuthScope::getValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getValue", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace gamessignin
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

