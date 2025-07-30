#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.hpp"
#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

jclass SnapshotMetadataBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/snapshot/SnapshotMetadataBuffer");
  return cached_class;
}

void SnapshotMetadataBuffer::destroy(const SnapshotMetadataBuffer* object)
{
  delete object;
}

::com::google::android::gms::games::snapshot::SnapshotMetadata& SnapshotMetadataBuffer::get(int32_t position) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Lcom/google/android/gms/games/snapshot/SnapshotMetadata;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadata* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadata(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, position)).Get());
  return *ret;
}

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

