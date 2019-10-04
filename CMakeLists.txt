cmake_minimum_required(VERSION 3.5.0)
project(hello_world)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})
# add_library(testStudent SHARED${SOURCES})

