#ifndef FUNCIONES_Y_ESTRUCTURAS_H
#define FUNCIONES_Y_ESTRUCTURAS_H

struct Estudiante4 {
    char nombre[20];
    int edad;
    float promedio;

};

void imprimirEstudiante(struct Estudiante4 est);
void modificarEstudiante(struct Estudiante4 *est);
void imprimirEstudiante2(struct Estudiante4 *est);

#endif //FUNCIONES_Y_ESTRUCTURAS_H