// Fig. 6.3: LibroCalificaciones.h
// Definición de la clase LibroCalficaciones que encuentra el máximo de las tres calificaciones.
// Las funciones miembro están definidas en LibroCalificaciones.cpp
#include <string> // el programa usa la clase string estándar de C++
using std::string;

// definición de la clase LibroCalificaciones
class LibroCalificaciones{
public:
	const static int estudiantes=10;

	LibroCalificaciones( string, const int[]); // el constructor inicializa el nombre del curso

	void establecerNombreCurso( string ); // función para establecer el nombre del curso
	string obtenerNombreCurso(); // función para obtener el nombre del curso
	void mostrarMensaje(); // mostrar un mensaje de bienvenida
	void procesarCalificaciones();
	int obtenerMinimo();
	int obtenerMaximo();
	double obtenerPromedio();
	void imprimirGraficoBarras();
	void imprimirCalificaciones();
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
	int calificaciones[estudiantes]; // varreglo de calificaciones
}; // fin de la clase LibroCalificaciones