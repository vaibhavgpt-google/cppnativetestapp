#include "android/os/parcel_file_descriptor.h"

#include "android/os/parcel_file_descriptor.hpp"

ParcelFileDescriptor* ParcelFileDescriptor_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ParcelFileDescriptor*>(new ::android::os::ParcelFileDescriptor(jobj));
}

jobject ParcelFileDescriptor_getJniReference(const ParcelFileDescriptor* parcel_file_descriptor) {
  return reinterpret_cast<const ::android::os::ParcelFileDescriptor*>(parcel_file_descriptor)->GetImpl();
}

void ParcelFileDescriptor_destroy(const ParcelFileDescriptor* parcel_file_descriptor) {
  ::android::os::ParcelFileDescriptor::destroy(reinterpret_cast<const ::android::os::ParcelFileDescriptor*>(parcel_file_descriptor));
}
