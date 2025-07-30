#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/enum.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace gamessignin {

class AuthScope : public ::java::lang::Enum
{
public:
    static jclass GetClass();
    static void destroy(const AuthScope* object);
    explicit AuthScope(jobject object) : ::gni::Object(object), ::java::lang::Enum(object) {}
    ~AuthScope() override = default;
    static ::com::google::android::gms::games::gamessignin::AuthScope& values();
    static ::com::google::android::gms::games::gamessignin::AuthScope& valueOf(const ::java::lang::String& name);
    virtual ::java::lang::String& getValue() const;
};

}  // namespace gamessignin
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESSIGNIN_AUTHSCOPE

