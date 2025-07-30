#include "com/google/android/gms/common/data/entity_buffer.h"

#include "com/google/android/gms/common/data/entity_buffer.hpp"

EntityBuffer* EntityBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<EntityBuffer*>(new ::com::google::android::gms::common::data::EntityBuffer(jobj));
}

jobject EntityBuffer_getJniReference(const EntityBuffer* entity_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::common::data::EntityBuffer*>(entity_buffer)->GetImpl();
}

void EntityBuffer_destroy(const EntityBuffer* entity_buffer) {
  ::com::google::android::gms::common::data::EntityBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::common::data::EntityBuffer*>(entity_buffer));
}
