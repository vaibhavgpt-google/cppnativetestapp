#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "com/google/android/gms/games/internal/games_downgradeable_safe_parcel.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GameEntity : public ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel, public ::com::google::android::gms::games::Game
{
public:
    static jclass GetClass();
    static void destroy(const GameEntity* object);
    explicit GameEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesDowngradeableSafeParcel(object), ::com::google::android::gms::games::Game(object) {}
    ~GameEntity() override = default;
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
    virtual ::com::google::android::gms::games::Game& freeze() const;
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

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEENTITY

