#ifndef __vec4_distance__
#define __vec4_distance__

#include "type.h"
#include <math.h>

/**
 * Calculates the euclidian distance between two vec4's
 *
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {Number} distance between a and b
 */
float vec4_distance (vec4 a, vec4 b) {
  float x = b[0] - a[0],
    y = b[1] - a[1],
    z = b[2] - a[2],
    w = b[3] - a[3];
  return sqrt(x * x + y * y + z * z + w * w);
}

#endif
