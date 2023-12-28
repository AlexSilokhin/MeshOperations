#include "Vec3.h"
#include <vector>

class Mesh
{
public:
	Mesh(const std::vector<Vec3f>& vertices, const std::vector<int>& indices);
	Mesh(const Vec3f* vertices, size_t numVertices, const int* indices, size_t numIndices);

	std::vector<Vec3f> Vertices;
	std::vector<int> Indices;
};
