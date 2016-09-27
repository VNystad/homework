cmake_minimum_required(VERSION 3.6)
project(hand_in_5_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -Wall -pedantic")

set(SOURCE_FILES main.cpp object.cpp object.h player.cpp player.h ball.cpp ball.h)
add_executable(hand_in_5_1 ${SOURCE_FILES})

target_link_libraries (hand_in_5_1 sfml-graphics sfml-window sfml-system)