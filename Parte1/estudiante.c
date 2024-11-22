#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "estudiante.h"

struct Estudiante estudiante1;
struct Estudiante *estudiante2;

void inicializar_estudiante1() {
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
}

void inicializar_estudiante2() {
    struct Estudiante *estudiante2 = malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;
}

void imprimir_estudiantes() {
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
}