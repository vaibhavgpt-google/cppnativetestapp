#include "com/google/android/gms/games/event/event_buffer.h"

#include "com/google/android/gms/games/event/event_buffer.hpp"

EventBuffer* EventBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<EventBuffer*>(new ::com::google::android::gms::games::event::EventBuffer(jobj));
}

jobject EventBuffer_getJniReference(const EventBuffer* event_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::event::EventBuffer*>(event_buffer)->GetImpl();
}

void EventBuffer_destroy(const EventBuffer* event_buffer) {
  ::com::google::android::gms::games::event::EventBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::event::EventBuffer*>(event_buffer));
}

Event* EventBuffer_get(const EventBuffer* event_buffer, int32_t position) {
  return reinterpret_cast<Event*>(&reinterpret_cast<const ::com::google::android::gms::games::event::EventBuffer*>(event_buffer)->get(position));
}
