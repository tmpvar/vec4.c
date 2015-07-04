#ifndef __vec4_normalize__
#define __vec4_normalize__

#include "type.h"
#include <math.h>

/**
 * Normalize a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to normalize
 * @returns {vec4} out
 */
vec4 vec4_normalize (vec4 out, vec4 a) {
  float x = a[0],
    y = a[1],
    z = a[2],
    w = a[3];
  float len = x * x + y * y + z * z + w * w;
  if (len > 0) {
    len = 1 / sqrt(len);
    out[0] = x * len;
    out[1] = y * len;
    out[2] = z * len;
    out[3] = w * len;
  }

  return out;
}

#endif
