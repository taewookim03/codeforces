cmake_minimum_required(VERSION 3.6)
project(codeforces)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp 1a.cpp 4a.cpp 71a.cpp 158a.cpp 118a.cpp 50a.cpp 231a.cpp 282a.cpp 96a.cpp 112a.cpp 158b.cpp fastIO.cpp fastIO.h 339a.cpp 116a.cpp 266a.cpp 281a.cpp 263a.cpp 266b.cpp 592a.cpp)
add_executable(codeforces ${SOURCE_FILES})
add_executable(main main.cpp)
add_executable(263a 263a.cpp)
add_executable(266b 266b.cpp)
add_executable(592a 592a.cpp)