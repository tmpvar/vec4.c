#ifndef __vec4_random__
#define __vec4_random__

#include "type.h"
#include "normalize.h"
#include "scale.h"
#include <math.h>

/**
 * Generates a random vector with the given scale
 *
 * @param {vec4} out the receiving vector
 * @param {Number} [scale] Length of the resulting vector. If ommitted, a unit vector will be returned
 * @returns {vec4} out
 */
vec4 vec4_random (vec4 out, float scale) {
  scale = scale || 1.0;

  // TODO: This is a pretty awful way of doing this. Find something better.
  out[0] = rand();
  out[1] = rand();
  out[2] = rand();
  out[3] = rand();
  vec4_normalize(out, out);
  vec4_scale(out, out, scale);
  return out;
}

#endif
