cmake_minimum_required(VERSION 3.5)

project(git_training)

file(GLOB SRC_FILE "lib/**/*.cpp" main.cpp)

add_executable(git_training ${SRC_FILE})

target_include_directories(git_training
    PRIVATE
    lib/**/*.h
)