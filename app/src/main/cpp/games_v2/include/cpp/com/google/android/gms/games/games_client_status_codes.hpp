#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES

#include <memory>
#include "com/google/android/gms/common/api/common_status_codes.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class GamesClientStatusCodes : public ::com::google::android::gms::common::api::CommonStatusCodes
{
public:
    static jclass GetClass();
    static void destroy(const GamesClientStatusCodes* object);
    explicit GamesClientStatusCodes(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::api::CommonStatusCodes(object) {}
    ~GamesClientStatusCodes() override = default;
    static constexpr int32_t NETWORK_ERROR_NO_DATA = 26504;
    static constexpr int32_t NETWORK_ERROR_OPERATION_FAILED = 26506;
    static constexpr int32_t LICENSE_CHECK_FAILED = 26507;
    static constexpr int32_t APP_MISCONFIGURED = 26508;
    static constexpr int32_t GAME_NOT_FOUND = 26509;
    static constexpr int32_t ACHIEVEMENT_UNLOCK_FAILURE = 26560;
    static constexpr int32_t ACHIEVEMENT_UNKNOWN = 26561;
    static constexpr int32_t ACHIEVEMENT_NOT_INCREMENTAL = 26562;
    static constexpr int32_t ACHIEVEMENT_UNLOCKED = 26563;
    static constexpr int32_t SNAPSHOT_NOT_FOUND = 26570;
    static constexpr int32_t SNAPSHOT_CREATION_FAILED = 26571;
    static constexpr int32_t SNAPSHOT_CONTENTS_UNAVAILABLE = 26572;
    static constexpr int32_t SNAPSHOT_COMMIT_FAILED = 26573;
    static constexpr int32_t SNAPSHOT_FOLDER_UNAVAILABLE = 26575;
    static constexpr int32_t SNAPSHOT_CONFLICT_MISSING = 26576;
    static constexpr int32_t OPERATION_IN_FLIGHT = 26607;
    static constexpr int32_t VIDEO_NOT_ACTIVE = 26620;
    static constexpr int32_t VIDEO_UNSUPPORTED = 26621;
    static constexpr int32_t VIDEO_PERMISSION_ERROR = 26622;
    static constexpr int32_t VIDEO_STORAGE_ERROR = 26623;
    static constexpr int32_t VIDEO_UNEXPECTED_CAPTURE_ERROR = 26624;
    static constexpr int32_t VIDEO_ALREADY_CAPTURING = 26625;
    static constexpr int32_t VIDEO_OUT_OF_DISK_SPACE = 26626;
    static constexpr int32_t CONSENT_REQUIRED = 26703;
    static ::java::lang::String& getStatusCodeString(int32_t statusCode);
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_GAMESCLIENTSTATUSCODES

