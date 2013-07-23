#ifndef __VECTOR_H
#define __VECTOR_H
//#include <math.h>

typedef float vec_t;
typedef vec_t vec3_t[3];


//Vector functions
#define VecAdd(a, b, o) ((o)[0] = (a)[0] + (b)[0], (o)[1] = (a)[1] + (b)[1], (o)[2] = (a)[2] + (b)[2])
#define VecSub(a, b, o) ((o)[0] = (a)[0] - (b)[0], (o)[1] = (a)[1] - (b)[1], (o)[2] = (a)[2] - (b)[2])
#define VecMult(a, b, o) ((o)[0] = (a)[0] * (b)[0], (o)[1] = (a)[1] * (b)[1], (o)[2] = (a)[2] * (b)[2])
#define VecDiv(a, b, o) ((o)[0] = (a)[0] / (b)[0], (o)[1] = (a)[1] / (b)[1], (o)[2] = (a)[2] / (b)[2])
//#define VecLength(v) (sqrt((v)[0]*(v)[0] + (v)[1]*(v)[1] + (v)[2]*(v)[2]))
#define VecSet(v, x, y, z) ((v)[0] = x, (v)[1] = y, (v)[2] = z)
#define VecCopy(v, o) ((o)[0] = (v)[0], (o)[1] = (v)[1], (o)[2] = (v)[2])
#define VecClear(v) ((v)[0] = (v)[1] = (v)[2] = 0.0f)
#define VecNegate(v, o) ((o)[0] = -(v)[0], (o)[1] = -(v)[1], (o)[2] = -(v)[2])
#define VecDot(v) ((v)[0]*(v)[0] + (v)[1]*(v)[1] + (v)[2]*(v)[2])
#define VecCross(a, b, o) ((o)[0] = (a)[1]*(b)[2] - (a)[2]*(b)[1], (o)[1] = (a)[2]*(b)[0] - (a)[0]*(b)[2], (o)[2] = (a)[0]*(b)[1] - (a)[1]*(b)[0])
#define VecScale(v, s, o) ((o)[0] = (v)[0] * (s), (o)[1] = (v)[1] * (s), (o)[2] = (v)[2] * (s))
#define VecCmp(a, b) ((a)[0] == (b)[0] && (a)[1] == (b)[1] && (a)[2] == (b)[2])

vec_t VecLength(vec3_t v);
vec_t VecNormalize(vec3_t v);


#endif//__VECTOR_H