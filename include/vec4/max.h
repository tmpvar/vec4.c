#ifndef __vec4_max__
#define __vec4_max__

#include "type.h"
#include <math.h>

/**
 * Returns the maximum of two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {vec4} out
 */
vec4 vec4_max (vec4 out, vec4 a, vec4 b) {
  out[0] = fmax(a[0], b[0]);
  out[1] = fmax(a[1], b[1]);
  out[2] = fmax(a[2], b[2]);
  out[3] = fmax(a[3], b[3]);
  return out;
}

#endif
