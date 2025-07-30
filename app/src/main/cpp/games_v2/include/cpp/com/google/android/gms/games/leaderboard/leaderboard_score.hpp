#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE

#include <memory>
#include "android/net/uri.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/player.hpp"
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

class LeaderboardScore : public ::com::google::android::gms::common::data::Freezable
{
public:
    using getRankCallback = int64_t (*)();
    using getDisplayRankCallback = ::java::lang::String* (*)();
    using getDisplayScoreCallback = ::java::lang::String* (*)();
    using getRawScoreCallback = int64_t (*)();
    using getTimestampMillisCallback = int64_t (*)();
    using getScoreHolderDisplayNameCallback = ::java::lang::String* (*)();
    using getScoreHolderIconImageUriCallback = ::android::net::Uri* (*)();
    using getScoreHolderHiResImageUriCallback = ::android::net::Uri* (*)();
    using getScoreHolderCallback = ::com::google::android::gms::games::Player* (*)();
    using getScoreTagCallback = ::java::lang::String* (*)();

    static jclass GetClass();
    static void destroy(const LeaderboardScore* object);
    static LeaderboardScore* ImplementInterface(getRankCallback get_rank_callback, getDisplayRankCallback get_display_rank_callback, getDisplayScoreCallback get_display_score_callback, getRawScoreCallback get_raw_score_callback, getTimestampMillisCallback get_timestamp_millis_callback, getScoreHolderDisplayNameCallback get_score_holder_display_name_callback, getScoreHolderIconImageUriCallback get_score_holder_icon_image_uri_callback, getScoreHolderHiResImageUriCallback get_score_holder_hi_res_image_uri_callback, getScoreHolderCallback get_score_holder_callback, getScoreTagCallback get_score_tag_callback);
    explicit LeaderboardScore(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object) {}
    ~LeaderboardScore() override = default;
    static constexpr int32_t LEADERBOARD_RANK_UNKNOWN = -1;
    virtual int64_t getRank() const;
    virtual ::java::lang::String& getDisplayRank() const;
    virtual ::java::lang::String& getDisplayScore() const;
    virtual int64_t getRawScore() const;
    virtual int64_t getTimestampMillis() const;
    virtual ::java::lang::String& getScoreHolderDisplayName() const;
    virtual ::android::net::Uri& getScoreHolderIconImageUri() const;
    virtual ::android::net::Uri& getScoreHolderHiResImageUri() const;
    virtual ::com::google::android::gms::games::Player& getScoreHolder() const;
    virtual ::java::lang::String& getScoreTag() const;
    getRankCallback get_rank_callback_ = nullptr;
    getDisplayRankCallback get_display_rank_callback_ = nullptr;
    getDisplayScoreCallback get_display_score_callback_ = nullptr;
    getRawScoreCallback get_raw_score_callback_ = nullptr;
    getTimestampMillisCallback get_timestamp_millis_callback_ = nullptr;
    getScoreHolderDisplayNameCallback get_score_holder_display_name_callback_ = nullptr;
    getScoreHolderIconImageUriCallback get_score_holder_icon_image_uri_callback_ = nullptr;
    getScoreHolderHiResImageUriCallback get_score_holder_hi_res_image_uri_callback_ = nullptr;
    getScoreHolderCallback get_score_holder_callback_ = nullptr;
    getScoreTagCallback get_score_tag_callback_ = nullptr;
};

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARDSCORE

