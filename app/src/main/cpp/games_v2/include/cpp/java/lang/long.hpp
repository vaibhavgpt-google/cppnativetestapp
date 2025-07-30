#ifndef CPP_JAVA_LANG_LONG
#define CPP_JAVA_LANG_LONG

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

class Long : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Long* object);
    explicit Long(jobject object) : ::gni::Object(object) {}
    ~Long() override = default;
    explicit Long(int64_t value);
    virtual int64_t longValue() const;
};

}  // namespace lang
}  // namespace java

#endif  // CPP_JAVA_LANG_LONG

