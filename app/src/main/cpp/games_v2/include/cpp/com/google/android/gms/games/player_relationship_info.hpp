#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO

#include <memory>
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerRelationshipInfo : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getFriendStatusCallback = int32_t (*)();

    static jclass GetClass();
    static void destroy(const PlayerRelationshipInfo* object);
    static PlayerRelationshipInfo* ImplementInterface(getFriendStatusCallback get_friend_status_callback);
    explicit PlayerRelationshipInfo(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~PlayerRelationshipInfo() override = default;
    virtual int32_t getFriendStatus() const;
    getFriendStatusCallback get_friend_status_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERRELATIONSHIPINFO

