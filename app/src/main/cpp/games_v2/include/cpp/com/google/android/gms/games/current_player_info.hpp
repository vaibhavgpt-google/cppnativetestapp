#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO

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

class CurrentPlayerInfo : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getFriendsListVisibilityStatusCallback = int32_t (*)();

    static jclass GetClass();
    static void destroy(const CurrentPlayerInfo* object);
    static CurrentPlayerInfo* ImplementInterface(getFriendsListVisibilityStatusCallback get_friends_list_visibility_status_callback);
    explicit CurrentPlayerInfo(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~CurrentPlayerInfo() override = default;
    virtual int32_t getFriendsListVisibilityStatus() const;
    getFriendsListVisibilityStatusCallback get_friends_list_visibility_status_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_CURRENTPLAYERINFO

