#ifndef JAVA_LANG_BOOLEAN_H_
#define JAVA_LANG_BOOLEAN_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Boolean_ Boolean;

/// Wraps a JNI reference with Boolean object.
/// @param jobj A JNI reference to be wrapped with Boolean object.
/// @see Boolean_destroy
Boolean* Boolean_wrapJniReference(jobject jobj);

jobject Boolean_getJniReference(const Boolean* boolean);

Boolean* Boolean_construct(bool value);

/// Destroys boolean and all internal resources related to it. This function should be
/// called when boolean is no longer needed.
/// @param boolean An object to be destroyed.
void Boolean_destroy(const Boolean* boolean);

bool Boolean_booleanValue(const Boolean* boolean);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // JAVA_LANG_BOOLEAN_H_
