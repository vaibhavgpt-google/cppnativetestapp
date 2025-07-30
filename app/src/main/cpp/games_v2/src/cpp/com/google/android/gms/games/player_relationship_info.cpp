#include "com/google/android/gms/games/player_relationship_info.hpp"
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

namespace {

jobject PlayerRelationshipInfoProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{

  return nullptr;
}

}  // namespace

PlayerRelationshipInfo* PlayerRelationshipInfo::ImplementInterface(getFriendStatusCallback get_friend_status_callback)
{
  PlayerRelationshipInfo* instance = new PlayerRelationshipInfo(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/PlayerRelationshipInfo", instance, PlayerRelationshipInfoProxyCallback)));
  instance->get_friend_status_callback_ = get_friend_status_callback;
  return instance;
}

jclass PlayerRelationshipInfo::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayerRelationshipInfo");
  return cached_class;
}

void PlayerRelationshipInfo::destroy(const PlayerRelationshipInfo* object)
{
  delete object;
}

int32_t PlayerRelationshipInfo::getFriendStatus() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFriendStatus", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

