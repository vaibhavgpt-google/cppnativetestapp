#ifndef CPP_ANDROID_OS_PARCELFILEDESCRIPTOR
#define CPP_ANDROID_OS_PARCELFILEDESCRIPTOR

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace os {

class ParcelFileDescriptor : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const ParcelFileDescriptor* object);
    explicit ParcelFileDescriptor(jobject object) : ::gni::Object(object) {}
    ~ParcelFileDescriptor() override = default;
};

}  // namespace os
}  // namespace android

#endif  // CPP_ANDROID_OS_PARCELFILEDESCRIPTOR

