#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/current_player_info.hpp"
#include "com/google/android/gms/games/internal/games_downgradeable_safe_parcel.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/player_level_info.hpp"
#include "com/google/android/gms/games/player_relationship_info.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerEntity : public ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel, public ::com::google::android::gms::games::Player
{
public:
    static jclass GetClass();
    static void destroy(const PlayerEntity* object);
    explicit PlayerEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel(object), ::com::google::android::gms::games::Player(object) {}
    ~PlayerEntity() override = default;
    virtual ::java::lang::String& getPlayerId() const;
    virtual ::java::lang::String& getDisplayName() const;
    virtual bool hasIconImage() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual bool hasHiResImage() const;
    virtual ::android::net::Uri& getHiResImageUri() const;
    virtual int64_t getRetrievedTimestamp() const;
    virtual int64_t getLastPlayedWithTimestamp() const;
    virtual ::java::lang::String& getTitle() const;
    virtual ::com::google::android::gms::games::PlayerLevelInfo& getLevelInfo() const;
    virtual ::android::net::Uri& getBannerImageLandscapeUri() const;
    virtual ::android::net::Uri& getBannerImagePortraitUri() const;
    virtual ::com::google::android::gms::games::PlayerRelationshipInfo& getRelationshipInfo() const;
    virtual ::com::google::android::gms::games::CurrentPlayerInfo& getCurrentPlayerInfo() const;
    virtual ::com::google::android::gms::games::Player& freeze() const;
    virtual bool isDataValid() const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& dest, int32_t flags) const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERENTITY

