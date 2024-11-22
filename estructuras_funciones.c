#include "estructuras_funciones.h"
#include <stdio.h>

void imprimirEstudiante(struct Estudiante4 est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}


void modificarEstudiante(struct Estudiante4 *est) {
    est->edad = 30;
}


void imprimirEstudiante2(struct Estudiante4 *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}