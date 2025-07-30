#include "com/google/android/gms/games/play_games_sdk.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass PlayGamesSdk::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/PlayGamesSdk");
  return cached_class;
}

void PlayGamesSdk::destroy(const PlayGamesSdk* object)
{
  delete object;
}

void PlayGamesSdk::initialize(const jobject context)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "initialize", "(Landroid/content/Context;)V");
  env->CallStaticVoidMethod(GetClass(), method_id, gni::GniCore::GetInstance()->Convert(context).GetImpl());
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

