#include "com/google/android/gms/games/game_buffer.hpp"
#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/game.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass GameBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/GameBuffer");
  return cached_class;
}

void GameBuffer::destroy(const GameBuffer* object)
{
  delete object;
}

::com::google::android::gms::games::Game& GameBuffer::get(int32_t position) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Lcom/google/android/gms/games/Game;");
  ::com::google::android::gms::games::Game* ret = new ::com::google::android::gms::games::Game(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, position)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

