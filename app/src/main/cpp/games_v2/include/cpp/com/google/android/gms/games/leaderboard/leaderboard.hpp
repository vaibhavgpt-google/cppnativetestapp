#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD

#include <memory>
#include "android/net/uri.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "com/google/android/gms/games/leaderboard/leaderboard_variant.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"
#include "java/util/array_list.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace leaderboard {

class Leaderboard : public ::com::google::android::gms::common::data::Freezable
{
public:
    using getLeaderboardIdCallback = ::java::lang::String* (*)();
    using getDisplayNameCallback = ::java::lang::String* (*)();
    using getIconImageUriCallback = ::android::net::Uri* (*)();
    using getScoreOrderCallback = int32_t (*)();
    using getVariantsCallback = ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>* (*)();

    static jclass GetClass();
    static void destroy(const Leaderboard* object);
    static Leaderboard* ImplementInterface(getLeaderboardIdCallback get_leaderboard_id_callback, getDisplayNameCallback get_display_name_callback, getIconImageUriCallback get_icon_image_uri_callback, getScoreOrderCallback get_score_order_callback, getVariantsCallback get_variants_callback);
    explicit Leaderboard(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object) {}
    ~Leaderboard() override = default;
    static constexpr int32_t SCORE_ORDER_SMALLER_IS_BETTER = 0;
    static constexpr int32_t SCORE_ORDER_LARGER_IS_BETTER = 1;
    virtual ::java::lang::String& getLeaderboardId() const;
    virtual ::java::lang::String& getDisplayName() const;
    virtual ::android::net::Uri& getIconImageUri() const;
    virtual int32_t getScoreOrder() const;
    virtual ::java::util::ArrayList<::com::google::android::gms::games::leaderboard::LeaderboardVariant>& getVariants() const;
    getLeaderboardIdCallback get_leaderboard_id_callback_ = nullptr;
    getDisplayNameCallback get_display_name_callback_ = nullptr;
    getIconImageUriCallback get_icon_image_uri_callback_ = nullptr;
    getScoreOrderCallback get_score_order_callback_ = nullptr;
    getVariantsCallback get_variants_callback_ = nullptr;
};

}  // namespace leaderboard
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_LEADERBOARD_LEADERBOARD

