#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT

#include <memory>
#include "com/google/android/gms/common/data/freezable.hpp"
#include "gni/common/interface_proxy.h"
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

class LeaderboardVariant : public ::com::google::android::gms::common::data::Freezable
{
public:
    using getTimeSpanCallback = int32_t (*)();
    using getCollectionCallback = int32_t (*)();
    using hasPlayerInfoCallback = bool (*)();
    using getRawPlayerScoreCallback = int64_t (*)();
    using getDisplayPlayerScoreCallback = ::java::lang::String* (*)();
    using getPlayerRankCallback = int64_t (*)();
    using getDisplayPlayerRankCallback = ::java::lang::String* (*)();
    using getPlayerScoreTagCallback = ::java::lang::String* (*)();
    using getNumScoresCallback = int64_t (*)();

    static jclass GetClass();
    static void destroy(const LeaderboardVariant* object);
    static LeaderboardVariant* ImplementInterface(getTimeSpanCallback get_time_span_callback, getCollectionCallback get_collection_callback, hasPlayerInfoCallback has_player_info_callback, getRawPlayerScoreCallback get_raw_player_score_callback, getDisplayPlayerScoreCallback get_display_player_score_callback, getPlayerRankCallback get_player_rank_callback, getDisplayPlayerRankCallback get_display_player_rank_callback, getPlayerScoreTagCallback get_player_score_tag_callback, getNumScoresCallback get_num_scores_callback);
    explicit LeaderboardVariant(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object) {}
    ~LeaderboardVariant() override = default;
    static constexpr int32_t COLLECTION_PUBLIC = 0;
    static constexpr int32_t COLLECTION_FRIENDS = 3;
    static constexpr int32_t TIME_SPAN_DAILY = 0;
    static constexpr int32_t TIME_SPAN_WEEKLY = 1;
    static constexpr int32_t TIME_SPAN_ALL_TIME = 2;
    static constexpr int32_t NUM_TIME_SPANS = 3;
    static constexpr int32_t PLAYER_SCORE_UNKNOWN = -1;
    static constexpr int32_t PLAYER_RANK_UNKNOWN = -1;
    static constexpr int32_t NUM_SCORES_UNKNOWN = -1;
    virtual int32_t getTimeSpan() const;
    virtual int32_t getCollection() const;
    virtual bool hasPlayerInfo() const;
    virtual int64_t getRawPlayerScore() const;
    virtual ::java::lang::String& getDisplayPlayerScore() const;
    virtual int64_t getPlayerRank() const;
    virtual ::java::lang::String& getDisplayPlayerRank() const;
    virtual ::java::lang::String& getPlayerScoreTag() const;
    virtual int64_t getNumScores() const;
    getTimeSpanCallback get_time_span_callback_ = nullptr;
    getCollectionCallback get_collection_callback_ = nullptr;
    hasPlayerInfoCallback has_player_info_callback_ = nullptr;
    getRawPlayerScoreCallback get_raw_player_score_callback_ = nullptr;
    getDisplayPlayerScoreCallback get_display_player_score_callback_ = nullptr;
    getPlayerRankCallback get_player_rank_callback_ = nullptr;
    getDisplayPlayerRankCallback get_display_player_rank_callback_ = nullptr;
    getPlayerScoreTagCallback get_player_score_tag_callback_ = nullptr;
    getNumScoresCallback get_num_scores_callback_ = nullptr;
};

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDVARIANT

