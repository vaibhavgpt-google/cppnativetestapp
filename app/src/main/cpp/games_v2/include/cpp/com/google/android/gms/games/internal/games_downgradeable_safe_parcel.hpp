#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace internal {

class GamesDowngradeableSafeParcel : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const GamesDowngradeableSafeParcel* object);
    explicit GamesDowngradeableSafeParcel(jobject object) : ::gni::Object(object) {}
    ~GamesDowngradeableSafeParcel() override = default;
};

}  // namespace internal
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_INTERNAL_GAMESDOWNGRADEABLESAFEPARCEL

