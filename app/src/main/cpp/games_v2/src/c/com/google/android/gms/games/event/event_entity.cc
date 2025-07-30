#include "com/google/android/gms/games/event/event_entity.h"

#include "com/google/android/gms/games/event/event_entity.hpp"

EventEntity* EventEntity_wrapJniReference(jobject jobj) {
  return reinterpret_cast<EventEntity*>(new ::com::google::android::gms::games::event::EventEntity(jobj));
}

jobject EventEntity_getJniReference(const EventEntity* event_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->GetImpl();
}

EventEntity* EventEntity_construct(Event* event) {
  return reinterpret_cast<EventEntity*>(new ::com::google::android::gms::games::event::EventEntity(*reinterpret_cast<const ::com::google::android::gms::games::event::Event*>(event)));
}

void EventEntity_destroy(const EventEntity* event_entity) {
  ::com::google::android::gms::games::event::EventEntity::destroy(reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity));
}

String* EventEntity_getEventId(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getEventId());
}

String* EventEntity_getName(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getName());
}

String* EventEntity_getDescription(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getDescription());
}

Uri* EventEntity_getIconImageUri(const EventEntity* event_entity) {
  return reinterpret_cast<Uri*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getIconImageUri());
}

String* EventEntity_getIconImageUrl(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getIconImageUrl());
}

PgsPlayer* EventEntity_getPlayer(const EventEntity* event_entity) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getPlayer());
}

int64_t EventEntity_getValue(const EventEntity* event_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getValue();
}

String* EventEntity_getFormattedValue(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->getFormattedValue());
}

bool EventEntity_isVisible(const EventEntity* event_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->isVisible();
}

Event* EventEntity_freeze(const EventEntity* event_entity) {
  return reinterpret_cast<Event*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->freeze());
}

bool EventEntity_isDataValid(const EventEntity* event_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->isDataValid();
}

int32_t EventEntity_hashCode(const EventEntity* event_entity) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->hashCode();
}

String* EventEntity_toString(const EventEntity* event_entity) {
  return reinterpret_cast<String*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->toString());
}

void EventEntity_writeToParcel(const EventEntity* event_entity, Parcel* out, int32_t flags) {
  reinterpret_cast<const ::com::google::android::gms::games::event::EventEntity*>(event_entity)->writeToParcel(*reinterpret_cast<const ::android::os::Parcel*>(out), flags);
}
