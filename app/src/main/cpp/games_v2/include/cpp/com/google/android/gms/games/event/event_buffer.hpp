#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER

#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/event/event.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace event {

class EventBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const EventBuffer* object);
    explicit EventBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~EventBuffer() override = default;
    virtual ::com::google::android::gms::games::event::Event& get(int32_t position) const;
};

}  // namespace event
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER

