#include "com/google/android/gms/games/snapshot/snapshot.hpp"
#include <memory>
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_contents.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
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

jobject SnapshotProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getMetadata") == 0)
  {
    auto result = reinterpret_cast<Snapshot*>(object_pointer)->get_metadata_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }
  else if (strcmp(method_name, "getSnapshotContents") == 0)
  {
    auto result = reinterpret_cast<Snapshot*>(object_pointer)->get_snapshot_contents_callback_();
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}

}  // namespace

Snapshot* Snapshot::ImplementInterface(getMetadataCallback get_metadata_callback, getSnapshotContentsCallback get_snapshot_contents_callback)
{
  Snapshot* instance = new Snapshot(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/snapshot/Snapshot", instance, SnapshotProxyCallback)));
  instance->get_metadata_callback_ = get_metadata_callback;
  instance->get_snapshot_contents_callback_ = get_snapshot_contents_callback;
  return instance;
}

jclass Snapshot::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/Snapshot");
  return cached_class;
}

void Snapshot::destroy(const Snapshot* object)
{
  delete object;
}

::com::google::android::gms::games::snapshot::SnapshotMetadata& Snapshot::getMetadata() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getMetadata", "()Lcom/google/android/gms/games/snapshot/SnapshotMetadata;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadata* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadata(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotContents& Snapshot::getSnapshotContents() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSnapshotContents", "()Lcom/google/android/gms/games/snapshot/SnapshotContents;");
  ::com::google::android::gms::games::snapshot::SnapshotContents* ret = new ::com::google::android::gms::games::snapshot::SnapshotContents(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

