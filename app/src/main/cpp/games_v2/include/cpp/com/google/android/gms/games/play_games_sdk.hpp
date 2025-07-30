#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayGamesSdk : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const PlayGamesSdk* object);
    explicit PlayGamesSdk(jobject object) : ::gni::Object(object) {}
    ~PlayGamesSdk() override = default;
    static constexpr int32_t MIN_ANDROID_API_VERSION = 19;
    static void initialize(const jobject context);
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYGAMESSDK

