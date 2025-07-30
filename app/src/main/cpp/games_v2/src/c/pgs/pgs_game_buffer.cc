#include "pgs/pgs_game_buffer.h"

#include "com/google/android/gms/games/game_buffer.hpp"

PgsGameBuffer* PgsGameBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsGameBuffer*>(new ::com::google::android::gms::games::GameBuffer(jobj));
}

jobject PgsGameBuffer_getJniReference(const PgsGameBuffer* pgs_game_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::GameBuffer*>(pgs_game_buffer)->GetImpl();
}

void PgsGameBuffer_destroy(const PgsGameBuffer* pgs_game_buffer) {
  ::com::google::android::gms::games::GameBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::GameBuffer*>(pgs_game_buffer));
}

PgsGame* PgsGameBuffer_get(const PgsGameBuffer* pgs_game_buffer, int32_t position) {
  return reinterpret_cast<PgsGame*>(&reinterpret_cast<const ::com::google::android::gms::games::GameBuffer*>(pgs_game_buffer)->get(position));
}
