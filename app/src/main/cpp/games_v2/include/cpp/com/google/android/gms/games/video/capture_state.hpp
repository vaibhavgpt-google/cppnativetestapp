#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace video {

class CaptureState : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const CaptureState* object);
    explicit CaptureState(jobject object) : ::gni::Object(object) {}
    ~CaptureState() override = default;
    virtual bool isCapturing() const;
    virtual int32_t getCaptureMode() const;
    virtual int32_t getCaptureQuality() const;
    virtual bool isOverlayVisible() const;
    virtual bool isPaused() const;
    virtual ::java::lang::String& toString() const;
};

}  // namespace video
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_CAPTURESTATE

