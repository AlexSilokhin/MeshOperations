# CMakeList.txt : CMake project for MeshOperations, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("MeshOperations")

# Add source to this project's executable.
add_executable (MeshOperations "MeshOperations.cpp" "MeshOperations.h" "src/Mesh.h" "src/Vec3.h" "src/MathUtility.h" "src/Mesh.cpp" "src/MeshUtility.h" "src/MeshUtility.cpp")

# TODO: Add tests and install targets if needed.
