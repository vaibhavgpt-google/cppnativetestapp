#ifndef COM_GOOGLE_ANDROID_GMS_COMMON_API_COMMONSTATUSCODES_H_
#define COM_GOOGLE_ANDROID_GMS_COMMON_API_COMMONSTATUSCODES_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CommonStatusCodes_ CommonStatusCodes;

/// Wraps a JNI reference with CommonStatusCodes object.
/// @param jobj A JNI reference to be wrapped with CommonStatusCodes object.
/// @see CommonStatusCodes_destroy
CommonStatusCodes* CommonStatusCodes_wrapJniReference(jobject jobj);

jobject CommonStatusCodes_getJniReference(const CommonStatusCodes* common_status_codes);

/// Destroys common_status_codes and all internal resources related to it. This function should be
/// called when common_status_codes is no longer needed.
/// @param common_status_codes An object to be destroyed.
void CommonStatusCodes_destroy(const CommonStatusCodes* common_status_codes);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_COMMON_API_COMMONSTATUSCODES_H_
