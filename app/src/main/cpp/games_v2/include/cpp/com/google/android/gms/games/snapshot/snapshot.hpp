#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT

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

class Snapshot : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getMetadataCallback = ::com::google::android::gms::games::snapshot::SnapshotMetadata* (*)();
    using getSnapshotContentsCallback = ::com::google::android::gms::games::snapshot::SnapshotContents* (*)();

    static jclass GetClass();
    static void destroy(const Snapshot* object);
    static Snapshot* ImplementInterface(getMetadataCallback get_metadata_callback, getSnapshotContentsCallback get_snapshot_contents_callback);
    explicit Snapshot(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~Snapshot() override = default;
    virtual ::com::google::android::gms::games::snapshot::SnapshotMetadata& getMetadata() const;
    virtual ::com::google::android::gms::games::snapshot::SnapshotContents& getSnapshotContents() const;
    getMetadataCallback get_metadata_callback_ = nullptr;
    getSnapshotContentsCallback get_snapshot_contents_callback_ = nullptr;
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOT

