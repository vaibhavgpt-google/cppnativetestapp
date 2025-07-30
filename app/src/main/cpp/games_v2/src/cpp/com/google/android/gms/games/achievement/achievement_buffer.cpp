#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"
#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/achievement/achievement.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace achievement {

jclass AchievementBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/achievement/AchievementBuffer");
  return cached_class;
}

void AchievementBuffer::destroy(const AchievementBuffer* object)
{
  delete object;
}

::com::google::android::gms::games::achievement::Achievement& AchievementBuffer::get(int32_t position) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Lcom/google/android/gms/games/achievement/Achievement;");
  ::com::google::android::gms::games::achievement::Achievement* ret = new ::com::google::android::gms::games::achievement::Achievement(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, position)).Get());
  return *ret;
}

}  // namespace achievement
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

