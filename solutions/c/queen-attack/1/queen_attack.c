#include "queen_attack.h"

bool is_in_diagonal(position_t q1, position_t q2) {
  int b_factor = q1.row - q1.column;
  int mirrored_b_factor = 2 * q1.column + b_factor;
  return q2.row == q2.column + b_factor ||
         q2.row == -1 * (q2.column) + mirrored_b_factor;
}

attack_status_t can_attack(position_t q1, position_t q2) {
  if (q1.column > 7 || q2.column > 7 || q1.row > 7 || q2.row > 7) {
    return INVALID_POSITION;
  }
  if (q1.row == q2.row && q1.column == q2.column) {

    return INVALID_POSITION;
  }
  if (q1.row == q2.row || q1.column == q2.column || is_in_diagonal(q1, q2)) {
    return CAN_ATTACK;
  }
  return CAN_NOT_ATTACK;
}
