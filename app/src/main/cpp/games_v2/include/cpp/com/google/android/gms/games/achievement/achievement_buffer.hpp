#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER

#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/achievement/achievement.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace achievement {

class AchievementBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const AchievementBuffer* object);
    explicit AchievementBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~AchievementBuffer() override = default;
    virtual ::com::google::android::gms::games::achievement::Achievement& get(int32_t position) const;
};

}  // namespace achievement
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENT_ACHIEVEMENTBUFFER

