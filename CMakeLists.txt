cmake_minimum_required(VERSION 3.0.0)
project(git_training VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

file(GLOB SRC_FILE "lib/**/*.cpp" main.cpp)

add_executable(git_training main.cpp)

target_include_directories(git_training
    PRIVATE
    lib/**/*.h
)

set(CMAKE_BUILD_TYPE "Debug")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
