#include "com/google/android/gms/games/snapshots_client.hpp"
#include <memory>
#include "android/content/intent.hpp"
#include "android/os/bundle.hpp"
#include "com/google/android/gms/common/api/api_exception.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/snapshot/snapshot.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_contents.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_buffer.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata_change.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/integer.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {





jobject SnapshotsClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getMaxDataSize") == 0)
  {
    auto result = reinterpret_cast<SnapshotsClient*>(object_pointer)->get_max_data_size_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "getMaxCoverImageSize") == 0)
  {
    auto result = reinterpret_cast<SnapshotsClient*>(object_pointer)->get_max_cover_image_size_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "discardAndClose") == 0)
  {
    auto result = reinterpret_cast<SnapshotsClient*>(object_pointer)->discard_and_close_callback_(new ::com::google::android::gms::games::snapshot::Snapshot(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "delete_") == 0)
  {
    auto result = reinterpret_cast<SnapshotsClient*>(object_pointer)->delete__callback_(new ::com::google::android::gms::games::snapshot::SnapshotMetadata(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "getSnapshotFromBundle") == 0)
  {
    auto result = reinterpret_cast<SnapshotsClient*>(object_pointer)->get_snapshot_from_bundle_callback_(new ::android::os::Bundle(arguments[0]));
    return result == nullptr ? nullptr : result->GetImpl();
  }

  return nullptr;
}





}  // namespace

SnapshotsClient* SnapshotsClient::ImplementInterface(getMaxDataSizeCallback get_max_data_size_callback, getMaxCoverImageSizeCallback get_max_cover_image_size_callback, getSelectSnapshotIntentCallback get_select_snapshot_intent_callback, loadCallback load_callback, openCallback open_callback, commitAndCloseCallback commit_and_close_callback, discardAndCloseCallback discard_and_close_callback, delete_Callback delete__callback, getSnapshotFromBundleCallback get_snapshot_from_bundle_callback, resolveConflictCallback resolve_conflict_callback)
{
  SnapshotsClient* instance = new SnapshotsClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/SnapshotsClient", instance, SnapshotsClientProxyCallback)));
  instance->get_max_data_size_callback_ = get_max_data_size_callback;
  instance->get_max_cover_image_size_callback_ = get_max_cover_image_size_callback;
  instance->get_select_snapshot_intent_callback_ = get_select_snapshot_intent_callback;
  instance->load_callback_ = load_callback;
  instance->open_callback_ = open_callback;
  instance->commit_and_close_callback_ = commit_and_close_callback;
  instance->discard_and_close_callback_ = discard_and_close_callback;
  instance->delete__callback_ = delete__callback;
  instance->get_snapshot_from_bundle_callback_ = get_snapshot_from_bundle_callback;
  instance->resolve_conflict_callback_ = resolve_conflict_callback;
  return instance;
}

jclass SnapshotsClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/SnapshotsClient");
  return cached_class;
}

void SnapshotsClient::destroy(const SnapshotsClient* object)
{
  delete object;
}

::gni::Task& SnapshotsClient::getMaxDataSize() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getMaxDataSize", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::getMaxCoverImageSize() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getMaxCoverImageSize", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::getSelectSnapshotIntent(const ::java::lang::String& title, bool allowAddButton, bool allowDelete, int32_t maxSnapshots) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSelectSnapshotIntent", "(Ljava/lang/String;ZZI)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, title.GetImpl(), allowAddButton, allowDelete, maxSnapshots)).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::load(bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "load", "(Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload)).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::open(const ::java::lang::String& fileName, bool createIfNotFound, int32_t conflictPolicy) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "open", "(Ljava/lang/String;ZI)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, fileName.GetImpl(), createIfNotFound, conflictPolicy)).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::commitAndClose(const ::com::google::android::gms::games::snapshot::Snapshot& snapshot, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange& metadataChange) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "commitAndClose", "(Lcom/google/android/gms/games/snapshot/Snapshot;Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, snapshot.GetImpl(), metadataChange.GetImpl())).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::discardAndClose(const ::com::google::android::gms::games::snapshot::Snapshot& snapshot) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "discardAndClose", "(Lcom/google/android/gms/games/snapshot/Snapshot;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, snapshot.GetImpl())).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::delete_(const ::com::google::android::gms::games::snapshot::SnapshotMetadata& metadata) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "delete_", "(Lcom/google/android/gms/games/snapshot/SnapshotMetadata;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, metadata.GetImpl())).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotMetadata& SnapshotsClient::getSnapshotFromBundle(const ::android::os::Bundle& extras)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getSnapshotFromBundle", "(Landroid/os/Bundle;)Lcom/google/android/gms/games/snapshot/SnapshotMetadata;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadata* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadata(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, extras.GetImpl())).Get());
  return *ret;
}

::gni::Task& SnapshotsClient::resolveConflict(const ::java::lang::String& conflictId, const ::java::lang::String& snapshotId, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange& metadataChange, const ::com::google::android::gms::games::snapshot::SnapshotContents& snapshotContents) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "resolveConflict", "(Ljava/lang/String;Ljava/lang/String;Lcom/google/android/gms/games/snapshot/SnapshotMetadataChange;Lcom/google/android/gms/games/snapshot/SnapshotContents;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, conflictId.GetImpl(), snapshotId.GetImpl(), metadataChange.GetImpl(), snapshotContents.GetImpl())).Get());
  return *ret;
}

template <class T>
jclass SnapshotsClient::DataOrConflict<T>::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/SnapshotsClient$DataOrConflict");
  return cached_class;
}

template <class T>
void SnapshotsClient::DataOrConflict<T>::destroy(const SnapshotsClient::DataOrConflict<T>* object)
{
  delete object;
}

template <class T>
bool SnapshotsClient::DataOrConflict<T>::isConflict() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isConflict", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

template <class T>
T& SnapshotsClient::DataOrConflict<T>::getData() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getData", "()Ljava/lang/Object;");
  T* ret = new T(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

template <class T>
::com::google::android::gms::games::SnapshotsClient::SnapshotConflict& SnapshotsClient::DataOrConflict<T>::getConflict() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getConflict", "()Lcom/google/android/gms/games/SnapshotsClient$SnapshotConflict;");
  ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict* ret = new ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

jclass SnapshotsClient::SnapshotConflict::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/SnapshotsClient$SnapshotConflict");
  return cached_class;
}

void SnapshotsClient::SnapshotConflict::destroy(const SnapshotsClient::SnapshotConflict* object)
{
  delete object;
}

::com::google::android::gms::games::snapshot::Snapshot& SnapshotsClient::SnapshotConflict::getSnapshot() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSnapshot", "()Lcom/google/android/gms/games/snapshot/Snapshot;");
  ::com::google::android::gms::games::snapshot::Snapshot* ret = new ::com::google::android::gms::games::snapshot::Snapshot(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::Snapshot& SnapshotsClient::SnapshotConflict::getConflictingSnapshot() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getConflictingSnapshot", "()Lcom/google/android/gms/games/snapshot/Snapshot;");
  ::com::google::android::gms::games::snapshot::Snapshot* ret = new ::com::google::android::gms::games::snapshot::Snapshot(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& SnapshotsClient::SnapshotConflict::getConflictId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getConflictId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::snapshot::SnapshotContents& SnapshotsClient::SnapshotConflict::getResolutionSnapshotContents() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getResolutionSnapshotContents", "()Lcom/google/android/gms/games/snapshot/SnapshotContents;");
  ::com::google::android::gms::games::snapshot::SnapshotContents* ret = new ::com::google::android::gms::games::snapshot::SnapshotContents(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

jclass SnapshotsClient::SnapshotContentUnavailableApiException::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/SnapshotsClient$SnapshotContentUnavailableApiException");
  return cached_class;
}

void SnapshotsClient::SnapshotContentUnavailableApiException::destroy(const SnapshotsClient::SnapshotContentUnavailableApiException* object)
{
  delete object;
}

::com::google::android::gms::games::snapshot::SnapshotMetadata& SnapshotsClient::SnapshotContentUnavailableApiException::getSnapshotMetadata() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSnapshotMetadata", "()Lcom/google/android/gms/games/snapshot/SnapshotMetadata;");
  ::com::google::android::gms::games::snapshot::SnapshotMetadata* ret = new ::com::google::android::gms::games::snapshot::SnapshotMetadata(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

// Forward declares of all templated types using this class
template class ::com::google::android::gms::games::SnapshotsClient::DataOrConflict<::com::google::android::gms::games::snapshot::Snapshot>;
