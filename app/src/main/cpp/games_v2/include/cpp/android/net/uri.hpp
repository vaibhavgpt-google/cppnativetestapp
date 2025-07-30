#ifndef CPP_ANDROID_NET_URI
#define CPP_ANDROID_NET_URI

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace net {

class Uri : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Uri* object);
    explicit Uri(jobject object) : ::gni::Object(object) {}
    ~Uri() override = default;
};

}  // namespace net
}  // namespace android

#endif  // CPP_ANDROID_NET_URI

