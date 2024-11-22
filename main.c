#include "./Parte1/estudiante.h"
#include "./Parte2/uniones.h"
#include "./Parte3/copia_estructuras.h"
#include "./Parte4/alias_estructura.h"
#include "./Parte5/estructuras_funciones.h"

int main() {
    struct Estudiante;
    inicializar_estudiante1();
    inicializar_estudiante2();
    imprimir_estudiantes();
    imprimir_datoint();
    imprimir_datofloat();
    imprimir_datostring();
    ejecutarcopiaEstudiante();
    alias();
    struct Estudiante4 estudiantecopia={"Luis",30,7.51};
    imprimirEstudiante(estudiantecopia);
    modificarEstudiante(&estudiantecopia);
    imprimirEstudiante(estudiantecopia);
    return 0;
}
