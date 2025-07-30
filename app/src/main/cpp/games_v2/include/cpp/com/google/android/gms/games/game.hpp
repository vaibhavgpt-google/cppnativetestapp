#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAME
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAME

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
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

class Game : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getApplicationIdCallback = ::java::lang::String* (*)();
    using getDisplayNameCallback = ::java::lang::String* (*)();
    using getPrimaryCategoryCallback = ::java::lang::String* (*)();
    using getSecondaryCategoryCallback = ::java::lang::String* (*)();
    using getDescriptionCallback = ::java::lang::String* (*)();
    using getDeveloperNameCallback = ::java::lang::String* (*)();
    using getIconImageUriCallback = ::android::net::Uri* (*)();
    using getHiResImageUriCallback = ::android::net::Uri* (*)();
    using getFeaturedImageUriCallback = ::android::net::Uri* (*)();
    using getAchievementTotalCountCallback = int32_t (*)();
    using getLeaderboardCountCallback = int32_t (*)();
    using areSnapshotsEnabledCallback = bool (*)();
    using getThemeColorCallback = ::java::lang::String* (*)();
    using hasGamepadSupportCallback = bool (*)();

    static jclass GetClass();
    static void destroy(const Game* object);
    static Game* ImplementInterface(getApplicationIdCallback get_application_id_callback, getDisplayNameCallback get_display_name_callback, getPrimaryCategoryCallback get_primary_category_callback, getSecondaryCategoryCallback get_secondary_category_callback, getDescriptionCallback get_description_callback, getDeveloperNameCallback get_developer_name_callback, getIconImageUriCallback get_icon_image_uri_callback, getHiResImageUriCallback get_hi_res_image_uri_callback, getFeaturedImageUriCallback get_featured_image_uri_callback, getAchievementTotalCountCallback get_achievement_total_count_callback, getLeaderboardCountCallback get_leaderboard_count_callback, areSnapshotsEnabledCallback are_snapshots_enabled_callback, getThemeColorCallback get_theme_color_callback, hasGamepadSupportCallback has_gamepad_support_callback);
    explicit Game(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~Game() override = default;
    virtual ::java::lang::String& getApplicationId() const;
    virtual ::java::lang::String& getDisplayName() const;
    virtual ::java::lang::String& getPrimaryCategory() const;
    virtual ::java::lang::String& getSecondaryCategory() const;
    virtual ::java::lang::String& getDescription() const;
    virtual ::java::lang::String& getDeveloperName() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual ::android::net::Uri& getHiResImageUri() const;
    virtual ::android::net::Uri& getFeaturedImageUri() const;
    virtual int32_t getAchievementTotalCount() const;
    virtual int32_t getLeaderboardCount() const;
    virtual bool areSnapshotsEnabled() const;
    virtual ::java::lang::String& getThemeColor() const;
    virtual bool hasGamepadSupport() const;
    getApplicationIdCallback get_application_id_callback_ = nullptr;
    getDisplayNameCallback get_display_name_callback_ = nullptr;
    getPrimaryCategoryCallback get_primary_category_callback_ = nullptr;
    getSecondaryCategoryCallback get_secondary_category_callback_ = nullptr;
    getDescriptionCallback get_description_callback_ = nullptr;
    getDeveloperNameCallback get_developer_name_callback_ = nullptr;
    getIconImageUriCallback get_icon_image_uri_callback_ = nullptr;
    getHiResImageUriCallback get_hi_res_image_uri_callback_ = nullptr;
    getFeaturedImageUriCallback get_featured_image_uri_callback_ = nullptr;
    getAchievementTotalCountCallback get_achievement_total_count_callback_ = nullptr;
    getLeaderboardCountCallback get_leaderboard_count_callback_ = nullptr;
    areSnapshotsEnabledCallback are_snapshots_enabled_callback_ = nullptr;
    getThemeColorCallback get_theme_color_callback_ = nullptr;
    hasGamepadSupportCallback has_gamepad_support_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAME

