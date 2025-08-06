#include "includes/math.h"

//

vec3f vec_create(float x, float y, float z)
{
	vec3f vec = { vec.x = x, vec.y = y, vec.z = z };
	return vec;
}

vec3f vec_zero()
{
	return vec_create(0.0f, 0.0f, 0.0f);
}

vec3f vec_add(vec3f v, vec3f u)
{
	return vec_create(v.x + u.x,
					  v.y + u.y,
					  v.z + u.z);
}

vec3f vec_sub(vec3f v, vec3f u)
{
	return vec_create(v.x - u.x,
					  v.y - u.y,
					  v.z - u.z);
}

vec3f vec_scaler(vec3f, float scaler)
{
	return;
}

float vec_dot(vec3f v, vec3f u)
{
	return;
}

vec3f vec_cross(vec3f v, vec3f u)
{
	return;
}

float vec_lenght(vec3f v, vec3f u)
{
	return;
}

vec3f vec_normal(vec3f v, vec3f u)
{
	return;
}

void vec_print(vec3f v)
{
	printf("(%f, %f, %f)\n", v.x, v.y, v.z);
}
