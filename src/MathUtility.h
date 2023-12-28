#include "Vec3.h"
#include <cmath>

template<typename T>
T Magnitude(const Vec3<T>& a)
{
	return std::sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

template<typename T>
T DistanceSqr(const Vec3<T>& a, const Vec3<T>& b)
{
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z);
}

template<typename T>
T Distance(const Vec3<T>& a, const Vec3<T>& b)
{
	return std::sqrt(DistanceSqr(a, b));
}

template<typename T>
T DotProduct(const Vec3<T>& a, const Vec3<T>& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

template<typename T>
Vec3<T> CrossProduct(const Vec3<T>& a, const Vec3<T>& b)
{
	return Vec3<T>(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}
