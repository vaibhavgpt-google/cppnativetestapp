#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GamesActivityResultCodes : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const GamesActivityResultCodes* object);
    explicit GamesActivityResultCodes(jobject object) : ::gni::Object(object) {}
    ~GamesActivityResultCodes() override = default;
    static constexpr int32_t RESULT_RECONNECT_REQUIRED = 10001;
    static constexpr int32_t RESULT_SIGN_IN_FAILED = 10002;
    static constexpr int32_t RESULT_LICENSE_FAILED = 10003;
    static constexpr int32_t RESULT_APP_MISCONFIGURED = 10004;
    static constexpr int32_t RESULT_NETWORK_FAILURE = 10006;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESACTIVITYRESULTCODES

