#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY

#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/achievement/achievement.hpp"
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
namespace achievement {

class AchievementEntity : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable, public ::com::google::android::gms::games::achievement::Achievement
{
public:
    static jclass GetClass();
    static void destroy(const AchievementEntity* object);
    explicit AchievementEntity(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object), ::com::google::android::gms::games::achievement::Achievement(object) {}
    ~AchievementEntity() override = default;
    virtual ::java::lang::String& getAchievementId() const;
    virtual int32_t getType() const;
    virtual ::java::lang::String& getName() const;
    virtual ::java::lang::String& getDescription() const;
    virtual ::android::net::Uri& getUnlockedImageUri() const;
    virtual ::java::lang::String& getUnlockedImageUrl() const;
    virtual ::android::net::Uri& getRevealedImageUri() const;
    virtual ::java::lang::String& getRevealedImageUrl() const;
    virtual int32_t getTotalSteps() const;
    virtual ::java::lang::String& getFormattedTotalSteps() const;
    virtual ::com::google::android::gms::games::Player& getPlayer() const;
    virtual int32_t getState() const;
    virtual int32_t getCurrentSteps() const;
    virtual ::java::lang::String& getFormattedCurrentSteps() const;
    virtual int64_t getLastUpdatedTimestamp() const;
    virtual int64_t getXpValue() const;
    virtual ::com::google::android::gms::games::achievement::Achievement& freeze() const;
    virtual bool isDataValid() const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& dest, int32_t flags) const;
};

}  // namespace achievement
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTENTITY

