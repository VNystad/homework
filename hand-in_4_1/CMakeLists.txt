cmake_minimum_required(VERSION 3.6)
project(hand_in_4_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -Wall -pedantic")

set(SOURCE_FILES main.cpp node.cpp node.h list.cpp list.h util.h)
add_executable(hand_in_4_1 ${SOURCE_FILES})