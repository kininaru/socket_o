cmake_minimum_required(VERSION 3.10)
project(socket_o)

add_library(socket_o src/tcp.cpp src/check.cpp)

file(COPY src/tcp.h DESTINATION /usr/local/include/socket_o)

install(
        TARGETS socket_o
        ARCHIVE DESTINATION /usr/local/lib
        PUBLIC_HEADER DESTINATION /usr/local/include
)

include(CTest)
add_executable(
        socket_o.test
        test/test_start.cpp
        test/test_check.cpp
        src/check.cpp
)
add_test(NAME basic COMMAND socket_o.test)
