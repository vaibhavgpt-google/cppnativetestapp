#include "com/google/android/gms/games/players_client.hpp"
#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "com/google/android/gms/games/player_buffer.hpp"
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

namespace {

jobject PlayersClientProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{
  if (strcmp(method_name, "getCurrentPlayerId") == 0)
  {
    auto result = reinterpret_cast<PlayersClient*>(object_pointer)->get_current_player_id_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "loadPlayer") == 0)
  {
    auto result = reinterpret_cast<PlayersClient*>(object_pointer)->load_player_callback_(new ::java::lang::String(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "getCompareProfileIntent") == 0)
  {
    auto result = reinterpret_cast<PlayersClient*>(object_pointer)->get_compare_profile_intent_callback_(new ::com::google::android::gms::games::Player(arguments[0]));
    return result == nullptr ? nullptr : result->GetJniReference();
  }
  else if (strcmp(method_name, "getPlayerSearchIntent") == 0)
  {
    auto result = reinterpret_cast<PlayersClient*>(object_pointer)->get_player_search_intent_callback_();
    return result == nullptr ? nullptr : result->GetJniReference();
  }

  return nullptr;
}

}  // namespace

PlayersClient* PlayersClient::ImplementInterface(getCurrentPlayerIdCallback get_current_player_id_callback, getCurrentPlayerCallback get_current_player_callback, loadPlayerCallback load_player_callback, getCompareProfileIntentCallback get_compare_profile_intent_callback, getCompareProfileIntentWithAlternativeNameHintsCallback get_compare_profile_intent_with_alternative_name_hints_callback, getPlayerSearchIntentCallback get_player_search_intent_callback, loadFriendsCallback load_friends_callback, loadMoreFriendsCallback load_more_friends_callback)
{
  PlayersClient* instance = new PlayersClient(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/PlayersClient", instance, PlayersClientProxyCallback)));
  instance->get_current_player_id_callback_ = get_current_player_id_callback;
  instance->get_current_player_callback_ = get_current_player_callback;
  instance->load_player_callback_ = load_player_callback;
  instance->get_compare_profile_intent_callback_ = get_compare_profile_intent_callback;
  instance->get_compare_profile_intent_with_alternative_name_hints_callback_ = get_compare_profile_intent_with_alternative_name_hints_callback;
  instance->get_player_search_intent_callback_ = get_player_search_intent_callback;
  instance->load_friends_callback_ = load_friends_callback;
  instance->load_more_friends_callback_ = load_more_friends_callback;
  return instance;
}

jclass PlayersClient::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayersClient");
  return cached_class;
}

void PlayersClient::destroy(const PlayersClient* object)
{
  delete object;
}

::gni::Task& PlayersClient::getCurrentPlayerId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentPlayerId", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& PlayersClient::getCurrentPlayer(bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCurrentPlayer", "(Z)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, forceReload)).Get());
  return *ret;
}

::gni::Task& PlayersClient::loadPlayer(const ::java::lang::String& playerId) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadPlayer", "(Ljava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, playerId.GetImpl())).Get());
  return *ret;
}

::gni::Task& PlayersClient::getCompareProfileIntent(const ::com::google::android::gms::games::Player& player) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCompareProfileIntent", "(Lcom/google/android/gms/games/Player;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, player.GetImpl())).Get());
  return *ret;
}

::gni::Task& PlayersClient::getCompareProfileIntentWithAlternativeNameHints(const ::java::lang::String& otherPlayerId, const ::java::lang::String& otherPlayerInGameName, const ::java::lang::String& currentPlayerInGameName) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getCompareProfileIntentWithAlternativeNameHints", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, otherPlayerId.GetImpl(), otherPlayerInGameName.GetImpl(), currentPlayerInGameName.GetImpl())).Get());
  return *ret;
}

::gni::Task& PlayersClient::getPlayerSearchIntent() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayerSearchIntent", "()Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::gni::Task& PlayersClient::loadFriends(int32_t pageSize, bool forceReload) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadFriends", "(IZ)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, pageSize, forceReload)).Get());
  return *ret;
}

::gni::Task& PlayersClient::loadMoreFriends(int32_t pageSize) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "loadMoreFriends", "(I)Lcom/google/android/gms/tasks/Task;");
  ::gni::Task* ret = new ::gni::Task(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, pageSize)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

