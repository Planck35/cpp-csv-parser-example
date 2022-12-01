# Sets the minimum required version of CMake to be 3.15.
cmake_minimum_required(VERSION 3.5)

project(parser VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h)

add_library(csv csv.h)
set_target_properties(csv PROPERTIES LINKER_LANGUAGE CXX)

add_executable(demo demo.cpp)
target_include_directories(demo PUBLIC "${PROJECT_BINARY_DIR}")
target_link_libraries(demo csv)