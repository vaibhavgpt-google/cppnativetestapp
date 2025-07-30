#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION

#include <memory>
#include "com/google/android/gms/common/api/resolvable_api_exception.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class FriendsResolutionRequiredException : public ::com::google::android::gms::common::api::ResolvableApiException
{
public:
    static jclass GetClass();
    static void destroy(const FriendsResolutionRequiredException* object);
    explicit FriendsResolutionRequiredException(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::api::ResolvableApiException(object) {}
    ~FriendsResolutionRequiredException() override = default;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_FRIENDSRESOLUTIONREQUIREDEXCEPTION

