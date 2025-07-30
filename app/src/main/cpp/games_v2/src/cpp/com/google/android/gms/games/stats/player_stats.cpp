#include "com/google/android/gms/games/stats/player_stats.hpp"
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

namespace {

jobject PlayerStatsProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{

  return nullptr;
}

}  // namespace

PlayerStats* PlayerStats::ImplementInterface(getAverageSessionLengthCallback get_average_session_length_callback, getDaysSinceLastPlayedCallback get_days_since_last_played_callback, getNumberOfPurchasesCallback get_number_of_purchases_callback, getNumberOfSessionsCallback get_number_of_sessions_callback, getSessionPercentileCallback get_session_percentile_callback, getSpendPercentileCallback get_spend_percentile_callback)
{
  PlayerStats* instance = new PlayerStats(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/stats/PlayerStats", instance, PlayerStatsProxyCallback)));
  instance->get_average_session_length_callback_ = get_average_session_length_callback;
  instance->get_days_since_last_played_callback_ = get_days_since_last_played_callback;
  instance->get_number_of_purchases_callback_ = get_number_of_purchases_callback;
  instance->get_number_of_sessions_callback_ = get_number_of_sessions_callback;
  instance->get_session_percentile_callback_ = get_session_percentile_callback;
  instance->get_spend_percentile_callback_ = get_spend_percentile_callback;
  return instance;
}

jclass PlayerStats::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/stats/PlayerStats");
  return cached_class;
}

void PlayerStats::destroy(const PlayerStats* object)
{
  delete object;
}

float PlayerStats::getAverageSessionLength() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getAverageSessionLength", "()F");
  float ret = env->CallFloatMethod(GetImpl(), method_id);
  return ret;
}

int32_t PlayerStats::getDaysSinceLastPlayed() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDaysSinceLastPlayed", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t PlayerStats::getNumberOfPurchases() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getNumberOfPurchases", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

int32_t PlayerStats::getNumberOfSessions() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getNumberOfSessions", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

float PlayerStats::getSessionPercentile() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSessionPercentile", "()F");
  float ret = env->CallFloatMethod(GetImpl(), method_id);
  return ret;
}

float PlayerStats::getSpendPercentile() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getSpendPercentile", "()F");
  float ret = env->CallFloatMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace stats
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

