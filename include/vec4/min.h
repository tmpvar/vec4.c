#ifndef __vec4_min__
#define __vec4_min__

#include "type.h"
#include <math.h>

/**
 * Returns the minimum of two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {vec4} out
 */
vec4 vec4_min (vec4 out, vec4 a, vec4 b) {
  out[0] = fmin(a[0], b[0]);
  out[1] = fmin(a[1], b[1]);
  out[2] = fmin(a[2], b[2]);
  out[3] = fmin(a[3], b[3]);
  return out;
}

#endif
