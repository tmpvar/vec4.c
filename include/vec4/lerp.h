#ifndef __vec4_lerp__
#define __vec4_lerp__

#include "type.h"

/**
 * Performs a linear interpolation between two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @param {Number} t interpolation amount between the two inputs
 * @returns {vec4} out
 */
vec4 vec4_lerp (vec4 out, vec4 a, vec4 b, float t) {
  float ax = a[0],
    ay = a[1],
    az = a[2],
    aw = a[3];
  out[0] = ax + t * (b[0] - ax);
  out[1] = ay + t * (b[1] - ay);
  out[2] = az + t * (b[2] - az);
  out[3] = aw + t * (b[3] - aw);
  return out;
}

#endif
