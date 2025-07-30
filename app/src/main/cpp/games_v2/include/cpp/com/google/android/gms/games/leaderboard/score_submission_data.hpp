#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA

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
namespace leaderboard {

class ScoreSubmissionData : virtual public ::gni::Object
{
public:
    class Result;

    static jclass GetClass();
    static void destroy(const ScoreSubmissionData* object);
    explicit ScoreSubmissionData(jobject object) : ::gni::Object(object) {}
    ~ScoreSubmissionData() override = default;
    virtual ::java::lang::String& getLeaderboardId() const;
    virtual ::java::lang::String& getPlayerId() const;
    virtual ::com::google::android::gms::games::leaderboard::ScoreSubmissionData::Result& getScoreResult(int32_t timeSpan) const;
    virtual ::java::lang::String& toString() const;

    class Result : virtual public ::gni::Object
    {
    public:
        static jclass GetClass();
        static void destroy(const Result* object);
        explicit Result(jobject object) : ::gni::Object(object) {}
        ~Result() override = default;
        virtual ::java::lang::String& toString() const;
    };
};

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_SCORESUBMISSIONDATA

