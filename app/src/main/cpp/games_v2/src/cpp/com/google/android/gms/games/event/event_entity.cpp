#include "com/google/android/gms/games/event/event_entity.hpp"
#include <memory>
#include "android/net/uri.hpp"
#include "android/os/parcel.hpp"
#include "android/os/parcelable.hpp"
#include "com/google/android/gms/games/event/event.hpp"
#include "com/google/android/gms/games/internal/games_abstract_safe_parcelable.hpp"
#include "com/google/android/gms/games/player.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace event {

namespace {

jobject CreateJavaEventEntityObject(const ::com::google::android::gms::games::event::Event& event) {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(EventEntity::GetClass(), "<init>", "(Lcom/google/android/gms/games/event/Event;)V");
  return env->NewObject(EventEntity::GetClass(), method_id, event.GetImpl());
}

}  // namespace

jclass EventEntity::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/event/EventEntity");
  return cached_class;
}

void EventEntity::destroy(const EventEntity* object)
{
  delete object;
}

EventEntity::EventEntity(const ::com::google::android::gms::games::event::Event& event) : EventEntity(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaEventEntityObject(event)).Get()) {}

::java::lang::String& EventEntity::getEventId() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getEventId", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& EventEntity::getName() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getName", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& EventEntity::getDescription() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getDescription", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::android::net::Uri& EventEntity::getIconImageUri() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getIconImageUri", "()Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::java::lang::String& EventEntity::getIconImageUrl() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getIconImageUrl", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

::com::google::android::gms::games::Player& EventEntity::getPlayer() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getPlayer", "()Lcom/google/android/gms/games/Player;");
  ::com::google::android::gms::games::Player* ret = new ::com::google::android::gms::games::Player(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

int64_t EventEntity::getValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getValue", "()J");
  int64_t ret = env->CallLongMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& EventEntity::getFormattedValue() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getFormattedValue", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool EventEntity::isVisible() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isVisible", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

::com::google::android::gms::games::event::Event& EventEntity::freeze() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "freeze", "()Lcom/google/android/gms/games/event/Event;");
  ::com::google::android::gms::games::event::Event* ret = new ::com::google::android::gms::games::event::Event(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

bool EventEntity::isDataValid() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "isDataValid", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

int32_t EventEntity::hashCode() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "hashCode", "()I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id);
  return ret;
}

::java::lang::String& EventEntity::toString() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "toString", "()Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id)).Get());
  return *ret;
}

void EventEntity::writeToParcel(const ::android::os::Parcel& out, int32_t flags) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "writeToParcel", "(Landroid/os/Parcel;I)V");
  env->CallVoidMethod(GetImpl(), method_id, out.GetImpl(), flags);
}

}  // namespace event
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

