#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS

#include <memory>
#include "android/os/parcel_file_descriptor.hpp"
#include "android/os/parcelable.hpp"
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

class SnapshotContents : public ::android::os::Parcelable
{
public:
    using getParcelFileDescriptorCallback = ::android::os::ParcelFileDescriptor* (*)();
    using isClosedCallback = bool (*)();
    using readFullyCallback = int8_t (*)();
    using writeBytesCallback = bool (*)(int8_t);
    using modifyBytesCallback = bool (*)(int32_t, int8_t, int32_t, int32_t);

    static jclass GetClass();
    static void destroy(const SnapshotContents* object);
    static SnapshotContents* ImplementInterface(getParcelFileDescriptorCallback get_parcel_file_descriptor_callback, isClosedCallback is_closed_callback, readFullyCallback read_fully_callback, writeBytesCallback write_bytes_callback, modifyBytesCallback modify_bytes_callback);
    explicit SnapshotContents(jobject object) : ::gni::Object(object), ::android::os::Parcelable(object) {}
    ~SnapshotContents() override = default;
    virtual ::android::os::ParcelFileDescriptor& getParcelFileDescriptor() const;
    virtual bool isClosed() const;
    virtual int8_t readFully() const;
    virtual bool writeBytes(int8_t content) const;
    virtual bool modifyBytes(int32_t dstOffset, int8_t content, int32_t srcOffset, int32_t count) const;
    getParcelFileDescriptorCallback get_parcel_file_descriptor_callback_ = nullptr;
    isClosedCallback is_closed_callback_ = nullptr;
    readFullyCallback read_fully_callback_ = nullptr;
    writeBytesCallback write_bytes_callback_ = nullptr;
    modifyBytesCallback modify_bytes_callback_ = nullptr;
};

}  // namespace snapshot
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_SNAPSHOT_SNAPSHOTCONTENTS

