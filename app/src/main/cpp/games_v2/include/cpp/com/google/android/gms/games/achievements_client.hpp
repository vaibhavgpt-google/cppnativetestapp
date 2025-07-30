#ifndef CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT
#define CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT

#include <memory>
#include "android/content/intent.hpp"
#include "com/google/android/gms/games/achievement/achievement_buffer.hpp"
#include "com/google/android/gms/games/annotated_data.hpp"
#include "gni/common/interface_proxy.h"
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "gni/task.hpp"
#include "java/lang/boolean.hpp"
#include "java/lang/string.hpp"

namespace com {
namespace google {
namespace android {
namespace gms {
namespace games {

class AchievementsClient : virtual public ::gni::Object
{
public:
    using getAchievementsIntentCallback = ::gni::Task* (*)();
    using loadCallback = ::gni::Task* (*)(bool);
    using revealCallback = void (*)(const ::java::lang::String*);
    using revealImmediateCallback = ::gni::Task* (*)(const ::java::lang::String*);
    using unlockCallback = void (*)(const ::java::lang::String*);
    using unlockImmediateCallback = ::gni::Task* (*)(const ::java::lang::String*);
    using incrementCallback = void (*)(const ::java::lang::String*, int32_t);
    using incrementImmediateCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t);
    using setStepsCallback = void (*)(const ::java::lang::String*, int32_t);
    using setStepsImmediateCallback = ::gni::Task* (*)(const ::java::lang::String*, int32_t);

    static jclass GetClass();
    static void destroy(const AchievementsClient* object);
    static AchievementsClient* ImplementInterface(getAchievementsIntentCallback get_achievements_intent_callback, loadCallback load_callback, revealCallback reveal_callback, revealImmediateCallback reveal_immediate_callback, unlockCallback unlock_callback, unlockImmediateCallback unlock_immediate_callback, incrementCallback increment_callback, incrementImmediateCallback increment_immediate_callback, setStepsCallback set_steps_callback, setStepsImmediateCallback set_steps_immediate_callback);
    explicit AchievementsClient(jobject object) : ::gni::Object(object) {}
    ~AchievementsClient() override = default;
    virtual ::gni::Task& getAchievementsIntent() const;
    virtual ::gni::Task& load(bool forceReload) const;
    virtual void reveal(const ::java::lang::String& id) const;
    virtual ::gni::Task& revealImmediate(const ::java::lang::String& id) const;
    virtual void unlock(const ::java::lang::String& id) const;
    virtual ::gni::Task& unlockImmediate(const ::java::lang::String& id) const;
    virtual void increment(const ::java::lang::String& id, int32_t numSteps) const;
    virtual ::gni::Task& incrementImmediate(const ::java::lang::String& id, int32_t numSteps) const;
    virtual void setSteps(const ::java::lang::String& id, int32_t numSteps) const;
    virtual ::gni::Task& setStepsImmediate(const ::java::lang::String& id, int32_t numSteps) const;
    getAchievementsIntentCallback get_achievements_intent_callback_ = nullptr;
    loadCallback load_callback_ = nullptr;
    revealCallback reveal_callback_ = nullptr;
    revealImmediateCallback reveal_immediate_callback_ = nullptr;
    unlockCallback unlock_callback_ = nullptr;
    unlockImmediateCallback unlock_immediate_callback_ = nullptr;
    incrementCallback increment_callback_ = nullptr;
    incrementImmediateCallback increment_immediate_callback_ = nullptr;
    setStepsCallback set_steps_callback_ = nullptr;
    setStepsImmediateCallback set_steps_immediate_callback_ = nullptr;
};

}  // namespace games
}  // namespace gms
}  // namespace android
}  // namespace google
}  // namespace com

#endif  // CPP_COM_GOOGLE_ANDROID_GMS_GAMES_ACHIEVEMENTSCLIENT

