#include "java/lang/boolean.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

namespace {

jobject CreateJavaBooleanObject(bool value) {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(Boolean::GetClass(), "<init>", "(Z)V");
  return env->NewObject(Boolean::GetClass(), method_id, value);
}

}  // namespace

jclass Boolean::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/lang/Boolean");
  return cached_class;
}

void Boolean::destroy(const Boolean* object)
{
  delete object;
}

Boolean::Boolean(bool value) : Boolean(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaBooleanObject(value)).Get()) {}

bool Boolean::booleanValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "booleanValue", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace lang
}  // namespace java

