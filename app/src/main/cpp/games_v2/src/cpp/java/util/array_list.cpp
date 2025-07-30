#include "java/util/array_list.hpp"
#include <memory>
#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace util {

namespace {

template <class T>

jobject CreateJavaArrayListObject() {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(ArrayList<T>::GetClass(), "<init>", "()V");
  return env->NewObject(ArrayList<T>::GetClass(), method_id);
}

}  // namespace

template <class T>
jclass ArrayList<T>::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("java/util/ArrayList");
  return cached_class;
}

template <class T>
void ArrayList<T>::destroy(const ArrayList<T>* object)
{
  delete object;
}

template <class T>
ArrayList<T>::ArrayList() : ArrayList<T>(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaArrayListObject<T>()).Get()) {}

template <class T>
bool ArrayList<T>::add(const T& e) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "add", "(Ljava/lang/Object;)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, e.GetImpl());
  return ret;
}

template <class T>
T& ArrayList<T>::get(int32_t index) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Ljava/lang/Object;");
  T* ret = new T(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, index)).Get());
  return *ret;
}

template <class T>
int32_t ArrayList<T>::size() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "size", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace util
}  // namespace java

// Forward declares of all templated types using this class
template class ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>;
