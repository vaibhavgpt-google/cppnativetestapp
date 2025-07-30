#ifndef CPP_JAVA_LANG_ENUM
#define CPP_JAVA_LANG_ENUM

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

class Enum : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Enum* object);
    explicit Enum(jobject object) : ::gni::Object(object) {}
    ~Enum() override = default;
};

}  // namespace lang
}  // namespace java

#endif  // CPP_JAVA_LANG_ENUM

