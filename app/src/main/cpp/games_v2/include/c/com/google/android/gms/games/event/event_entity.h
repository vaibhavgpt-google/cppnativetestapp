#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "android/os/parcel.h"
#include "android/os/parcelable.h"
#include "com/google/android/gms/games/event/event.h"
#include "java/lang/string.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventEntity_ EventEntity;

/// Wraps a JNI reference with EventEntity object.
/// @param jobj A JNI reference to be wrapped with EventEntity object.
/// @see EventEntity_destroy
EventEntity* EventEntity_wrapJniReference(jobject jobj);

jobject EventEntity_getJniReference(const EventEntity* event_entity);

EventEntity* EventEntity_construct(Event* event);

/// Destroys event_entity and all internal resources related to it. This function should be
/// called when event_entity is no longer needed.
/// @param event_entity An object to be destroyed.
void EventEntity_destroy(const EventEntity* event_entity);

String* EventEntity_getEventId(const EventEntity* event_entity);

String* EventEntity_getName(const EventEntity* event_entity);

String* EventEntity_getDescription(const EventEntity* event_entity);

Uri* EventEntity_getIconImageUri(const EventEntity* event_entity);

String* EventEntity_getIconImageUrl(const EventEntity* event_entity);

PgsPlayer* EventEntity_getPlayer(const EventEntity* event_entity);

int64_t EventEntity_getValue(const EventEntity* event_entity);

String* EventEntity_getFormattedValue(const EventEntity* event_entity);

bool EventEntity_isVisible(const EventEntity* event_entity);

Event* EventEntity_freeze(const EventEntity* event_entity);

bool EventEntity_isDataValid(const EventEntity* event_entity);

int32_t EventEntity_hashCode(const EventEntity* event_entity);

String* EventEntity_toString(const EventEntity* event_entity);

void EventEntity_writeToParcel(const EventEntity* event_entity, Parcel* out, int32_t flags);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTENTITY_H_
