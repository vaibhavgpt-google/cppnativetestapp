#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class AuthenticationResult : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const AuthenticationResult* object);
    explicit AuthenticationResult(jobject object) : ::gni::Object(object) {}
    ~AuthenticationResult() override = default;
    virtual bool isAuthenticated() const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_AUTHENTICATIONRESULT

