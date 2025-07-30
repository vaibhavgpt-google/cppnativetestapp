#ifndef CPP_ANDROID_CONTENT_CONTENTVALUES
#define CPP_ANDROID_CONTENT_CONTENTVALUES

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {

class ContentValues : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const ContentValues* object);
    explicit ContentValues(jobject object) : ::gni::Object(object) {}
    ~ContentValues() override = default;
};

}  // namespace content
}  // namespace android

#endif  // CPP_ANDROID_CONTENT_CONTENTVALUES

