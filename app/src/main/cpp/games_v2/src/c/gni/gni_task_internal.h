#ifndef C_GNI_GNI_TASK_INTERNAL_H_
#define C_GNI_GNI_TASK_INTERNAL_H_

#include <jni.h>

#include "gni/gni_task.h"
#include "gni/gni_task_error_codes.h"

// Returns a `jobject` which represents the result of the successfully finished
// task. For internal use only.
GniTaskErrorCode GniTask_getResult(const GniTask* task,
                                   jobject* out_result_object);

// Returns the underlying JNI reference that this object wraps. The caller
// should not release the reference.
jobject GniTask_getJniReference(const GniTask* task);

#endif  // C_GNI_GNI_TASK_INTERNAL_H_
