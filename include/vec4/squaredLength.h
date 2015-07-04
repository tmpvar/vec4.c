#ifndef __vec4_squaredLength__
#define __vec4_squaredLength__

#include "type.h"

/**
 * Calculates the squared length of a vec4
 *
 * @param {vec4} a vector to calculate squared length of
 * @returns {Number} squared length of a
 */
float vec4_squaredLength (vec4 a) {
  float x = a[0],
    y = a[1],
    z = a[2],
    w = a[3];
  return x * x + y * y + z * z + w * w;
}

#endif
