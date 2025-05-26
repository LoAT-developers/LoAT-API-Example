set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

cmake_minimum_required(VERSION 3.13)

project(LoAT_API_Example)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "${CMAKE_SOURCE_DIR}/install")

add_compile_options(-Wall -Wextra -pedantic -Wno-unused-parameter)

find_package(LoATAPI REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE LoATAPI)