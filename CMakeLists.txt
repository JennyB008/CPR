cmake_minimum_required(VERSION 3.6)
project(cpr)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Matrix.cpp Matrix.h Vektor.cpp Vektor.h Vektor2D.cpp Vektor2D.h)
add_executable(cpr ${SOURCE_FILES})