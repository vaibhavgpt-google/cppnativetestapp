#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/interface_proxy.h"
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

class Event : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getEventIdCallback = ::java::lang::String* (*)();
    using getNameCallback = ::java::lang::String* (*)();
    using getDescriptionCallback = ::java::lang::String* (*)();
    using getIconImageUriCallback = ::android::net::Uri* (*)();
    using getPlayerCallback = ::com::google::android::gms::games::Player* (*)();
    using getValueCallback = int64_t (*)();
    using getFormattedValueCallback = ::java::lang::String* (*)();
    using isVisibleCallback = bool (*)();

    static jclass GetClass();
    static void destroy(const Event* object);
    static Event* ImplementInterface(getEventIdCallback get_event_id_callback, getNameCallback get_name_callback, getDescriptionCallback get_description_callback, getIconImageUriCallback get_icon_image_uri_callback, getPlayerCallback get_player_callback, getValueCallback get_value_callback, getFormattedValueCallback get_formatted_value_callback, isVisibleCallback is_visible_callback);
    explicit Event(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~Event() override = default;
    virtual ::java::lang::String& getEventId() const;
    virtual ::java::lang::String& getName() const;
    virtual ::java::lang::String& getDescription() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual ::com::google::android::gms::games::Player& getPlayer() const;
    virtual int64_t getValue() const;
    virtual ::java::lang::String& getFormattedValue() const;
    virtual bool isVisible() const;
    getEventIdCallback get_event_id_callback_ = nullptr;
    getNameCallback get_name_callback_ = nullptr;
    getDescriptionCallback get_description_callback_ = nullptr;
    getIconImageUriCallback get_icon_image_uri_callback_ = nullptr;
    getPlayerCallback get_player_callback_ = nullptr;
    getValueCallback get_value_callback_ = nullptr;
    getFormattedValueCallback get_formatted_value_callback_ = nullptr;
    isVisibleCallback is_visible_callback_ = nullptr;
};

}  // namespace event
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT

