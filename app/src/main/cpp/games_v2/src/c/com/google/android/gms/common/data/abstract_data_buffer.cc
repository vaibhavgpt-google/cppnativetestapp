#include "com/google/android/gms/common/data/abstract_data_buffer.h"

#include "com/google/android/gms/common/data/abstract_data_buffer.hpp"

AbstractDataBuffer* AbstractDataBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<AbstractDataBuffer*>(new ::com::google::android::gms::common::data::AbstractDataBuffer(jobj));
}

jobject AbstractDataBuffer_getJniReference(const AbstractDataBuffer* abstract_data_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::common::data::AbstractDataBuffer*>(abstract_data_buffer)->GetImpl();
}

void AbstractDataBuffer_destroy(const AbstractDataBuffer* abstract_data_buffer) {
  ::com::google::android::gms::common::data::AbstractDataBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::common::data::AbstractDataBuffer*>(abstract_data_buffer));
}
