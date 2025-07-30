#include "com/google/android/gms/games/achievement/achievement_buffer.h"

#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"

AchievementBuffer* AchievementBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AchievementBuffer*>(new ::com::google::android::gms::games::achievement::AchievementBuffer(jobj));
}

jobject AchievementBuffer_getJniReference(const AchievementBuffer* achievement_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementBuffer*>(achievement_buffer)->GetImpl();
}

void AchievementBuffer_destroy(const AchievementBuffer* achievement_buffer) {
  ::com::google::android::gms::games::achievement::AchievementBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementBuffer*>(achievement_buffer));
}

Achievement* AchievementBuffer_get(const AchievementBuffer* achievement_buffer, int32_t position) {
  return reinterpret_cast<Achievement*>(&reinterpret_cast<const ::com::google::android::gms::games::achievement::AchievementBuffer*>(achievement_buffer)->get(position));
}
