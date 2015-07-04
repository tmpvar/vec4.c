#ifndef __vec4_length__
#define __vec4_length__

#include "type.h"
#include <math.h>

/**
 * Calculates the length of a vec4
 *
 * @param {vec4} a vector to calculate length of
 * @returns {Number} length of a
 */
float vec4_length (vec4 a) {
  float x = a[0],
    y = a[1],
    z = a[2],
    w = a[3];
  return sqrtf(x * x + y * y + z * z + w * w);
}

#endif
