#include "com/google/android/gms/games/current_player_info.hpp"
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

jobject CurrentPlayerInfoProxyCallback(void* object_pointer, const char* method_name, jobject* arguments, uint32_t arguments_count)
{

  return nullptr;
}

}  // namespace

CurrentPlayerInfo* CurrentPlayerInfo::ImplementInterface(getFriendsListVisibilityStatusCallback get_friends_list_visibility_status_callback)
{
  CurrentPlayerInfo* instance = new CurrentPlayerInfo(nullptr);
  instance->SetImpl(gni::GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(gni::common::interface_proxy::RegisterCallback("com/google/android/gms/games/CurrentPlayerInfo", instance, CurrentPlayerInfoProxyCallback)));
  instance->get_friends_list_visibility_status_callback_ = get_friends_list_visibility_status_callback;
  return instance;
}

jclass CurrentPlayerInfo::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/CurrentPlayerInfo");
  return cached_class;
}

void CurrentPlayerInfo::destroy(const CurrentPlayerInfo* object)
{
  delete object;
}

int32_t CurrentPlayerInfo::getFriendsListVisibilityStatus() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFriendsListVisibilityStatus", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

