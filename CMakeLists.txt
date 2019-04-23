cmake_minimum_required(VERSION 3.13)
project(pr5)

set(CMAKE_CXX_STANDARD 14)

add_executable(pr5 src/main.cpp include/Ordenacion.h include/Funciones.h include/DNI.h src/DNI.cpp)

add_executable(testpr5 src/test/maintext.cpp include/Funciones.h include/Ordenacion.h)