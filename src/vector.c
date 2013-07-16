#include "vector.h"
#include <math.h>

vec_t VecLength(vec3_t v)
{
  return sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
}

vec_t VecNormalize(vec3_t v)
{
  float length, ilength;
  
  length = VecLength(v);
  
  if(length)
  {
    ilength = 1.0f / length;
    v[0] *= ilength;
    v[1] *= ilength;
    v[2] *= ilength;
  }
  
  return length;
}