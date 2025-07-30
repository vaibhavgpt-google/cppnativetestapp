#ifndef CPP_ANDROID_CONTENT_PM_PROVIDERINFO
#define CPP_ANDROID_CONTENT_PM_PROVIDERINFO

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace content {
namespace pm {

class ProviderInfo : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const ProviderInfo* object);
    explicit ProviderInfo(jobject object) : ::gni::Object(object) {}
    ~ProviderInfo() override = default;
};

}  // namespace pm
}  // namespace content
}  // namespace android

#endif  // CPP_ANDROID_CONTENT_PM_PROVIDERINFO

