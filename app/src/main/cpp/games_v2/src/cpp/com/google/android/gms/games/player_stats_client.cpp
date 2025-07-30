#include "com/google/android/gms/games/player_stats_client.hpp"
#include <memory>
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/stats/player_stats.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

namespace {

jobject PlayerStatsClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{

  return nullptr;
}

}  // namespace

PlayerStatsClient* PlayerStatsClient::ImplementInterface(loadPlayerStatsCallback load_player_stats_callback)
{
  PlayerStatsClient* instance = new PlayerStatsClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/PlayerStatsClient", instance, PlayerStatsClientProxyCallback)));
  instance->load_player_stats_callback_ = load_player_stats_callback;
  return instance;
}

jclass PlayerStatsClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayerStatsClient");
  return cached_class;
}

void PlayerStatsClient::destroy(const PlayerStatsClient* object)
{
  delete object;
}

::gni::Task& PlayerStatsClient::loadPlayerStats(bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadPlayerStats", "(Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

