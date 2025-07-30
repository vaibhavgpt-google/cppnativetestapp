#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE

#include <memory>
#include "android/graphics/bitmap.hpp"
#include "com/google/android/gms/games/snapshot/snapshot_metadata.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/long.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace snapshot {

class SnapshotMetadataChange : virtual public ::gni::Object
{
public:
    class Builder;

    using getDescriptionCallback = ::java::lang::String* (*)();
    using getPlayedTimeMillisCallback = ::java::lang::Long* (*)();
    using getCoverImageCallback = ::android::graphics::Bitmap* (*)();
    using getProgressValueCallback = ::java::lang::Long* (*)();

    static jclass GetClass();
    static void destroy(const SnapshotMetadataChange* object);
    static SnapshotMetadataChange* ImplementInterface(getDescriptionCallback get_description_callback, getPlayedTimeMillisCallback get_played_time_millis_callback, getCoverImageCallback get_cover_image_callback, getProgressValueCallback get_progress_value_callback);
    explicit SnapshotMetadataChange(jobject object) : ::gni::Object(object) {}
    ~SnapshotMetadataChange() override = default;
    virtual ::java::lang::String& getDescription() const;
    virtual ::java::lang::Long& getPlayedTimeMillis() const;
    virtual ::android::graphics::Bitmap& getCoverImage() const;
    virtual ::java::lang::Long& getProgressValue() const;
    getDescriptionCallback get_description_callback_ = nullptr;
    getPlayedTimeMillisCallback get_played_time_millis_callback_ = nullptr;
    getCoverImageCallback get_cover_image_callback_ = nullptr;
    getProgressValueCallback get_progress_value_callback_ = nullptr;

    class Builder : virtual public ::gni::Object
    {
    public:
        static jclass GetClass();
        static void destroy(const Builder* object);
        explicit Builder(jobject object) : ::gni::Object(object) {}
        ~Builder() override = default;
        explicit Builder();
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& setDescription(const ::java::lang::String& description) const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& setPlayedTimeMillis(int64_t playedTimeMillis) const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& setProgressValue(int64_t progressValue) const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& setCoverImage(const ::android::graphics::Bitmap& coverImage) const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange::Builder& fromMetadata(const ::com::google::android::gms::games::snapshot::SnapshotMetadata& metadata) const;
        virtual ::com::google::android::gms::games::snapshot::SnapshotMetadataChange& build() const;
    };
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATACHANGE

