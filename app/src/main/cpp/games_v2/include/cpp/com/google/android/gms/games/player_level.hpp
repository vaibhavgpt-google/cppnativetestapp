#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL

#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerLevel : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable
{
public:
    static jclass GetClass();
    static void destroy(const PlayerLevel* object);
    explicit PlayerLevel(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object) {}
    ~PlayerLevel() override = default;
    virtual int32_t getLevelNumber() const;
    virtual int64_t getMinXp() const;
    virtual int64_t getMaxXp() const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERLEVEL

