#ifndef __vec4_clone__
#define __vec4_clone__

#include "type.h"
#include "create.h"

/**
 * Creates a new vec4 initialized with values from an existing vector
 *
 * @param {vec4} a vector to clone
 * @returns {vec4} a new 4D vector
 */
vec4 vec4_clone (vec4 a) {
  vec4 out = vec4_create();
  out[0] = a[0];
  out[1] = a[1];
  out[2] = a[2];
  out[3] = a[3];
  return out;
}

#endif
