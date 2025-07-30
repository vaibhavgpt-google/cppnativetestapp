#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE

#include <memory>
#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/object.hpp"
#include "java/lang/string.hpp"
#include "java/util/list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace gamessignin {

class AuthResponse : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const AuthResponse* object);
    explicit AuthResponse(jobject object) : ::gni::Object(object) {}
    ~AuthResponse() override = default;
    explicit AuthResponse(const ::java::lang::String& authCode, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& grantedScopes);
    virtual ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& getGrantedScopes() const;
    virtual ::java::lang::String& getAuthCode() const;
    virtual bool equals(const ::java::lang::Object& o) const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
};

}  // namespace gamessignin
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHRESPONSE

