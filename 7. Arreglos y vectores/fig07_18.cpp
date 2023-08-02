#include "LibroCalificaciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int arregloCalificaciones[LibroCalificaciones::estudiantes]={87,68,94,100,83,78,85,91,76,87};

    LibroCalificaciones miLibroCalificaciones("Introduccion a la programacion c++",arregloCalificaciones);
    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.procesarCalificaciones();


    return 0;
}