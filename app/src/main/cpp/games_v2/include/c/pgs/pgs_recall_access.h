#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS_H_

#include <cstdint>
#include <jni.h>
#include "java/lang/string.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsRecallAccess_ PgsRecallAccess;

/// Wraps a JNI reference with PgsRecallAccess object.
/// @param jobj A JNI reference to be wrapped with PgsRecallAccess object.
/// @see PgsRecallAccess_destroy
PgsRecallAccess* PgsRecallAccess_wrapJniReference(jobject jobj);

jobject PgsRecallAccess_getJniReference(const PgsRecallAccess* pgs_recall_access);

/// Destroys pgs_recall_access and all internal resources related to it. This function should be
/// called when pgs_recall_access is no longer needed.
/// @param pgs_recall_access An object to be destroyed.
void PgsRecallAccess_destroy(const PgsRecallAccess* pgs_recall_access);

String* PgsRecallAccess_getSessionId(const PgsRecallAccess* pgs_recall_access);

int32_t PgsRecallAccess_hashCode(const PgsRecallAccess* pgs_recall_access);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_RECALLACCESS_H_
