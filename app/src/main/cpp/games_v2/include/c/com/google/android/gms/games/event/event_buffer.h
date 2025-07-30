#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER_H_

#include <cstdint>
#include <jni.h>
#include "com/google/android/gms/games/event/event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventBuffer_ EventBuffer;

/// Wraps a JNI reference with EventBuffer object.
/// @param jobj A JNI reference to be wrapped with EventBuffer object.
/// @see EventBuffer_destroy
EventBuffer* EventBuffer_wrapJniReference(jobject jobj);

jobject EventBuffer_getJniReference(const EventBuffer* event_buffer);

/// Destroys event_buffer and all internal resources related to it. This function should be
/// called when event_buffer is no longer needed.
/// @param event_buffer An object to be destroyed.
void EventBuffer_destroy(const EventBuffer* event_buffer);

Event* EventBuffer_get(const EventBuffer* event_buffer, int32_t position);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENTBUFFER_H_
