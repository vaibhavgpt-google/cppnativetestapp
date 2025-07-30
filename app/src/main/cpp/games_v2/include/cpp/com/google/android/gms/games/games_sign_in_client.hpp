#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT

#include <memory>
#include "com/google/android/gms/games/authentication_result.hpp"
#include "com/google/android/gms/games/gamessignin/auth_response.hpp"
#include "com/google/android/gms/games/gamessignin/auth_scope.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"
#include "java/util/list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GamesSignInClient : virtual public ::gni::Object
{
public:
    using isAuthenticatedCallback = ::gni::Task* (*)();
    using signInCallback = ::gni::Task* (*)();
    using requestServerSideAccessCallback = ::gni::Task* (*)(const ::java::lang::String*, bool);
    using requestServerSideAccessWithScopesCallback = ::gni::Task* (*)(const ::java::lang::String*, bool, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>*);

    static jclass GetClass();
    static void destroy(const GamesSignInClient* object);
    static GamesSignInClient* ImplementInterface(isAuthenticatedCallback is_authenticated_callback, signInCallback sign_in_callback, requestServerSideAccessCallback request_server_side_access_callback, requestServerSideAccessWithScopesCallback request_server_side_access_with_scopes_callback);
    explicit GamesSignInClient(jobject object) : ::gni::Object(object) {}
    ~GamesSignInClient() override = default;
    virtual ::gni::Task& isAuthenticated() const;
    virtual ::gni::Task& signIn() const;
    virtual ::gni::Task& requestServerSideAccess(const ::java::lang::String& serverClientId, bool forceRefreshToken) const;
    virtual ::gni::Task& requestServerSideAccessWithScopes(const ::java::lang::String& serverClientId, bool forceRefreshToken, const ::java::util::List<::com::google::android::gms::games::gamessignin::AuthScope>& scopes) const;
    isAuthenticatedCallback is_authenticated_callback_ = nullptr;
    signInCallback sign_in_callback_ = nullptr;
    requestServerSideAccessCallback request_server_side_access_callback_ = nullptr;
    requestServerSideAccessWithScopesCallback request_server_side_access_with_scopes_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNINCLIENT

