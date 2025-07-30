#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/event/event.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace event {

class EventEntity : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable, public ::com::google::android::gms::games::event::Event
{
public:
    static jclass GetClass();
    static void destroy(const EventEntity* object);
    explicit EventEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object), ::com::google::android::gms::games::event::Event(object) {}
    ~EventEntity() override = default;
    explicit EventEntity(const ::com::google::android::gms::games::event::Event& event);
    virtual ::java::lang::String& getEventId() const;
    virtual ::java::lang::String& getName() const;
    virtual ::java::lang::String& getDescription() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual ::java::lang::String& getIconImageUrl() const;
    virtual ::com::google::android::gms::games::Player& getPlayer() const;
    virtual int64_t getValue() const;
    virtual ::java::lang::String& getFormattedValue() const;
    virtual bool isVisible() const;
    virtual ::com::google::android::gms::games::event::Event& freeze() const;
    virtual bool isDataValid() const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
};

}  // namespace event
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY

