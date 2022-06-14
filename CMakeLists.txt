cmake_minimum_required(VERSION 3.22)
project(hilbert_rtree)

set(CMAKE_CXX_STANDARD 17)

add_executable(hilbert_rtree main.cpp HilbertRtree.h HilbertRtree.cpp)
