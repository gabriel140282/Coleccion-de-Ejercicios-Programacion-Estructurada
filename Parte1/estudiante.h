#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void inicializar_estudiante1();
void inicializar_estudiante2();
void imprimir_estudiantes();

#endif //ESTUDIANTE_H
