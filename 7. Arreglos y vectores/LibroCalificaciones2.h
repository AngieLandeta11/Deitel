#include <string> 
using std::string;

class LibroCalificaciones{
public:
	const static int estudiantes=10;
	const static int pruebas=3;
	LibroCalificaciones( string, const int[][pruebas]); 

	void establecerNombreCurso( string ); // función para establecer el nombre del curso
	string obtenerNombreCurso(); // función para obtener el nombre del curso
	void mostrarMensaje(); // mostrar un mensaje de bienvenida
	void procesarCalificaciones();
	int obtenerMinimo();
	int obtenerMaximo();
	double obtenerPromedio(const int[],const int);
	void imprimirGraficoBarras();
	void imprimirCalificaciones();
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
	int calificaciones[estudiantes][pruebas]; // varreglo de calificaciones
}; // fin de la clase LibroCalificaciones