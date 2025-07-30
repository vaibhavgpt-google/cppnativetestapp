#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT

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
namespace achievement {

class Achievement : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getAchievementIdCallback = ::java::lang::String* (*)();
    using getTypeCallback = int32_t (*)();
    using getNameCallback = ::java::lang::String* (*)();
    using getDescriptionCallback = ::java::lang::String* (*)();
    using getUnlockedImageUriCallback = ::android::net::Uri* (*)();
    using getRevealedImageUriCallback = ::android::net::Uri* (*)();
    using getTotalStepsCallback = int32_t (*)();
    using getFormattedTotalStepsCallback = ::java::lang::String* (*)();
    using getPlayerCallback = ::com::google::android::gms::games::Player* (*)();
    using getStateCallback = int32_t (*)();
    using getCurrentStepsCallback = int32_t (*)();
    using getFormattedCurrentStepsCallback = ::java::lang::String* (*)();
    using getLastUpdatedTimestampCallback = int64_t (*)();
    using getXpValueCallback = int64_t (*)();

    static jclass GetClass();
    static void destroy(const Achievement* object);
    static Achievement* ImplementInterface(getAchievementIdCallback get_achievement_id_callback, getTypeCallback get_type_callback, getNameCallback get_name_callback, getDescriptionCallback get_description_callback, getUnlockedImageUriCallback get_unlocked_image_uri_callback, getRevealedImageUriCallback get_revealed_image_uri_callback, getTotalStepsCallback get_total_steps_callback, getFormattedTotalStepsCallback get_formatted_total_steps_callback, getPlayerCallback get_player_callback, getStateCallback get_state_callback, getCurrentStepsCallback get_current_steps_callback, getFormattedCurrentStepsCallback get_formatted_current_steps_callback, getLastUpdatedTimestampCallback get_last_updated_timestamp_callback, getXpValueCallback get_xp_value_callback);
    explicit Achievement(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~Achievement() override = default;
    static constexpr int32_t STATE_UNLOCKED = 0;
    static constexpr int32_t STATE_REVEALED = 1;
    static constexpr int32_t STATE_HIDDEN = 2;
    static constexpr int32_t TYPE_STANDARD = 0;
    static constexpr int32_t TYPE_INCREMENTAL = 1;
    virtual ::java::lang::String& getAchievementId() const;
    virtual int32_t getType() const;
    virtual ::java::lang::String& getName() const;
    virtual ::java::lang::String& getDescription() const;
    virtual ::android::net::Uri& getUnlockedImageUri() const;
    virtual ::android::net::Uri& getRevealedImageUri() const;
    virtual int32_t getTotalSteps() const;
    virtual ::java::lang::String& getFormattedTotalSteps() const;
    virtual ::com::google::android::gms::games::Player& getPlayer() const;
    virtual int32_t getState() const;
    virtual int32_t getCurrentSteps() const;
    virtual ::java::lang::String& getFormattedCurrentSteps() const;
    virtual int64_t getLastUpdatedTimestamp() const;
    virtual int64_t getXpValue() const;
    getAchievementIdCallback get_achievement_id_callback_ = nullptr;
    getTypeCallback get_type_callback_ = nullptr;
    getNameCallback get_name_callback_ = nullptr;
    getDescriptionCallback get_description_callback_ = nullptr;
    getUnlockedImageUriCallback get_unlocked_image_uri_callback_ = nullptr;
    getRevealedImageUriCallback get_revealed_image_uri_callback_ = nullptr;
    getTotalStepsCallback get_total_steps_callback_ = nullptr;
    getFormattedTotalStepsCallback get_formatted_total_steps_callback_ = nullptr;
    getPlayerCallback get_player_callback_ = nullptr;
    getStateCallback get_state_callback_ = nullptr;
    getCurrentStepsCallback get_current_steps_callback_ = nullptr;
    getFormattedCurrentStepsCallback get_formatted_current_steps_callback_ = nullptr;
    getLastUpdatedTimestampCallback get_last_updated_timestamp_callback_ = nullptr;
    getXpValueCallback get_xp_value_callback_ = nullptr;
};

}  // namespace achievement
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENT

