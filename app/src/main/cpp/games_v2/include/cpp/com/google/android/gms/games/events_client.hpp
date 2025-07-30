#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT

#include <memory>
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/event/event_buffer.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class EventsClient : virtual public ::gni::Object
{
public:
    using loadCallback = ::gni::Task* (*)(bool);
    using loadByIdsCallback = ::gni::Task* (*)(bool, const ::java::lang::String*);
    using incrementCallback = void (*)(const ::java::lang::String*, int32_t);

    static jclass GetClass();
    static void destroy(const EventsClient* object);
    static EventsClient* ImplementInterface(loadCallback load_callback, loadByIdsCallback load_by_ids_callback, incrementCallback increment_callback);
    explicit EventsClient(jobject object) : ::gni::Object(object) {}
    ~EventsClient() override = default;
    virtual ::gni::Task& load(bool forceReload) const;
    virtual ::gni::Task& loadByIds(bool forceReload, const ::java::lang::String& eventIds) const;
    virtual void increment(const ::java::lang::String& eventId, int32_t incrementAmount) const;
    loadCallback load_callback_ = nullptr;
    loadByIdsCallback load_by_ids_callback_ = nullptr;
    incrementCallback increment_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENTSCLIENT

