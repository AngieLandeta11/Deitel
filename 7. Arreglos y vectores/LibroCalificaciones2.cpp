#include <iostream>
#include <iomanip>
using std::fixed;        
#include <iomanip> 
using std::setprecision; 
using std::setw; 

#include "LibroCalificaciones2.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con la cadena suministrada como argumento;
// inicializa calificacionMaxima a 0
LibroCalificaciones::LibroCalificaciones(string nombre,const int arregloCalificaciones[][pruebas]){
    establecerNombreCurso( nombre ); // valida y almacena nombreCurso

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        for(int prueba=0;prueba<pruebas;prueba++){
            calificaciones[estudiante][prueba]=arregloCalificaciones[estudiante][prueba];
        }
    }
} 
void LibroCalificaciones::establecerNombreCurso( string nombre ){
    nombreCurso = nombre; // almacena el nombre del curso en el objeto
}

string LibroCalificaciones::obtenerNombreCurso(){
    return nombreCurso;
} 

void LibroCalificaciones::mostrarMensaje(){
    cout << "Bienvenido al libro de calificaciones para\n" 
    << obtenerNombreCurso() << "!\n";
} 

// recibe tres calificaciones del usuario; determina el valor máximo
void LibroCalificaciones::procesarCalificaciones(){
    imprimirCalificaciones();
    
    cout<<"\nLa calificacion mas baja es: "<<obtenerMinimo()
    <<"\nLa calificacion mas alta es: "<<obtenerMaximo()<<endl;

    imprimirGraficoBarras();
} 

int LibroCalificaciones::obtenerMinimo(){
    int calificacionInf=100;

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        for(int prueba=0;prueba<pruebas;prueba++){
            if(calificaciones[estudiante][prueba]<calificacionInf){
                calificacionInf=calificaciones[estudiante][prueba];
            }
        }
        
    }
    return calificacionInf;
}
int LibroCalificaciones::obtenerMaximo(){
    int calificacionSup=0;

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        for(int prueba=0;prueba<pruebas;prueba++){
            if(calificaciones[estudiante][prueba]>calificacionSup){
                calificacionSup=calificaciones[estudiante][prueba];
            }
        }
        
    }
    return calificacionSup;
}
double LibroCalificaciones::obtenerPromedio(const int conjuntoDeCalificaciones[],const int calificaciones){
    int total=0;

    for(int calificacion=0;calificacion<calificaciones;calificacion++){
        total+=conjuntoDeCalificaciones[calificacion];
    }
    return static_cast<double>(total)/calificaciones;
}

void LibroCalificaciones::imprimirGraficoBarras(){
    cout<<"\nDistribucion de calificaciones: "<<endl;
    const int tamanioFrecuencia=11;
    int frequencia[tamanioFrecuencia]={};

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        for(int prueba=0;prueba<pruebas;prueba++){
            ++frequencia[calificaciones[estudiante][prueba]/10];
        }
        
    }
    
    for(int cuenta=0;cuenta<tamanioFrecuencia;cuenta++){
        if(cuenta==0){
            cout<<"  0-9: ";
        }else if(cuenta==10){
            cout<<"  100: ";
        }else{
            cout<<cuenta*10<<"-"<<(cuenta*10)+9<<": ";
        }
        for(int estrellas=0;estrellas<frequencia[cuenta];estrellas++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void LibroCalificaciones::imprimirCalificaciones(){
    cout<<"\nLas calificaciones son: \n\n";

    for(int prueba=0;prueba<pruebas;prueba++){
        cout<<"Prueba "<<prueba+1<<" ";
    }

    cout<<"Promedio"<<endl;

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        cout<<"Estudiante "<<setw(2)<<estudiante+1;

        for(int prueba=0;prueba<pruebas;prueba++){
            cout<<setw(8)<<calificaciones[estudiante][prueba];
        }

        double promedio=obtenerPromedio(calificaciones[estudiante],pruebas);
        cout<<setw(9)<<setprecision(2)<<fixed<<promedio<<endl;
    }
}

int main(int argc, char const *argv[])
{ 
    int arregloCalificaciones[LibroCalificaciones::estudiantes][LibroCalificaciones::pruebas]=
    { { 87, 96, 70 },
        { 68, 87, 90 },
        { 94, 100, 90 },
        { 100, 81, 82 },
        { 83, 65, 85 },
        { 78, 87, 65 },
        { 85, 75, 83 },
        { 91, 94, 100 },
        { 76, 72, 84 },
        { 87, 93, 73 } };

    LibroCalificaciones miLibroCalificaciones("CS101 Introduccion a la programacion c++",arregloCalificaciones);
    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.procesarCalificaciones();


    return 0;
}
