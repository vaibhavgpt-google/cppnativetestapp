#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO

#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player_level.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerLevelInfo : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable
{
public:
    static jclass GetClass();
    static void destroy(const PlayerLevelInfo* object);
    explicit PlayerLevelInfo(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object) {}
    ~PlayerLevelInfo() override = default;
    virtual int64_t getCurrentXpTotal() const;
    virtual int64_t getLastLevelUpTimestamp() const;
    virtual ::com::google::android::gms::games::PlayerLevel& getCurrentLevel() const;
    virtual ::com::google::android::gms::games::PlayerLevel& getNextLevel() const;
    virtual bool isMaxLevel() const;
    virtual int32_t hashCode() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVELINFO

