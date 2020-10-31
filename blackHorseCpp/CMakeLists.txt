cmake_minimum_required(VERSION 3.17)
project(workspaceClion)

set(CMAKE_CXX_STANDARD 14)

add_executable(global 01_global.cpp)
add_executable(heap 02_heap.cpp)
add_executable(new 03_new.cpp)
add_executable(ref 04_ref.cpp)
add_executable(fun 05_fun.cpp)
#参数都不能是中文
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")