#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{   
    const int tamanioArreglo=5;
    int arreglo[tamanioArreglo]={9,4,1,11,3};
    int valor; 

    cout<<"Arreglo desordenado\n";
    for(int i=0;i<tamanioArreglo;i++){
        cout<<arreglo[i]<<" ";
    }

    for(int siguiente=1;siguiente<tamanioArreglo;siguiente++){

        valor=arreglo[siguiente];//9 4 1 11 3
        int mover=siguiente;//0 1 2 3 4

        while((mover>0) && (arreglo[mover-1]>valor)){
            arreglo[mover]=arreglo[mover-1];
            mover--;
        }

        arreglo[mover]=valor;
    }

    cout<<"\nArreglo ordenado\n";
    for(int i=0;i<tamanioArreglo;i++){
        cout<<arreglo[i]<<" ";
    }

    return 0;
}