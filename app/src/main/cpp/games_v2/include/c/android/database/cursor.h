#ifndef ANDROID_DATABASE_CURSOR_H_
#define ANDROID_DATABASE_CURSOR_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Cursor_ Cursor;

/// Wraps a JNI reference with Cursor object.
/// @param jobj A JNI reference to be wrapped with Cursor object.
/// @see Cursor_destroy
Cursor* Cursor_wrapJniReference(jobject jobj);

jobject Cursor_getJniReference(const Cursor* cursor);

/// Destroys cursor and all internal resources related to it. This function should be
/// called when cursor is no longer needed.
/// @param cursor An object to be destroyed.
void Cursor_destroy(const Cursor* cursor);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // ANDROID_DATABASE_CURSOR_H_
