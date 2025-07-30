#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER

#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class PlayerBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const PlayerBuffer* object);
    explicit PlayerBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~PlayerBuffer() override = default;
    virtual ::com::google::android::gms::games::Player& get(int32_t position) const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PLAYERBUFFER

