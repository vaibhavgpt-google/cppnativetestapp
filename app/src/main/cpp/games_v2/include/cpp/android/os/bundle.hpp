#ifndef CPP_ANDROID_OS_BUNDLE
#define CPP_ANDROID_OS_BUNDLE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace os {

class Bundle : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Bundle* object);
    explicit Bundle(jobject object) : ::gni::Object(object) {}
    ~Bundle() override = default;
};

}  // namespace os
}  // namespace android

#endif  // CPP_ANDROID_OS_BUNDLE

