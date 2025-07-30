#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES

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
namespace video {

class VideoCapabilities : public ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable
{
public:
    static jclass GetClass();
    static void destroy(const VideoCapabilities* object);
    explicit VideoCapabilities(jobject object) : ::gni::Object(object), ::com::google::android::gms::games::internal::GamesAbstractSafeParcelable(object) {}
    ~VideoCapabilities() override = default;
    virtual bool isMicSupported() const;
    virtual bool isCameraSupported() const;
    virtual bool isWriteStorageSupported() const;
    virtual bool getSupportedCaptureModes() const;
    virtual bool getSupportedQualityLevels() const;
    virtual bool supportsCaptureMode(int32_t captureMode) const;
    virtual bool supportsQualityLevel(int32_t qualityLevel) const;
    virtual bool isFullySupported(int32_t captureMode, int32_t qualityLevel) const;
    virtual int32_t hashCode() const;
    virtual ::java::lang::String& toString() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
};

}  // namespace video
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCAPABILITIES

