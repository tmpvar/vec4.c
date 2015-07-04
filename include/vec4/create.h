#ifndef __vec4_create__
#define __vec4_create__

#include "type.h"
#include <stdlib.h>

/**
 * Creates a new, empty vec4
 *
 * @returns {vec4} a new 4D vector
 */
vec4 vec4_create () {
  vec4 out = malloc(sizeof(float) * 4);
  out[0] = 0;
  out[1] = 0;
  out[2] = 0;
  out[3] = 0;
  return out;
}

#endif
