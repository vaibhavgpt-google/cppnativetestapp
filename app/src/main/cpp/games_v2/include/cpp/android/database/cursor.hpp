#ifndef CPP_ANDROID_DATABASE_CURSOR
#define CPP_ANDROID_DATABASE_CURSOR

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace android {
namespace database {

class Cursor : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Cursor* object);
    explicit Cursor(jobject object) : ::gni::Object(object) {}
    ~Cursor() override = default;
};

}  // namespace database
}  // namespace android

#endif  // CPP_ANDROID_DATABASE_CURSOR

