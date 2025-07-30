#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT

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

class SnapshotsClient : virtual public ::gni::Object
{
public:
    template<class>
    class DataOrConflict;
    class SnapshotConflict;
    class SnapshotContentUnavailableApiException;

    using getMaxDataSizeCallback = ::gni::Task* (*)();
    using getMaxCoverImageSizeCallback = ::gni::Task* (*)();
    using getSelectSnapshotIntentCallback = ::gni::Task* (*)(const ::java::lang::String*, bool, bool, int32_t);
    using loadCallback = ::gni::Task* (*)(bool);
    using openCallback = ::gni::Task* (*)(const ::java::lang::String*, bool, int32_t);
    using commitAndCloseCallback = ::gni::Task* (*)(const ::com::google::android::gms::games::snapshot::Snapshot*, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*);
    using discardAndCloseCallback = ::gni::Task* (*)(const ::com::google::android::gms::games::snapshot::Snapshot*);
    using delete_Callback = ::gni::Task* (*)(const ::com::google::android::gms::games::snapshot::SnapshotMetadata*);
    using getSnapshotFromBundleCallback = ::com::google::android::gms::games::snapshot::SnapshotMetadata* (*)(const ::android::os::Bundle*);
    using resolveConflictCallback = ::gni::Task* (*)(const ::java::lang::String*, const ::java::lang::String*, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange*, const ::com::google::android::gms::games::snapshot::SnapshotContents*);

    static jclass GetClass();
    static void destroy(const SnapshotsClient* object);
    static SnapshotsClient* ImplementInterface(getMaxDataSizeCallback get_max_data_size_callback, getMaxCoverImageSizeCallback get_max_cover_image_size_callback, getSelectSnapshotIntentCallback get_select_snapshot_intent_callback, loadCallback load_callback, openCallback open_callback, commitAndCloseCallback commit_and_close_callback, discardAndCloseCallback discard_and_close_callback, delete_Callback delete__callback, getSnapshotFromBundleCallback get_snapshot_from_bundle_callback, resolveConflictCallback resolve_conflict_callback);
    explicit SnapshotsClient(jobject object) : ::gni::Object(object) {}
    ~SnapshotsClient() override = default;
    static constexpr const char* EXTRA_SNAPSHOT_METADATA = "com.google.android.gms.games.SNAPSHOT_METADATA";
    static constexpr const char* EXTRA_SNAPSHOT_NEW = "com.google.android.gms.games.SNAPSHOT_NEW";
    static constexpr int32_t DISPLAY_LIMIT_NONE = -1;
    static constexpr int32_t RESOLUTION_POLICY_MANUAL = -1;
    static constexpr int32_t RESOLUTION_POLICY_LONGEST_PLAYTIME = 1;
    static constexpr int32_t RESOLUTION_POLICY_LAST_KNOWN_GOOD = 2;
    static constexpr int32_t RESOLUTION_POLICY_MOST_RECENTLY_MODIFIED = 3;
    static constexpr int32_t RESOLUTION_POLICY_HIGHEST_PROGRESS = 4;
    virtual ::gni::Task& getMaxDataSize() const;
    virtual ::gni::Task& getMaxCoverImageSize() const;
    virtual ::gni::Task& getSelectSnapshotIntent(const ::java::lang::String& title, bool allowAddButton, bool allowDelete, int32_t maxSnapshots) const;
    virtual ::gni::Task& load(bool forceReload) const;
    virtual ::gni::Task& open(const ::java::lang::String& fileName, bool createIfNotFound, int32_t conflictPolicy) const;
    virtual ::gni::Task& commitAndClose(const ::com::google::android::gms::games::snapshot::Snapshot& snapshot, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange& metadataChange) const;
    virtual ::gni::Task& discardAndClose(const ::com::google::android::gms::games::snapshot::Snapshot& snapshot) const;
    virtual ::gni::Task& delete_(const ::com::google::android::gms::games::snapshot::SnapshotMetadata& metadata) const;
    static ::com::google::android::gms::games::snapshot::SnapshotMetadata& getSnapshotFromBundle(const ::android::os::Bundle& extras);
    virtual ::gni::Task& resolveConflict(const ::java::lang::String& conflictId, const ::java::lang::String& snapshotId, const ::com::google::android::gms::games::snapshot::SnapshotMetadataChange& metadataChange, const ::com::google::android::gms::games::snapshot::SnapshotContents& snapshotContents) const;
    getMaxDataSizeCallback get_max_data_size_callback_ = nullptr;
    getMaxCoverImageSizeCallback get_max_cover_image_size_callback_ = nullptr;
    getSelectSnapshotIntentCallback get_select_snapshot_intent_callback_ = nullptr;
    loadCallback load_callback_ = nullptr;
    openCallback open_callback_ = nullptr;
    commitAndCloseCallback commit_and_close_callback_ = nullptr;
    discardAndCloseCallback discard_and_close_callback_ = nullptr;
    delete_Callback delete__callback_ = nullptr;
    getSnapshotFromBundleCallback get_snapshot_from_bundle_callback_ = nullptr;
    resolveConflictCallback resolve_conflict_callback_ = nullptr;

    template <class T>
    class DataOrConflict : virtual public ::gni::Object
    {
    public:
        static jclass GetClass();
        static void destroy(const DataOrConflict* object);
        explicit DataOrConflict(jobject object) : ::gni::Object(object) {}
        ~DataOrConflict() override = default;
        virtual bool isConflict() const;
        virtual T& getData() const;
        virtual ::com::google::android::gms::games::SnapshotsClient::SnapshotConflict& getConflict() const;
    };
    class SnapshotConflict : virtual public ::gni::Object
    {
    public:
        static jclass GetClass();
        static void destroy(const SnapshotConflict* object);
        explicit SnapshotConflict(jobject object) : ::gni::Object(object) {}
        ~SnapshotConflict() override = default;
        virtual ::com::google::android::gms::games::snapshot::Snapshot& getSnapshot() const;
        virtual ::com::google::android::gms::games::snapshot::Snapshot& getConflictingSnapshot() const;
        virtual ::java::lang::String& getConflictId() const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotContents& getResolutionSnapshotContents() const;
    };
    class SnapshotContentUnavailableApiException : public ::com::google::android::gms::common::api::ApiException
    {
    public:
        static jclass GetClass();
        static void destroy(const SnapshotContentUnavailableApiException* object);
        explicit SnapshotContentUnavailableApiException(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::api::ApiException(object) {}
        ~SnapshotContentUnavailableApiException() override = default;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadata& getSnapshotMetadata() const;
    };
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOTSCLIENT

