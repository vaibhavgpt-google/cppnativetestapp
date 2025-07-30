#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class RecallAccess : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const RecallAccess* object);
    explicit RecallAccess(jobject object) : ::gni::Object(object) {}
    ~RecallAccess() override = default;
    virtual ::java::lang::String& getSessionId() const;
    virtual int32_t hashCode() const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS

