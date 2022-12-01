# Sets the minimum required version of CMake to be 3.15.
cmake_minimum_required(VERSION 3.5)

project(cpp-csv-parser-example VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(csv csv.h)
set_target_properties(CSV PROPERTIES LINKER_LANGUAGE CXX)

add_executable(demo demo.cpp)
target_link_libraries(demo csv)