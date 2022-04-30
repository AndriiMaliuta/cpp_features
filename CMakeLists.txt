cmake_minimum_required(VERSION 3.22)
project(cpp_features)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_features main.cpp source/Cat.cpp source/Cat.h colors.cpp source/enumss.cpp source/TypedefSample.cpp source/c_vectors.cpp)
