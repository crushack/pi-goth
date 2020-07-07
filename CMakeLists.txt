cmake_minimum_required(VERSION 3.13.0)
project(Pi-Goth)

# Make sure to use the C++14 standard
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/glog)
add_subdirectory(lib/gflags)

add_executable(Gothic src/goth_main.cpp)
target_link_libraries(Gothic glog gflags)
target_include_directories(Gothic PUBLIC src)
