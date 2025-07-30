#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GamesCallbackStatusCodes : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const GamesCallbackStatusCodes* object);
    explicit GamesCallbackStatusCodes(jobject object) : ::gni::Object(object) {}
    ~GamesCallbackStatusCodes() override = default;
    static constexpr int32_t OK = 0;
    static constexpr int32_t INTERNAL_ERROR = 1;
    static ::java::lang::String& getStatusCodeString(int32_t statusCode);
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCALLBACKSTATUSCODES

