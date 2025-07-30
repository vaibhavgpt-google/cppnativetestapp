#ifndef JAVA_UTIL_LIST_H_
#define JAVA_UTIL_LIST_H_

#include <cstdint>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AuthScope_ AuthScope;

typedef struct List_AuthScope_ List_AuthScope;

/// Wraps a JNI reference with List_AuthScope object.
/// @param jobj A JNI reference to be wrapped with List_AuthScope object.
/// @see List_AuthScope_destroy
List_AuthScope* List_AuthScope_wrapJniReference(jobject jobj);

jobject List_AuthScope_getJniReference(const List_AuthScope* list_auth_scope);

/// Destroys list_auth_scope and all internal resources related to it. This function should be
/// called when list_auth_scope is no longer needed.
/// @param list_auth_scope An object to be destroyed.
void List_AuthScope_destroy(const List_AuthScope* list_auth_scope);

bool List_AuthScope_add(const List_AuthScope* list_auth_scope, AuthScope* e);

AuthScope* List_AuthScope_get(const List_AuthScope* list_auth_scope, int32_t index);

int32_t List_AuthScope_size(const List_AuthScope* list_auth_scope);

#ifdef __cplusplus
};  // extern "C"
#endif

#endif  // JAVA_UTIL_LIST_H_
