#ifndef CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE
#define CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace api {

class Releasable : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Releasable* object);
    explicit Releasable(jobject object) : ::gni::Object(object) {}
    ~Releasable() override = default;
};

}  // namespace api
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_RELEASABLE

