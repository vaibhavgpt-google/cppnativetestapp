#ifndef CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE
#define CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace data {

class Freezable : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Freezable* object);
    explicit Freezable(jobject object) : ::gni::Object(object) {}
    ~Freezable() override = default;
};

}  // namespace data
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_FREEZABLE

