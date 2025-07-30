#include "com/google/android/gms/games/snapshot/snapshot_contents.hpp"
#include <memory>
#include "android/os/parcel_file_descriptor.hpp"
#include "android/os/parcelable.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

namespace {

jobject SnapshotContentsProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getParcelFileDescriptor") == 0)
  {
    auto result = reinterpret_cast<SnapshotContents*>(object_pointer)->get_parcel_file_descriptor_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

SnapshotContents* SnapshotContents::ImplementInterface(getParcelFileDescriptorCallback get_parcel_file_descriptor_callback, isClosedCallback is_closed_callback, readFullyCallback read_fully_callback, writeBytesCallback write_bytes_callback, modifyBytesCallback modify_bytes_callback)
{
  SnapshotContents* instance = new SnapshotContents(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/snapshot/SnapshotContents", instance, SnapshotContentsProxyCallback)));
  instance->get_parcel_file_descriptor_callback_ = get_parcel_file_descriptor_callback;
  instance->is_closed_callback_ = is_closed_callback;
  instance->read_fully_callback_ = read_fully_callback;
  instance->write_bytes_callback_ = write_bytes_callback;
  instance->modify_bytes_callback_ = modify_bytes_callback;
  return instance;
}

jclass SnapshotContents::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotContents");
  return cached_class;
}

void SnapshotContents::destroy(const SnapshotContents* object)
{
  delete object;
}

::android::os::ParcelFileDescriptor& SnapshotContents::getParcelFileDescriptor() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getParcelFileDescriptor", "()Landroid/os/ParcelFileDescriptor;");
  ::android::os::ParcelFileDescriptor* ret = new ::android::os::ParcelFileDescriptor(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool SnapshotContents::isClosed() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isClosed", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int8_t SnapshotContents::readFully() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "readFully", "()[B");
  int8_t ret = env->CallByteMethod(GetImpl(), method_id);
  return ret;
}

bool SnapshotContents::writeBytes(int8_t content) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeBytes", "([B)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, content);
  return ret;
}

bool SnapshotContents::modifyBytes(int32_t dstOffset, int8_t content, int32_t srcOffset, int32_t count) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "modifyBytes", "(I[BII)Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id, dstOffset, content, srcOffset, count);
  return ret;
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

