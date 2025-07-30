#ifndef CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION
#define CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION

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

class ApiException : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const ApiException* object);
    explicit ApiException(jobject object) : ::gni::Object(object) {}
    ~ApiException() override = default;
};

}  // namespace api
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_COMMON_API_APIEXCEPTION

