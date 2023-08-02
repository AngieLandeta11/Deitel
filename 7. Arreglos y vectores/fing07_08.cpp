//Calcula la suma de los elementos de un arreglo
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    const int tamanioArreglo=10;
    int a[tamanioArreglo]={12,35,54,65,99,54,35,61,16,37};
    int total=0;

    for(int i=0;i<tamanioArreglo;i++){
        total+=a[i]; //total=total+a[i]
    }

    cout<<"Total de elementos del arreglo: "<<total;

    return 0;
}