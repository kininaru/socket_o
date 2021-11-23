cmake_minimum_required(VERSION 3.10)
project(socket_o)

add_library(socket_o src/tcp.cpp)

file(COPY src/tcp.h DESTINATION /usr/local/include)

install(
        TARGETS socket_o
        ARCHIVE DESTINATION /usr/local/lib
        PUBLIC_HEADER DESTINATION /usr/local/include
)
