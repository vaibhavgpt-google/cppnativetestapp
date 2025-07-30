#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player.hpp"
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

class SnapshotMetadataEntity : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable, public ::com::google::android::gms::games::snapshot::SnapshotMetadata
{
public:
    static jclass GetClass();
    static void destroy(const SnapshotMetadataEntity* object);
    explicit SnapshotMetadataEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object), ::com::google::android::gms::games::snapshot::SnapshotMetadata(object) {}
    ~SnapshotMetadataEntity() override = default;
    virtual ::com::google::android::gms::games::Game& getGame() const;
    virtual ::com::google::android::gms::games::Player& getOwner() const;
    virtual ::java::lang::String& getSnapshotId() const;
    virtual ::android::net::Uri& getCoverImageUri() const;
    virtual float getCoverImageAspectRatio() const;
    virtual ::java::lang::String& getUniqueName() const;
    virtual ::java::lang::String& getDescription() const;
    virtual int64_t getLastModifiedTimestamp() const;
    virtual int64_t getPlayedTime() const;
    virtual bool hasChangePending() const;
    virtual int64_t getProgressValue() const;
    virtual ::java::lang::String& getDeviceName() const;
    virtual ::com::google::android::gms::games::snapshot::SnapshotMetadata& freeze() const;
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

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATAENTITY

