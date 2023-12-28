#include "Mesh.h"

Mesh::Mesh(
	const std::vector<Vec3f>& vertices, 
	const std::vector<int>& indices)
	: Vertices(vertices)
	, Indices(indices)
{
}

Mesh::Mesh(
	const Vec3f* vertices, 
	size_t numVertices, 
	const int* indices, 
	size_t numIndices)
	: Vertices(vertices, vertices + numVertices)
	, Indices(indices, indices + numIndices)
{
}
