#include "com/google/android/gms/games/event/event_buffer.hpp"
#include <memory>
#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"
#include "com/google/android/gms/games/event/event.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace event {

jclass EventBuffer::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/event/EventBuffer");
  return cached_class;
}

void EventBuffer::destroy(const EventBuffer* object)
{
  delete object;
}

::com::google::android::gms::games::event::Event& EventBuffer::get(int32_t position) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "get", "(I)Lcom/google/android/gms/games/event/Event;");
  ::com::google::android::gms::games::event::Event* ret = new ::com::google::android::gms::games::event::Event(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, position)).Get());
  return *ret;
}

}  // namespace event
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

