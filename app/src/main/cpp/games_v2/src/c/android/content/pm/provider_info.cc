#include "android/content/pm/provider_info.h"

#include "android/content/pm/provider_info.hpp"

ProviderInfo* ProviderInfo_wrapJniReference(jobject jobj) {
  return reinterpret_cast<ProviderInfo*>(new ::android::content::pm::ProviderInfo(jobj));
}

jobject ProviderInfo_getJniReference(const ProviderInfo* provider_info) {
  return reinterpret_cast<const ::android::content::pm::ProviderInfo*>(provider_info)->GetImpl();
}

void ProviderInfo_destroy(const ProviderInfo* provider_info) {
  ::android::content::pm::ProviderInfo::destroy(reinterpret_cast<const ::android::content::pm::ProviderInfo*>(provider_info));
}
