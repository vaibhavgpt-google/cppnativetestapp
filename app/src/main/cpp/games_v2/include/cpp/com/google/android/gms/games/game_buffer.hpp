#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER

#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GameBuffer : public ::com::google::android::gms::common::data::AbstractDataBuffer
{
public:
    static jclass GetClass();
    static void destroy(const GameBuffer* object);
    explicit GameBuffer(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::AbstractDataBuffer(object) {}
    ~GameBuffer() override = default;
    virtual ::com::google::android::gms::games::Game& get(int32_t position) const;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMEBUFFER

