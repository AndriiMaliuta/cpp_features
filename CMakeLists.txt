cmake_minimum_required(VERSION 3.22)
project(cpp_features)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_features main.cpp source/Cat.cpp source/Cat.h colors.cpp source/enumss.cpp source/TypedefSample.cpp source/c_vectors.cpp source/Utility.h source/Utility.cpp source/sqql/db_connn.cpp source/web/web.cpp source/sqql/db-taopq.cpp)

include(FetchContent)
find_package(PostgreSQL REQUIRED)

FetchContent_Declare(
        taocpp-taopq
        GIT_REPOSITORY https://github.com/taocpp/taopq
        GIT_TAG main
)
FetchContent_MakeAvailable(taocpp-taopq)


add_library(example main.cpp)
target_link_libraries(example taocpp::taopq)
set_property(TARGET example PROPERTY CXX_STANDARD 17)