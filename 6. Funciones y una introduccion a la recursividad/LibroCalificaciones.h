// Fig. 6.3: LibroCalificaciones.h
// Definición de la clase LibroCalficaciones que encuentra el máximo de las tres calificaciones.
// Las funciones miembro están definidas en LibroCalificaciones.cpp
#include <string> // el programa usa la clase string estándar de C++
using std::string;

// definición de la clase LibroCalificaciones
class LibroCalificaciones{
public:
	LibroCalificaciones( string ); // el constructor inicializa el nombre del curso
	void establecerNombreCurso( string ); // función para establecer el nombre del curso
	string obtenerNombreCurso(); // función para obtener el nombre del curso
	void mostrarMensaje(); // mostrar un mensaje de bienvenida
	void recibirCalificaciones(); // recibe las tres calificaciones del usuario
	void mostrarReporteCalificaciones(); // muestra un reporte con base en las calificaciones
	int maximo( int, int, int ); // determina el máximo de 3 valores
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
	int calificacionMaxima; // valor máximo de las tres calificaciones
}; // fin de la clase LibroCalificaciones