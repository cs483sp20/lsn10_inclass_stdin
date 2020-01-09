cmake_minimum_required(VERSION 3.3)
project(Lsn11_Example_stdin)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c)
add_executable(read_stdin ${SOURCE_FILES})
