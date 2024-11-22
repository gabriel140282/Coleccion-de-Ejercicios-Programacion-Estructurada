#include "uniones.h"
#include <stdio.h>
#include <string.h>

union Dato dato;

void imprimir_datoint() {
    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

}

void imprimir_datofloat() {
    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);
}

void imprimir_datostring() {
    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);
}