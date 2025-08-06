#ifndef _MATH_H
#define _MATH_H

#include "stdio.h"

typedef union {
	struct { float x, y; };
	float data[2];
}vec2f;

typedef union {
	struct { float x, y, z; };
	float data[3];
}vec3f;

typedef union {
	struct { float x, y, z, w; };
	float data[4];
}vec4f;

//Constructor
vec3f vec_create(float x, float y, float z);
//Zero vec
vec3f vec_zero();
//add
vec3f vec_add(vec3f v, vec3f u);
//sub
vec3f vec_sub(vec3f v, vec3f u);
//scale math
vec3f vec_scaler(vec3f, float scaler);
//dot
float vec_dot(vec3f v, vec3f u);
//cross
vec3f vec_cross(vec3f v, vec3f u);
//lenght
float vec_lenght(vec3f v, vec3f u);
//normal
vec3f vec_normal(vec3f v, vec3f u);
//print
void vec_print(vec3f v);

#endif // !_MATH_H
