template<typename T>
class Vec3
{
public:
	Vec3(T _x, T _y, T _z)
		: x(_x)
		, y(_y)
		, z(_z)
	{
	}
	
	Vec3(const T* data)
		: x(data[0])
		, y(data[1])
		, z(data[2])
	{
	}

	T x;
	T y;
	T z;
};

typedef Vec3<float> Vec3f;
typedef Vec3<double> Vec3d;
