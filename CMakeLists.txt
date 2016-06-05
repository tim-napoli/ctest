cmake_minimum_required(VERSION 2.6)
project(ctest)

set(CMAKE_C_FLAGS "--std=c99 -Wall ${CMAKE_C_FLAGS}")

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(CMAKE_C_FLAGS "-Dlinux ${CMAKE_C_FLAGS}")
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

include_directories("include/")

add_library(ctest STATIC
            src/ctest.c)

add_executable(example
               example/example.c)
target_link_libraries(example ctest)

