#ifndef COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION_H_
#define COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PgsPageDirection_ PgsPageDirection;

/// Wraps a JNI reference with PgsPageDirection object.
/// @param jobj A JNI reference to be wrapped with PgsPageDirection object.
/// @see PgsPageDirection_destroy
PgsPageDirection* PgsPageDirection_wrapJniReference(jobject jobj);

jobject PgsPageDirection_getJniReference(const PgsPageDirection* pgs_page_direction);

/// Destroys pgs_page_direction and all internal resources related to it. This function should be
/// called when pgs_page_direction is no longer needed.
/// @param pgs_page_direction An object to be destroyed.
void PgsPageDirection_destroy(const PgsPageDirection* pgs_page_direction);

int32_t PgsPageDirection_get_NONE();

int32_t PgsPageDirection_get_NEXT();

int32_t PgsPageDirection_get_PREV();

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // COM_GOOGLE_ANDROID_GMS_GAMES_PAGEDIRECTION_H_
