#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS

#include <memory>
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/common/data/freezable.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace stats {

class PlayerStats : public ::com::google::android::gms::common::data::Freezable, public ::android::os::Parcelable
{
public:
    using getAverageSessionLengthCallback = float (*)();
    using getDaysSinceLastPlayedCallback = int32_t (*)();
    using getNumberOfPurchasesCallback = int32_t (*)();
    using getNumberOfSessionsCallback = int32_t (*)();
    using getSessionPercentileCallback = float (*)();
    using getSpendPercentileCallback = float (*)();

    static jclass GetClass();
    static void destroy(const PlayerStats* object);
    static PlayerStats* ImplementInterface(getAverageSessionLengthCallback get_average_session_length_callback, getDaysSinceLastPlayedCallback get_days_since_last_played_callback, getNumberOfPurchasesCallback get_number_of_purchases_callback, getNumberOfSessionsCallback get_number_of_sessions_callback, getSessionPercentileCallback get_session_percentile_callback, getSpendPercentileCallback get_spend_percentile_callback);
    explicit PlayerStats(jobject object) : ::gni::Object(object), ::com::google::android::gms::common::data::Freezable(object), ::android::os::Parcelable(object) {}
    ~PlayerStats() override = default;
    static constexpr float UNSET_VALUE = -1.0;
    virtual float getAverageSessionLength() const;
    virtual int32_t getDaysSinceLastPlayed() const;
    virtual int32_t getNumberOfPurchases() const;
    virtual int32_t getNumberOfSessions() const;
    virtual float getSessionPercentile() const;
    virtual float getSpendPercentile() const;
    getAverageSessionLengthCallback get_average_session_length_callback_ = nullptr;
    getDaysSinceLastPlayedCallback get_days_since_last_played_callback_ = nullptr;
    getNumberOfPurchasesCallback get_number_of_purchases_callback_ = nullptr;
    getNumberOfSessionsCallback get_number_of_sessions_callback_ = nullptr;
    getSessionPercentileCallback get_session_percentile_callback_ = nullptr;
    getSpendPercentileCallback get_spend_percentile_callback_ = nullptr;
};

}  // namespace stats
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_STATS_PLAYERSTATS

