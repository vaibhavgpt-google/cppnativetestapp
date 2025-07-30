#ifndef CPP_JAVA_LANG_BOOLEAN
#define CPP_JAVA_LANG_BOOLEAN

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace lang {

class Boolean : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Boolean* object);
    explicit Boolean(jobject object) : ::gni::Object(object) {}
    ~Boolean() override = default;
    explicit Boolean(bool value);
    virtual bool booleanValue() const;
};

}  // namespace lang
}  // namespace java

#endif  // CPP_JAVA_LANG_BOOLEAN

