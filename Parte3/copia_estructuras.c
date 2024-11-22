#include "copia_estructuras.h"
#include <stdio.h>
#include <string.h>

struct Estudiante2 copiarEstudiante(struct Estudiante2 const est) {
    struct Estudiante2 nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

void mostrarEstudiante_copia(struct Estudiante2 mostrar) {
    printf("El estudiante %s, con %d anios, tiene un promedio final de: %.2f sobre 10\n",mostrar.nombre,mostrar.edad,mostrar.promedio);
}

void ejecutarcopiaEstudiante() {
    struct Estudiante2 estudiante = {"Gabriel", 45, 9.65};
    mostrarEstudiante_copia(estudiante);

    struct Estudiante2 copia = copiarEstudiante(estudiante);
    mostrarEstudiante_copia(copia);
}