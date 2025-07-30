#ifndef CPP_ANDROID_CONTENT_CONTENTPROVIDER
#define CPP_ANDROID_CONTENT_CONTENTPROVIDER

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {

class ContentProvider : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const ContentProvider* object);
    explicit ContentProvider(jobject object) : ::gni::Object(object) {}
    ~ContentProvider() override = default;
};

}  // namespace content
}  // namespace android

#endif  // CPP_ANDROID_CONTENT_CONTENTPROVIDER

