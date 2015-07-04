# gl-vec4

Part of a fork of [@toji](http://github.com/toji)'s
[gl-matrix](http://github.com/toji/gl-matrix) to c, split into smaller pieces: this
package contains `glMatrix.vec4`.

## Usage

__main.c__
```
#include <vec4/create.h>

int main() {
  vec4 v4 = vec4_create();
  return 0;
}
```

compiled with `gcc main.c -o main -Inode_modules/vec4.c/include`

### with cmake

__CMakeLists.txt__
```
cmake_minimum_required(VERSION 3.2)
project (vec4-test)
file(GLOB CMAKE_INCLUDES "node_modules/*/CMakeLists.txt")
include(${CMAKE_INCLUDES})
add_executable(main main.c)
```

## API

  - [vec4_add()](#addoutvec4-avec4-bvec4)
  - [vec4_clone()](#cloneavec4)
  - [vec4_copy()](#copyoutvec4-avec4)
  - [vec4_create()](#create)
  - [vec4_distance()](#distanceavec4-bvec4)
  - [vec4_divide()](#divideoutvec4-avec4-bvec4)
  - [vec4_dot()](#dotavec4-bvec4)
  - [vec4_fromValues()](#fromvaluesxnumber-ynumber-znumber-wnumber)
  - [vec4_inverse()](#inverseoutvec4-avec4)
  - [vec4_length()](#lengthavec4)
  - [vec4_lerp()](#lerpoutvec4-avec4-bvec4-tnumber)
  - [vec4_max()](#maxoutvec4-avec4-bvec4)
  - [vec4_min()](#minoutvec4-avec4-bvec4)
  - [vec4_multiply()](#multiplyoutvec4-avec4-bvec4)
  - [vec4_negate()](#negateoutvec4-avec4)
  - [vec4_normalize()](#normalizeoutvec4-avec4)
  - [vec4_random()](#randomoutvec4-scalenumber)
  - [vec4_scale()](#scaleoutvec4-avec4-bnumber)
  - [vec4_scaleAndAdd()](#scaleandaddoutvec4-avec4-bvec4-scalenumber)
  - [vec4_set()](#setoutvec4-xnumber-ynumber-znumber-wnumber)
  - [vec4_squaredDistance()](#squareddistanceavec4-bvec4)
  - [vec4_squaredLength()](#squaredlengthavec4)
  - [vec4_subtract()](#subtractoutvec4-avec4-bvec4)
  - [vec4_transformMat4()](#transformmat4outvec4-avec4-mmat4)
  - [vec4_transformQuat()](#transformquatoutvec4-avec4-qquat)

## vec4_add(vec4 out:vec4, a:vec4, b:vec4)

  Adds two vec4's

## vec4_clone(a:vec4)

  Creates a new vec4 initialized with values from an existing vector

## vec4_copy(vec4 out:vec4, a:vec4)

  Copy the values from one vec4 to another

## vec4_create()

  Creates a new, empty vec4

## vec4_distance(a:vec4, b:vec4)

  Calculates the euclidian distance between two vec4's

## vec4_divide(vec4 out:vec4, a:vec4, b:vec4)

  Divides two vec4's

## vec4_dot(a:vec4, b:vec4)

  Calculates the dot product of two vec4's

## vec4_fromValues(x:Number, y:Number, z:Number, w:Number)

  Creates a new vec4 initialized with the given values

## vec4_inverse(vec4 out:vec4, a:vec4)

  Returns the inverse of the components of a vec4

## vec4_length(a:vec4)

  Calculates the length of a vec4

## vec4_lerp(vec4 out:vec4, a:vec4, b:vec4, t:Number)

  Performs a linear interpolation between two vec4's

## vec4_max(vec4 out:vec4, a:vec4, b:vec4)

  Returns the maximum of two vec4's

## vec4_min(vec4 out:vec4, a:vec4, b:vec4)

  Returns the minimum of two vec4's

## vec4_multiply(vec4 out:vec4, a:vec4, b:vec4)

  Multiplies two vec4's

## vec4_negate(vec4 out:vec4, a:vec4)

  Negates the components of a vec4

## vec4_normalize(vec4 out:vec4, a:vec4)

  Normalize a vec4

## vec4_random(vec4 out:vec4, [scale]:Number)

  Generates a random vector with the given scale

## vec4_scale(vec4 out:vec4, a:vec4, b:Number)

  Scales a vec4 by a scalar number

## vec4_scaleAndAdd(vec4 out:vec4, a:vec4, b:vec4, scale:Number)

  Adds two vec4's after scaling the second operand by a scalar value

## vec4_set(vec4 out:vec4, x:Number, y:Number, z:Number, w:Number)

  Set the components of a vec4 to the given values

## vec4_squaredDistance(a:vec4, b:vec4)

  Calculates the squared euclidian distance between two vec4's

## vec4_squaredLength(a:vec4)

  Calculates the squared length of a vec4

## vec4_subtract(vec4 out:vec4, a:vec4, b:vec4)

  Subtracts vector b from vector a

## vec4_transformMat4(vec4 out:vec4, a:vec4, m:mat4)

  Transforms the vec4 with a mat4.

## vec4_transformQuat(vec4 out:vec4, a:vec4, q:quat)

  Transforms the vec4 with a quat

## License

MIT. See [LICENSE.md](http://github.com/stackgl/gl-vec4/blob/master/LICENSE.md) for details.
