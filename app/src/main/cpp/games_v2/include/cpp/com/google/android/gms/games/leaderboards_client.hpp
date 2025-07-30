#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT

#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/common/api/releasable.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_score_buffer.hpp"
#include "com/google/android/gms/games/leaderboard/score_submission_data.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class LeaderboardsClient : virtual public ::gni::Object
{
public:
    class LeaderboardScores;

    using getAllLeaderboardsIntentCallback = ::gni::Task* (*)();
    using getLeaderboardIntentCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t, int32_t);
    using loadLeaderboardMetadataCallback = ::gni::Task* (*)(const ::java::lang::String*, bool);
    using loadCurrentPlayerLeaderboardScoreCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t, int32_t);
    using loadTopScoresCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t, int32_t, int32_t, bool);
    using loadPlayerCenteredScoresCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t, int32_t, int32_t, bool);
    using loadMoreScoresCallback = ::gni::Task* (*)(const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer*, int32_t, int32_t);
    using submitScoreCallback = void (*)(const ::java::lang::String*, int64_t, const ::java::lang::String*);
    using submitScoreImmediateCallback = ::gni::Task* (*)(const ::java::lang::String*, int64_t, const ::java::lang::String*);

    static jclass GetClass();
    static void destroy(const LeaderboardsClient* object);
    static LeaderboardsClient* ImplementInterface(getAllLeaderboardsIntentCallback get_all_leaderboards_intent_callback, getLeaderboardIntentCallback get_leaderboard_intent_callback, loadLeaderboardMetadataCallback load_leaderboard_metadata_callback, loadCurrentPlayerLeaderboardScoreCallback load_current_player_leaderboard_score_callback, loadTopScoresCallback load_top_scores_callback, loadPlayerCenteredScoresCallback load_player_centered_scores_callback, loadMoreScoresCallback load_more_scores_callback, submitScoreCallback submit_score_callback, submitScoreImmediateCallback submit_score_immediate_callback);
    explicit LeaderboardsClient(jobject object) : ::gni::Object(object) {}
    ~LeaderboardsClient() override = default;
    virtual ::gni::Task& getAllLeaderboardsIntent() const;
    virtual ::gni::Task& getLeaderboardIntent(const ::java::lang::String& leaderboardId, int32_t timeSpan, int32_t collection) const;
    virtual ::gni::Task& loadLeaderboardMetadata(const ::java::lang::String& leaderboardId, bool forceReload) const;
    virtual ::gni::Task& loadCurrentPlayerLeaderboardScore(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection) const;
    virtual ::gni::Task& loadTopScores(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection, int32_t maxResults, bool forceReload) const;
    virtual ::gni::Task& loadPlayerCenteredScores(const ::java::lang::String& leaderboardId, int32_t span, int32_t leaderboardCollection, int32_t maxResults, bool forceReload) const;
    virtual ::gni::Task& loadMoreScores(const ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer& buffer, int32_t maxResults, int32_t pageDirection) const;
    virtual void submitScore(const ::java::lang::String& leaderboardId, int64_t score, const ::java::lang::String& scoreTag) const;
    virtual ::gni::Task& submitScoreImmediate(const ::java::lang::String& leaderboardId, int64_t score, const ::java::lang::String& scoreTag) const;
    getAllLeaderboardsIntentCallback get_all_leaderboards_intent_callback_ = nullptr;
    getLeaderboardIntentCallback get_leaderboard_intent_callback_ = nullptr;
    loadLeaderboardMetadataCallback load_leaderboard_metadata_callback_ = nullptr;
    loadCurrentPlayerLeaderboardScoreCallback load_current_player_leaderboard_score_callback_ = nullptr;
    loadTopScoresCallback load_top_scores_callback_ = nullptr;
    loadPlayerCenteredScoresCallback load_player_centered_scores_callback_ = nullptr;
    loadMoreScoresCallback load_more_scores_callback_ = nullptr;
    submitScoreCallback submit_score_callback_ = nullptr;
    submitScoreImmediateCallback submit_score_immediate_callback_ = nullptr;

    class LeaderboardScores : public ::com::google::android::gms::common::api::Releasable
    {
    public:
        static jclass GetClass();
        static void destroy(const LeaderboardScores* object);
        explicit LeaderboardScores(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::api::Releasable(object) {}
        ~LeaderboardScores() override = default;
        virtual ::com::google::android::gms::games::leaderboard::Leaderboard& getLeaderboard() const;
        virtual ::com::google::android::gms::games::leaderboard::LeaderboardScoreBuffer& getScores() const;
        virtual void release() const;
    };
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARDSCLIENT

