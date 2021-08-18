cmake_minimum_required(VERSION 3.10)
project(circle-ci-test)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
enable_testing()

include_directories(include/)

add_executable(circle-ci-test
        src/main.cpp)

add_subdirectory(test)
