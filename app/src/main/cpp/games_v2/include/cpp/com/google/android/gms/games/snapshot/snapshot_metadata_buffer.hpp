#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER

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

class SnapshotMetadataBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const SnapshotMetadataBuffer* object);
    explicit SnapshotMetadataBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~SnapshotMetadataBuffer() override = default;
    virtual ::com::google::android::gms::games::snapshot::SnapshotMetadata& get(int32_t position) const;
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTMETADATABUFFER

