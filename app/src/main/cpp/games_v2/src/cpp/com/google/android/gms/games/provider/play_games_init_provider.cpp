#include "com/google/android/gms/games/provider/play_games_init_provider.hpp"
#include <memory>
#include "android/content/content_provider.hpp"
#include "android/content/content_values.hpp"
#include "android/content/pm/provider_info.hpp"
#include "android/database/cursor.hpp"
#include "android/net/uri.hpp"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {
namespace provider {

namespace {

jobject CreateJavaPlayGamesInitProviderObject() {
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(PlayGamesInitProvider::GetClass(), "<init>", "()V");
  return env->NewObject(PlayGamesInitProvider::GetClass(), method_id);
}

}  // namespace

jclass PlayGamesInitProvider::GetClass()
{
  static const jclass cached_class = gni::GniCore::GetInstance()->GetClassGlobalRef("com/google/android/gms/games/provider/PlayGamesInitProvider");
  return cached_class;
}

void PlayGamesInitProvider::destroy(const PlayGamesInitProvider* object)
{
  delete object;
}

PlayGamesInitProvider::PlayGamesInitProvider() : PlayGamesInitProvider(gni::common::ScopedLocalRef<jobject>(gni::GniCore::GetInstance()->GetJniEnv(), CreateJavaPlayGamesInitProviderObject()).Get()) {}

void PlayGamesInitProvider::attachInfo(const jobject context, const ::android::content::pm::ProviderInfo& info) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "attachInfo", "(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V");
  env->CallVoidMethod(GetImpl(), method_id, gni::GniCore::GetInstance()->Convert(context).GetImpl(), info.GetImpl());
}

bool PlayGamesInitProvider::onCreate() const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "onCreate", "()Z");
  bool ret = env->CallBooleanMethod(GetImpl(), method_id);
  return ret;
}

::android::database::Cursor& PlayGamesInitProvider::query(const ::android::net::Uri& uri, const ::java::lang::String& projection, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs, const ::java::lang::String& sortOrder) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "query", "(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
  ::android::database::Cursor* ret = new ::android::database::Cursor(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, uri.GetImpl(), projection.GetImpl(), selection.GetImpl(), selectionArgs.GetImpl(), sortOrder.GetImpl())).Get());
  return *ret;
}

::java::lang::String& PlayGamesInitProvider::getType(const ::android::net::Uri& uri) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
  ::java::lang::String* ret = new ::java::lang::String(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, uri.GetImpl())).Get());
  return *ret;
}

::android::net::Uri& PlayGamesInitProvider::insert(const ::android::net::Uri& uri, const ::android::content::ContentValues& values) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
  ::android::net::Uri* ret = new ::android::net::Uri(gni::common::ScopedLocalRef<jobject>(env, env->CallObjectMethod(GetImpl(), method_id, uri.GetImpl(), values.GetImpl())).Get());
  return *ret;
}

int32_t PlayGamesInitProvider::delete_(const ::android::net::Uri& uri, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "delete_", "(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id, uri.GetImpl(), selection.GetImpl(), selectionArgs.GetImpl());
  return ret;
}

int32_t PlayGamesInitProvider::update(const ::android::net::Uri& uri, const ::android::content::ContentValues& values, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs) const
{
  JNIEnv *env = gni::GniCore::GetInstance()->GetJniEnv();
  static const jmethodID method_id = env->GetMethodID(GetClass(), "update", "(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I");
  int32_t ret = env->CallIntMethod(GetImpl(), method_id, uri.GetImpl(), values.GetImpl(), selection.GetImpl(), selectionArgs.GetImpl());
  return ret;
}

}  // namespace provider
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

