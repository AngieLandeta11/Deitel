// Fig. 6.4: LibroCalificaciones.cpp
// Definiciones de funciones miembro para la clase LibroCalificaciones
// que determina el máximo de tres calificaciones.
#include <iostream>
#include <iomanip>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con la cadena suministrada como argumento;
// inicializa calificacionMaxima a 0
LibroCalificaciones::LibroCalificaciones(string nombre,const int arregloCalificaciones[]){
    establecerNombreCurso( nombre ); // valida y almacena nombreCurso

    for(int calificacion=0;calificacion<estudiantes;calificacion++){
        calificaciones[calificacion]=arregloCalificaciones[calificacion];
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
    cout<<"\nEl promedio de la clase es: "<<setprecision(2)<<fixed<<obtenerPromedio()<<endl;
    cout<<"La calificacion mas baja es: "<<obtenerMinimo()
    <<"\nLa calificacion mas alta es: "<<obtenerMaximo()<<endl;

    imprimirGraficoBarras();
} 

int LibroCalificaciones::obtenerMinimo(){
    int calificacionInf=100;

    for(int calificacion=0;calificacion<estudiantes;calificacion++){
        if(calificaciones[calificacion]<calificacionInf){
            calificacionInf=calificaciones[calificacion];
        }
    }
    return calificacionInf;
}
int LibroCalificaciones::obtenerMaximo(){
    int calificacionSup=0;

    for(int calificacion=0;calificacion<estudiantes;calificacion++){
        if(calificaciones[calificacion]>calificacionSup){
            calificacionSup=calificaciones[calificacion];
        }
    }
    return calificacionSup;
}
double LibroCalificaciones::obtenerPromedio(){
    int total=0;

    for(int calificacion=0;calificacion<estudiantes;calificacion++){
        total+=calificaciones[calificacion];
    }
    return static_cast<double>(total)/estudiantes;
}

void LibroCalificaciones::imprimirGraficoBarras(){
    cout<<"\nDistribucion de calificaciones: "<<endl;
    const int tamabioFrecuencia=11;
    int frequency[tamabioFrecuencia]={};

    for(int calificacion=0;calificacion<estudiantes;calificacion++){
        frequency[calificaciones[calificacion]/10]++;
    }
    
    for(int cuenta=0;cuenta<tamabioFrecuencia;cuenta++){
        if(cuenta==0){
            cout<<"  0-9: ";
        }else if(cuenta==10){
            cout<<"  100: ";
        }else{
            cout<<cuenta*10<<"-"<<(cuenta*10)+9;
        }
        for(int estrellas=0;estrellas<frequency[cuenta];estrellas++){
            cout<<" *";
        }
        cout<<endl;
    }

}

void LibroCalificaciones::imprimirCalificaciones(){
    cout<<"\nLas calificaciones son: \n\n";

    for(int estudiante=0;estudiante<estudiantes;estudiante++){
        cout<<"Estudiante"<<setw(2)<<estudiante+1<<": "
        <<setw(3)<<calificaciones[estudiante]<<endl;
    }
}

int main(int argc, char const *argv[])
{ //int arregloCalificaciones[10]={87,68,94,100,83,78,85,91,76,87};
    int arregloCalificaciones[LibroCalificaciones::estudiantes]={87,68,94,100,83,78,85,91,76,87};

    LibroCalificaciones miLibroCalificaciones("Introduccion a la programacion c++",arregloCalificaciones);
    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.procesarCalificaciones();


    return 0;
}
