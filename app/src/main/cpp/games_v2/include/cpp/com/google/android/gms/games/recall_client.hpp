#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT

#include <memory>
#include "com/google/android/gms/games/recall_access.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class RecallClient : virtual public ::gni::Object
{
public:
    using requestRecallAccessCallback = ::gni::Task* (*)();

    static jclass GetClass();
    static void destroy(const RecallClient* object);
    static RecallClient* ImplementInterface(requestRecallAccessCallback request_recall_access_callback);
    explicit RecallClient(jobject object) : ::gni::Object(object) {}
    ~RecallClient() override = default;
    virtual ::gni::Task& requestRecallAccess() const;
    requestRecallAccessCallback request_recall_access_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_RECALLCLIENT

