#include "java/util/list.hpp"
#include <memory>
#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace util {

template <class T>
jclass List<T>::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/util/List");
  return cached_class;
}

template <class T>
void List<T>::destroy(const List<T>* object)
{
  delete object;
}

template <class T>
bool List<T>::add(const T& e) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "add", "(Ljava/lang/Object;)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, e.GetImpl());
  return ret;
}

template <class T>
T& List<T>::get(int32_t index) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Ljava/lang/Object;");
  T* ret = new T(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, index)).Get());
  return *ret;
}

template <class T>
int32_t List<T>::size() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "size", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace util
}  // namespace java

// Forward declares of all templated types using this class
template class ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>;
