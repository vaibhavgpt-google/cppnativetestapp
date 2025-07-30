#ifndef CPP_JAVA_UTIL_LIST
#define CPP_JAVA_UTIL_LIST

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace java {
namespace util {

template <class T>
class List : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const List* object);
    explicit List(jobject object) : ::gni::Object(object) {}
    ~List() override = default;
    virtual bool add(const T& e) const;
    virtual T& get(int32_t index) const;
    virtual int32_t size() const;
};

}  // namespace util
}  // namespace java

#endif  // CPP_JAVA_UTIL_LIST

