#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/current_player_info.hpp"
#include "com/google/android/gms/games/player_level_info.hpp"
#include "com/google/android/gms/games/player_relationship_info.hpp"
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

class Player : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getPlayerIdCallback = ::java::lang::String* (*)();
    using getDisplayNameCallback = ::java::lang::String* (*)();
    using hasIconImageCallback = bool (*)();
    using getIconImageUriCallback = ::android::net::Uri* (*)();
    using hasHiResImageCallback = bool (*)();
    using getHiResImageUriCallback = ::android::net::Uri* (*)();
    using getRetrievedTimestampCallback = int64_t (*)();
    using getTitleCallback = ::java::lang::String* (*)();
    using getLevelInfoCallback = ::com::google::android::gms::games::PlayerLevelInfo* (*)();
    using getBannerImageLandscapeUriCallback = ::android::net::Uri* (*)();
    using getBannerImagePortraitUriCallback = ::android::net::Uri* (*)();
    using getRelationshipInfoCallback = ::com::google::android::gms::games::PlayerRelationshipInfo* (*)();
    using getCurrentPlayerInfoCallback = ::com::google::android::gms::games::CurrentPlayerInfo* (*)();

    static jclass GetClass();
    static void destroy(const Player* object);
    static Player* ImplementInterface(getPlayerIdCallback get_player_id_callback, getDisplayNameCallback get_display_name_callback, hasIconImageCallback has_icon_image_callback, getIconImageUriCallback get_icon_image_uri_callback, hasHiResImageCallback has_hi_res_image_callback, getHiResImageUriCallback get_hi_res_image_uri_callback, getRetrievedTimestampCallback get_retrieved_timestamp_callback, getTitleCallback get_title_callback, getLevelInfoCallback get_level_info_callback, getBannerImageLandscapeUriCallback get_banner_image_landscape_uri_callback, getBannerImagePortraitUriCallback get_banner_image_portrait_uri_callback, getRelationshipInfoCallback get_relationship_info_callback, getCurrentPlayerInfoCallback get_current_player_info_callback);
    explicit Player(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~Player() override = default;
    static constexpr int64_t CURRENT_XP_UNKNOWN = -1;
    static constexpr int64_t TIMESTAMP_UNKNOWN = -1;
    virtual ::java::lang::String& getPlayerId() const;
    virtual ::java::lang::String& getDisplayName() const;
    virtual bool hasIconImage() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual bool hasHiResImage() const;
    virtual ::android::net::Uri& getHiResImageUri() const;
    virtual int64_t getRetrievedTimestamp() const;
    virtual ::java::lang::String& getTitle() const;
    virtual ::com::google::android::gms::games::PlayerLevelInfo& getLevelInfo() const;
    virtual ::android::net::Uri& getBannerImageLandscapeUri() const;
    virtual ::android::net::Uri& getBannerImagePortraitUri() const;
    virtual ::com::google::android::gms::games::PlayerRelationshipInfo& getRelationshipInfo() const;
    virtual ::com::google::android::gms::games::CurrentPlayerInfo& getCurrentPlayerInfo() const;
    getPlayerIdCallback get_player_id_callback_ = nullptr;
    getDisplayNameCallback get_display_name_callback_ = nullptr;
    hasIconImageCallback has_icon_image_callback_ = nullptr;
    getIconImageUriCallback get_icon_image_uri_callback_ = nullptr;
    hasHiResImageCallback has_hi_res_image_callback_ = nullptr;
    getHiResImageUriCallback get_hi_res_image_uri_callback_ = nullptr;
    getRetrievedTimestampCallback get_retrieved_timestamp_callback_ = nullptr;
    getTitleCallback get_title_callback_ = nullptr;
    getLevelInfoCallback get_level_info_callback_ = nullptr;
    getBannerImageLandscapeUriCallback get_banner_image_landscape_uri_callback_ = nullptr;
    getBannerImagePortraitUriCallback get_banner_image_portrait_uri_callback_ = nullptr;
    getRelationshipInfoCallback get_relationship_info_callback_ = nullptr;
    getCurrentPlayerInfoCallback get_current_player_info_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYER

