cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

include_directories(src)
file(GLOB SOURCES "src/*.cpp")
add_executable(Tutorial ${SOURCES})