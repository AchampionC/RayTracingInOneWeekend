#pragma once
#include "vec3.h"

class ray
{
public:
	ray() {};
	ray(const vec3& orgin, const vec3& direction)
	: orig(orgin), dir(direction) {};

	point3 origin() const {return orig;}
	vec3 direction() const {return dir;}

	point3 at(double t) const {
		return orig + t * dir;
	}

public:
	vec3 orig;
	vec3 dir;
};

