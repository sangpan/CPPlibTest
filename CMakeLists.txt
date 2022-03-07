cmake_minimum_required(VERSION 3.17)
project(cppPlayground2)

set(CMAKE_CXX_STANDARD 17)

#add_executable(cppPlayground2 main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(A)
add_subdirectory(B)