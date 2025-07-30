#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

template <class T>
class AnnotatedData : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const AnnotatedData* object);
    explicit AnnotatedData(jobject object) : ::gni::Object(object) {}
    ~AnnotatedData() override = default;
    virtual T& get() const;
    virtual bool isStale() const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ANNOTATEDDATA

