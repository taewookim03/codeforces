cmake_minimum_required(VERSION 3.6)
project(codeforces)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp 1a.cpp 4a.cpp 71a.cpp 158a.cpp 118a.cpp 50a.cpp)
add_executable(codeforces ${SOURCE_FILES})
add_executable(1a 1a.cpp)
add_executable(4a 4a.cpp)
add_executable(158a 158a.cpp)
add_executable(118a 118a.cpp)
add_executable(main main.cpp)
add_executable(71a 71a.cpp)