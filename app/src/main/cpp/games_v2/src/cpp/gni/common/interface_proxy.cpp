#include "gni/common/interface_proxy.h"

#include <stdlib.h>

#include "gni/common/logger.h"
#include "gni/gni.hpp"

namespace gni {
namespace common {
namespace interface_proxy {

namespace {

struct JniBindings {
  jclass java_interface_proxy_helper_;
  jmethodID create_interface_proxy_method_id_;
};

constexpr char kLogTag[] = "native, InterfaceProxy";

constexpr char kInterfaceProxyHelper[] =
    "com/librarywrapper/core/InterfaceProxyHelper";
constexpr char kInterfaceProxyHelper_createInterfaceProxy[] =
    "createInterfaceProxy";
constexpr char kInterfaceProxyHelper_createInterfaceProxy_Sig[] =
    "(JJLjava/lang/Class;)Ljava/lang/Object;";
constexpr char kJavaNativeInvoke[] = "nativeInvoke";
constexpr char kJavaNativeInvoke_Sig[] =
    "(JJLjava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;";

// Converts `jobjectArray` into an array of `jobject`s.
void UnpackObjectArray(jobjectArray object_array, jobject** out_objects,
                       uint32_t* out_objects_count) {
  JNIEnv* env = gni::GniCore::GetInstance()->GetJniEnv();
  if (object_array == nullptr) {
    *out_objects_count = 0;
    return;
  }

  *out_objects_count = env->GetArrayLength(object_array);
  *out_objects = new jobject[*out_objects_count];
  for (uint32_t i = 0; i < *out_objects_count; i++) {
    (*out_objects)[i] = env->GetObjectArrayElement(object_array, i);
  }
}

// A naive callback linked to Java
// `com.librarywrapper.core.InterfaceProxyHelper.nativeInvoke()`.
jobject NativeInvoke(JNIEnv* env, jobject object, jlong c_object_pointer,
                     jlong c_callback_pointer, jstring java_method_name,
                     jobjectArray java_arguments) {
  jobject* unpacked_arguments;
  uint32_t unpacked_arguments_count;
  UnpackObjectArray(java_arguments, &unpacked_arguments,
                    &unpacked_arguments_count);

  const char* method_name = env->GetStringUTFChars(java_method_name, nullptr);

  jobject callback_result = reinterpret_cast<Callback>(c_callback_pointer)(
      reinterpret_cast<void*>(c_object_pointer), method_name,
      unpacked_arguments, unpacked_arguments_count);

  env->ReleaseStringUTFChars(java_method_name, method_name);

  if (unpacked_arguments_count > 0) {
    delete[] unpacked_arguments;
  }

  return callback_result;
}

JniBindings InitializeJniBindings() {
  JNIEnv* env = gni::GniCore::GetInstance()->GetJniEnv();

  JniBindings jni_bindings;

  jni_bindings.java_interface_proxy_helper_ =
      gni::GniCore::GetInstance()->GetClassGlobalRef(kInterfaceProxyHelper);
  if (jni_bindings.java_interface_proxy_helper_ == nullptr) {
    gni::common::LogE(kLogTag, "Couldn't find class InterfaceProxyHelper.");
    abort();
  }

  JNINativeMethod native_method = {
      .name = const_cast<char*>(kJavaNativeInvoke),
      .signature = const_cast<char*>(kJavaNativeInvoke_Sig),
      .fnPtr = reinterpret_cast<void*>(&NativeInvoke),
  };

  if (env->RegisterNatives(jni_bindings.java_interface_proxy_helper_,
                           &native_method, 1) != JNI_OK) {
    gni::common::LogE(kLogTag, "Failed to register natives.");
    abort();
  }

  jni_bindings.create_interface_proxy_method_id_ =
      env->GetStaticMethodID(jni_bindings.java_interface_proxy_helper_,
                             kInterfaceProxyHelper_createInterfaceProxy,
                             kInterfaceProxyHelper_createInterfaceProxy_Sig);
  if (jni_bindings.create_interface_proxy_method_id_ == nullptr) {
    gni::common::LogE(kLogTag, "Couldn't get a nativeInvoke method id.");
    abort();
  }

  return jni_bindings;
}

}  // namespace

jobject RegisterCallback(const char* java_interface_name,
                         void* c_object_pointer, Callback callback) {
  static const JniBindings& jni_bindings = InitializeJniBindings();

  jclass interface_class =
      gni::GniCore::GetInstance()->GetClassGlobalRef(java_interface_name);
  if (interface_class == nullptr) {
    gni::common::LogE(kLogTag, "Couldn't find interface %s.",
                      java_interface_name);
    abort();
  }

  jobject interface_proxy =
      gni::GniCore::GetInstance()->GetJniEnv()->CallStaticObjectMethod(
          jni_bindings.java_interface_proxy_helper_,
          jni_bindings.create_interface_proxy_method_id_,
          reinterpret_cast<jlong>(c_object_pointer),
          reinterpret_cast<jlong>(callback), interface_class);
  if (interface_proxy == nullptr) {
    gni::common::LogE(kLogTag, "A call to method %s failed.",
                      kInterfaceProxyHelper_createInterfaceProxy);
    abort();
  }

  return interface_proxy;
}

}  // namespace interface_proxy
}  // namespace common
}  // namespace gni
