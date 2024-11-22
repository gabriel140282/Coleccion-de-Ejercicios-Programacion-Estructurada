cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_Programacion_Estructurada)

set(CMAKE_CXX_STANDARD 14)

add_executable(Coleccion_de_Ejercicios_Programacion_Estructurada
    main.cpp
        Parte1/estudiante.h
        Parte1/estudiante.c
        Parte2/uniones.h
        Parte2/uniones.c
        Parte3/copia_estructuras.h
        Parte3/copia_estructuras.c
        Parte4/alias_estructura.c
        Parte5/estructuras_funciones.h
        Parte5/estructuras_funciones.c
)
