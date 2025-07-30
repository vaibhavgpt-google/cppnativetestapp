#include "com/google/android/gms/games/games_callback_status_codes.hpp"
#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

jclass GamesCallbackStatusCodes::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/GamesCallbackStatusCodes");
  return cached_class;
}

void GamesCallbackStatusCodes::destroy(const GamesCallbackStatusCodes* object)
{
  delete object;
}

::java::lang::String& GamesCallbackStatusCodes::getStatusCodeString(int32_t statusCode)
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetStaticMethodID(GetClass(), "getStatusCodeString", "(I)Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallStaticObjectMethod(GetClass(), method_id, statusCode)).Get());
  return *ret;
}

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

