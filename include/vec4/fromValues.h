#ifndef __vec4_fromValues__
#define __vec4_fromValues__

#include "type.h"
#include "create.h"
#include <stdlib.h>

/**
 * Creates a new vec4 initialized with the given values
 *
 * @param {Number} x X component
 * @param {Number} y Y component
 * @param {Number} z Z component
 * @param {Number} w W component
 * @returns {vec4} a new 4D vector
 */
vec4 vec4_fromValues (float x, float y, float z, float w) {
  vec4 out = vec4_create();
  out[0] = x;
  out[1] = y;
  out[2] = z;
  out[3] = w;
  return out;
}

#endif
