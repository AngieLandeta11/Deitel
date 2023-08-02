//Desmostrador del calificador tipo const
//Los elementos del arreglo se hacen cosntantes y 
//cualquier intento de modificacion produce un error
#include <iostream>
#include <iomanip>
using namespace std;

void tratarDeModificarArreglo(const int[]);

int main(int argc, char const *argv[])
{
    int a[]={10,20,30};

    tratarDeModificarArreglo(a);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";

    return 0;
}

void tratarDeModificarArreglo(const int b[]){
    b[0]/=2;
    b[1]/=2;
    b[2]/=2;
}