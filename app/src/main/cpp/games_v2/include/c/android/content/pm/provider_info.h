#ifndef ANDROID_CONTENT_PM_PROVIDERINFO_H_
#define ANDROID_CONTENT_PM_PROVIDERINFO_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ProviderInfo_ ProviderInfo;

/// Wraps a JNI reference with ProviderInfo object.
/// @param jobj A JNI reference to be wrapped with ProviderInfo object.
/// @see ProviderInfo_destroy
ProviderInfo* ProviderInfo_wrapJniReference(jobject jobj);

jobject ProviderInfo_getJniReference(const ProviderInfo* provider_info);

/// Destroys provider_info and all internal resources related to it. This function should be
/// called when provider_info is no longer needed.
/// @param provider_info An object to be destroyed.
void ProviderInfo_destroy(const ProviderInfo* provider_info);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_CONTENT_PM_PROVIDERINFO_H_
