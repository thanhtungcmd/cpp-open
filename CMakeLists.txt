cmake_minimum_required(VERSION 3.26)
project(cpp_three)

set(CMAKE_CXX_STANDARD 17)

#find_package(ZLIB REQUIRED)
find_package(OpenCV CONFIG REQUIRED)

# this is heuristically generated, and may not be correct

add_executable(cpp_three src/main.cpp
        src/simple/person.cpp
        src/simple/person.h
)

#target_link_libraries(cpp_three PRIVATE ZLIB::ZLIB)
target_link_libraries(cpp_three PRIVATE ${OpenCV_LIBS})