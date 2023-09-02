cmake_minimum_required(VERSION 3.5)

project(kotitehtava1alku LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kotitehtava1alku main.cpp)

install(TARGETS kotitehtava1alku
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
