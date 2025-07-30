#include "com/google/android/gms/games/event/event.h"

#include "com/google/android/gms/games/event/event.hpp"

Event* Event_wrapJniReference(jobject jobj) {
  return reinterpret_cast<Event*>(new ::com::google::android::gms::games::event::Event(jobj));
}

jobject Event_getJniReference(const Event* event) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->GetImpl();
}

Event* Event_implementInterface(Event_getEventIdCallback event_get_event_id_callback, Event_getNameCallback event_get_name_callback, Event_getDescriptionCallback event_get_description_callback, Event_getIconImageUriCallback event_get_icon_image_uri_callback, Event_getPlayerCallback event_get_player_callback, Event_getValueCallback event_get_value_callback, Event_getFormattedValueCallback event_get_formatted_value_callback, Event_isVisibleCallback event_is_visible_callback) {
  return reinterpret_cast<Event*>(::com::google::android::gms::games::event::Event::ImplementInterface(reinterpret_cast<::com::google::android::gms::games::event::Event::getEventIdCallback>(event_get_event_id_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getNameCallback>(event_get_name_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getDescriptionCallback>(event_get_description_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getIconImageUriCallback>(event_get_icon_image_uri_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getPlayerCallback>(event_get_player_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getValueCallback>(event_get_value_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::getFormattedValueCallback>(event_get_formatted_value_callback), reinterpret_cast<::com::google::android::gms::games::event::Event::isVisibleCallback>(event_is_visible_callback)));
}

void Event_destroy(const Event* event) {
  ::com::google::android::gms::games::event::Event::destroy(reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event));
}

String* Event_getEventId(const Event* event) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getEventId());
}

String* Event_getName(const Event* event) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getName());
}

String* Event_getDescription(const Event* event) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getDescription());
}

Uri* Event_getIconImageUri(const Event* event) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getIconImageUri());
}

PgsPlayer* Event_getPlayer(const Event* event) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getPlayer());
}

int64_t Event_getValue(const Event* event) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getValue();
}

String* Event_getFormattedValue(const Event* event) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->getFormattedValue());
}

bool Event_isVisible(const Event* event) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)->isVisible();
}
