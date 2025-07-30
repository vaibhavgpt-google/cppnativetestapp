#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER

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

class PlayGamesInitProvider : public ::android::content::ContentProvider
{
public:
    static jclass GetClass();
    static void destroy(const PlayGamesInitProvider* object);
    explicit PlayGamesInitProvider(jobject object) : ::gni::Object(object), ::android::content::ContentProvider(object) {}
    ~PlayGamesInitProvider() override = default;
    explicit PlayGamesInitProvider();
    virtual void attachInfo(const jobject context, const ::android::content::pm::ProviderInfo& info) const;
    virtual bool onCreate() const;
    virtual ::android::database::Cursor& query(const ::android::net::Uri& uri, const ::java::lang::String& projection, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs, const ::java::lang::String& sortOrder) const;
    virtual ::java::lang::String& getType(const ::android::net::Uri& uri) const;
    virtual ::android::net::Uri& insert(const ::android::net::Uri& uri, const ::android::content::ContentValues& values) const;
    virtual int32_t delete_(const ::android::net::Uri& uri, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs) const;
    virtual int32_t update(const ::android::net::Uri& uri, const ::android::content::ContentValues& values, const ::java::lang::String& selection, const ::java::lang::String& selectionArgs) const;
};

}  // namespace provider
}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_PROVIDER_PLAYGAMESINITPROVIDER

