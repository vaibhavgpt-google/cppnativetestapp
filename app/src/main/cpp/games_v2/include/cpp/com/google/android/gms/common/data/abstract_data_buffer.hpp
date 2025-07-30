#ifndef CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER

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

class AbstractDataBuffer : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const AbstractDataBuffer* object);
    explicit AbstractDataBuffer(jobject object) : ::gni::Object(object) {}
    ~AbstractDataBuffer() override = default;
};

}  // namespace data
}  // namespace common
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_COMMON_DATA_ABSTRACTDATABUFFER

