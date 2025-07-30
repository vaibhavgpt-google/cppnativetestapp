#include "pgs/pgs_player_buffer.h"

#include "com/google/android/gms/games/player_buffer.hpp"

PgsPlayerBuffer* PgsPlayerBuffer_wrapJniReference(jobject jobj) {
  return reinterpret_cast<PgsPlayerBuffer*>(new ::com::google::android::gms::games::PlayerBuffer(jobj));
}

jobject PgsPlayerBuffer_getJniReference(const PgsPlayerBuffer* pgs_player_buffer) {
  return reinterpret_cast<const ::com::google::android::gms::games::PlayerBuffer*>(pgs_player_buffer)->GetImpl();
}

void PgsPlayerBuffer_destroy(const PgsPlayerBuffer* pgs_player_buffer) {
  ::com::google::android::gms::games::PlayerBuffer::destroy(reinterpret_cast<const ::com::google::android::gms::games::PlayerBuffer*>(pgs_player_buffer));
}

PgsPlayer* PgsPlayerBuffer_get(const PgsPlayerBuffer* pgs_player_buffer, int32_t position) {
  return reinterpret_cast<PgsPlayer*>(&reinterpret_cast<const ::com::google::android::gms::games::PlayerBuffer*>(pgs_player_buffer)->get(position));
}
