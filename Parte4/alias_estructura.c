#include "alias_estructura.h"
#include <string.h>
#include <stdio.h>

Estudiante estudiante3;

void alias() {
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    printf("Nombre: %s\n", estudiante3.nombre);
    printf("Edad: %d\n", estudiante3.edad);
    printf("Promedio: %.2f\n", estudiante3.promedio);
}