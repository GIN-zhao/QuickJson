cmake_minimum_required(VERSION 3.16)
project(QUICKJSON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(./include)
AUX_SOURCE_DIRECTORY(src DIR_SRCS)
add_executable(main ${DIR_SRCS})

target_compile_options(main PRIVATE -std=c++17)