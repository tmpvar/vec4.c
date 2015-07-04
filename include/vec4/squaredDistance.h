#ifndef __vec4_squaredDistance__
#define __vec4_squaredDistance__

#include "type.h"

/**
 * Calculates the squared euclidian distance between two vec4's
 *
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {Number} squared distance between a and b
 */
float vec4_squaredDistance (vec4 a, vec4 b) {
  float x = b[0] - a[0],
    y = b[1] - a[1],
    z = b[2] - a[2],
    w = b[3] - a[3];
  return x * x + y * y + z * z + w * w;
}

#endif
