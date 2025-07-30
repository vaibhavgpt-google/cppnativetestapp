#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY

#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/snapshot/snapshot.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_contents.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

class SnapshotEntity : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable, public ::com::google::android::gms::games::snapshot::Snapshot
{
public:
    static jclass GetClass();
    static void destroy(const SnapshotEntity* object);
    explicit SnapshotEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object), ::com::google::android::gms::games::snapshot::Snapshot(object) {}
    ~SnapshotEntity() override = default;
    virtual ::com::google::android::gms::games::snapshot::SnapshotMetadata& getMetadata() const;
    virtual ::com::google::android::gms::games::snapshot::SnapshotContents& getSnapshotContents() const;
    virtual ::com::google::android::gms::games::snapshot::Snapshot& freeze() const;
    virtual bool isDataValid() const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTENTITY

