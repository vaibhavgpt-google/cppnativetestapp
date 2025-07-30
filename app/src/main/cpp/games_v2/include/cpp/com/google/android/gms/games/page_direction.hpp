#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PageDirection : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const PageDirection* object);
    explicit PageDirection(jobject object) : ::gni::Object(object) {}
    ~PageDirection() override = default;
    static constexpr int32_t NONE = -1;
    static constexpr int32_t NEXT = 0;
    static constexpr int32_t PREV = 1;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION

