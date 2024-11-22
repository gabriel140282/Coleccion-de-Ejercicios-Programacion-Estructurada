#ifndef UNIONES_H
#define UNIONES_H

union Dato {
    int i;
    float f;
    char str[20];
};

void imprimir_datoint();
void imprimir_datofloat();
void imprimir_datostring();

#endif //UNIONES_H
