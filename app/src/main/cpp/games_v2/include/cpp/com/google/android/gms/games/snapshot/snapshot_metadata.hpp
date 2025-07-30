#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/interface_proxy.h"
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

class SnapshotMetadata : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getGameCallback = ::com::google::android::gms::games::Game* (*)();
    using getOwnerCallback = ::com::google::android::gms::games::Player* (*)();
    using getSnapshotIdCallback = ::java::lang::String* (*)();
    using getCoverImageUriCallback = ::android::net::Uri* (*)();
    using getCoverImageAspectRatioCallback = float (*)();
    using getUniqueNameCallback = ::java::lang::String* (*)();
    using getDescriptionCallback = ::java::lang::String* (*)();
    using getLastModifiedTimestampCallback = int64_t (*)();
    using getPlayedTimeCallback = int64_t (*)();
    using hasChangePendingCallback = bool (*)();
    using getProgressValueCallback = int64_t (*)();
    using getDeviceNameCallback = ::java::lang::String* (*)();

    static jclass GetClass();
    static void destroy(const SnapshotMetadata* object);
    static SnapshotMetadata* ImplementInterface(getGameCallback get_game_callback, getOwnerCallback get_owner_callback, getSnapshotIdCallback get_snapshot_id_callback, getCoverImageUriCallback get_cover_image_uri_callback, getCoverImageAspectRatioCallback get_cover_image_aspect_ratio_callback, getUniqueNameCallback get_unique_name_callback, getDescriptionCallback get_description_callback, getLastModifiedTimestampCallback get_last_modified_timestamp_callback, getPlayedTimeCallback get_played_time_callback, hasChangePendingCallback has_change_pending_callback, getProgressValueCallback get_progress_value_callback, getDeviceNameCallback get_device_name_callback);
    explicit SnapshotMetadata(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~SnapshotMetadata() override = default;
    static constexpr int64_t PLAYED_TIME_UNKNOWN = -1;
    static constexpr int64_t PROGRESS_VALUE_UNKNOWN = -1;
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
    getGameCallback get_game_callback_ = nullptr;
    getOwnerCallback get_owner_callback_ = nullptr;
    getSnapshotIdCallback get_snapshot_id_callback_ = nullptr;
    getCoverImageUriCallback get_cover_image_uri_callback_ = nullptr;
    getCoverImageAspectRatioCallback get_cover_image_aspect_ratio_callback_ = nullptr;
    getUniqueNameCallback get_unique_name_callback_ = nullptr;
    getDescriptionCallback get_description_callback_ = nullptr;
    getLastModifiedTimestampCallback get_last_modified_timestamp_callback_ = nullptr;
    getPlayedTimeCallback get_played_time_callback_ = nullptr;
    hasChangePendingCallback has_change_pending_callback_ = nullptr;
    getProgressValueCallback get_progress_value_callback_ = nullptr;
    getDeviceNameCallback get_device_name_callback_ = nullptr;
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATA

