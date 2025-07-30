#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION

#include <memory>
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/internal/safeparcel/abstract_safe_parcelable.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace video {

class VideoConfiguration : public ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable
{
public:
    class Builder;

    static jclass GetClass();
    static void destroy(const VideoConfiguration* object);
    explicit VideoConfiguration(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::internal::safeparcel::AbstractSafeParcelable(object) {}
    ~VideoConfiguration() override = default;
    static constexpr int32_t QUALITY_LEVEL_FULLHD = 3;
    static constexpr int32_t QUALITY_LEVEL_XHD = 2;
    static constexpr int32_t QUALITY_LEVEL_HD = 1;
    static constexpr int32_t QUALITY_LEVEL_SD = 0;
    static constexpr int32_t QUALITY_LEVEL_UNKNOWN = -1;
    static constexpr int32_t NUM_QUALITY_LEVEL = 4;
    static constexpr int32_t CAPTURE_MODE_UNKNOWN = -1;
    static constexpr int32_t CAPTURE_MODE_FILE = 0;
    static constexpr int32_t CAPTURE_MODE_STREAM = 1;
    static constexpr int32_t NUM_CAPTURE_MODE = 2;
    virtual int32_t getQualityLevel() const;
    virtual int32_t getCaptureMode() const;
    virtual bool getCameraEnabled() const;
    virtual bool getMicEnabled() const;
    virtual void writeToParcel(const ::android::os::Parcel& out, int32_t flags) const;
    static bool isValidQualityLevel(int32_t qualityLevel, bool allowUnknown);
    static bool isValidCaptureMode(int32_t captureMode, bool allowUnknown);

    class Builder : virtual public ::gni::Object
    {
    public:
        static jclass GetClass();
        static void destroy(const Builder* object);
        explicit Builder(jobject object) : ::gni::Object(object) {}
        ~Builder() override = default;
        explicit Builder(int32_t qualityLevel, int32_t captureMode);
        virtual ::com::google::android::gms::games::video::VideoConfiguration::Builder& setQualityLevel(int32_t qualityLevel) const;
        virtual ::com::google::android::gms::games::video::VideoConfiguration::Builder& setCaptureMode(int32_t captureMode) const;
        virtual ::com::google::android::gms::games::video::VideoConfiguration::Builder& setMicEnabled(bool micEnabled) const;
        virtual ::com::google::android::gms::games::video::VideoConfiguration::Builder& setCameraEnabled(bool cameraEnabled) const;
        virtual ::com::google::android::gms::games::video::VideoConfiguration& build() const;
    };
};

}  // namespace video
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_VIDEO_VIDEOCONFIGURATION

