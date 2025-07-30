#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT_H_

#include <cstdint>
#include <jni.h>
#include "android/net/uri.h"
#include "java/lang/string.h"
#include "pgs/pgs_player.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Event_ Event;

typedef String* (*Event_getEventIdCallback)();

typedef String* (*Event_getNameCallback)();

typedef String* (*Event_getDescriptionCallback)();

typedef Uri* (*Event_getIconImageUriCallback)();

typedef PgsPlayer* (*Event_getPlayerCallback)();

typedef int64_t (*Event_getValueCallback)();

typedef String* (*Event_getFormattedValueCallback)();

typedef bool (*Event_isVisibleCallback)();

/// Wraps a JNI reference with Event object.
/// @param jobj A JNI reference to be wrapped with Event object.
/// @see Event_destroy
Event* Event_wrapJniReference(jobject jobj);

jobject Event_getJniReference(const Event* event);

Event* Event_implementInterface(Event_getEventIdCallback event_get_event_id_callback, Event_getNameCallback event_get_name_callback, Event_getDescriptionCallback event_get_description_callback, Event_getIconImageUriCallback event_get_icon_image_uri_callback, Event_getPlayerCallback event_get_player_callback, Event_getValueCallback event_get_value_callback, Event_getFormattedValueCallback event_get_formatted_value_callback, Event_isVisibleCallback event_is_visible_callback);

/// Destroys event and all internal resources related to it. This function should be
/// called when event is no longer needed.
/// @param event An object to be destroyed.
void Event_destroy(const Event* event);

String* Event_getEventId(const Event* event);

String* Event_getName(const Event* event);

String* Event_getDescription(const Event* event);

Uri* Event_getIconImageUri(const Event* event);

PgsPlayer* Event_getPlayer(const Event* event);

int64_t Event_getValue(const Event* event);

String* Event_getFormattedValue(const Event* event);

bool Event_isVisible(const Event* event);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_EVENT_EVENT_H_
