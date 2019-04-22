cmake_minimum_required(VERSION 3.13)
project(pr5)

set(CMAKE_CXX_STANDARD 14)

add_executable(pr5 src/main.cpp include/ordenacion.h include/Funciones.h)

add_executable(testpr5 src/test/maintext.cpp include/Funciones.h)