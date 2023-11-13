cmake_minimum_required(VERSION 3.26)
project(cpp_one)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV)

add_executable(cpp_one src/main.cpp
        src/simple/person.cpp
        src/simple/person.h
)

target_link_libraries(cpp_one opencv::opencv)
