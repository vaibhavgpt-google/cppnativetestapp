#ifndef CPP_COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE
#define CPP_COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace common {
namespace internal {
namespace safeparcel {

class AbstractSafeParcelable : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const AbstractSafeParcelable* object);
    explicit AbstractSafeParcelable(jobject object) : ::gni::Object(object) {}
    ~AbstractSafeParcelable() override = default;
};

}  // namespace safeparcel
}  // namespace internal
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_COMMON_INTERNAL_SAFEPARCEL_ABSTRACTSAFEPARCELABLE

