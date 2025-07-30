#include "java/lang/long.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

namespace {

jobject CreateJavaLongObject(int64_t value) {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(Long::GetClass(), "<init>", "(J)V");
  return env->NewObject(Long::GetClass(), method_id, value);
}

}  // namespace

jclass Long::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/lang/Long");
  return cached_class;
}

void Long::destroy(const Long* object)
{
  delete object;
}

Long::Long(int64_t value) : Long(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaLongObject(value)).Get()) {}

int64_t Long::longValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "longValue", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace lang
}  // namespace java

