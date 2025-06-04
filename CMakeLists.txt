cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
set(CMAKE_CXX_STANDARD 20)

add_compile_options(-Wall -Wextra -pedantic -Wno-unused-parameter)

project(LoAT_API_Example)

include(FetchContent)
FetchContent_Declare(
  LoATAPI
  URL https://github.com/LoAT-developers/LoAT/releases/download/api-v1.0.0/loat-api-v1.0.0.tar.gz
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(LoATAPI)

find_library(ANTLR4 antlr4-runtime)

add_executable(LoAT_API_Example src/main.cpp)
add_subdirectory(src)

list(APPEND CMAKE_PREFIX_PATH "${loatapi_SOURCE_DIR}")

find_package(LoATAPI REQUIRED)

target_link_libraries(LoAT_API_Example PRIVATE LoATAPI)
target_link_libraries(LoAT_API_Example PRIVATE ${ANTLR4})