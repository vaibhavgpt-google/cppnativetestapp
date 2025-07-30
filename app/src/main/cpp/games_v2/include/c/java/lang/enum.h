#ifndef JAVA_LANG_ENUM_H_
#define JAVA_LANG_ENUM_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Enum_ Enum;

/// Wraps a JNI reference with Enum object.
/// @param jobj A JNI reference to be wrapped with Enum object.
/// @see Enum_destroy
Enum* Enum_wrapJniReference(jobject jobj);

jobject Enum_getJniReference(const Enum* _enum);

/// Destroys _enum and all internal resources related to it. This function should be
/// called when _enum is no longer needed.
/// @param _enum An object to be destroyed.
void Enum_destroy(const Enum* _enum);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // JAVA_LANG_ENUM_H_
