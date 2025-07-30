#ifndef JAVA_LANG_LONG_H_
#define JAVA_LANG_LONG_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Long_ Long;

/// Wraps a JNI reference with Long object.
/// @param jobj A JNI reference to be wrapped with Long object.
/// @see Long_destroy
Long* Long_wrapJniReference(jobject jobj);

jobject Long_getJniReference(const Long* _long);

Long* Long_construct(int64_t value);

/// Destroys _long and all internal resources related to it. This function should be
/// called when _long is no longer needed.
/// @param _long An object to be destroyed.
void Long_destroy(const Long* _long);

int64_t Long_longValue(const Long* _long);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // JAVA_LANG_LONG_H_
