#include "gni/object.hpp"

#include <assert.h>

#include "gni/gni.hpp"

namespace gni {

Object::Object(jobject object) {
  if (object == nullptr) {
    return;
  }

  SetImpl(GniCore::GetInstance()->GetJniEnv()->NewGlobalRef(object));
}

Object::Object(Object&& object) {
  SetImpl(object.GetImpl());
  object.SetImpl(nullptr);
}

Object::~Object() {
  GniCore::GetInstance()->GetJniEnv()->DeleteGlobalRef(GetImpl());
}

}  // namespace gni
