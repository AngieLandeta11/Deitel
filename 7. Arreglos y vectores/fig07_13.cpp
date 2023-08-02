#include <iostream>
#include <iomanip>

using namespace std;

void modificarArreglo(int[], int);
void modificarElemento(int);

int main(int argc, char const* argv[])
{
    const int tamanioArreglo = 5;
    int a[tamanioArreglo] = { 0,1,2,3,4 };
    cout << "\nEfectos de pasar todo el arreglo por referencia\n";
    cout << "\n\nLos valores del arreglo original son: \n";

    for (int i = 0; i < tamanioArreglo; i++) {
        cout << setw(3) << a[i];
    }
    cout << endl;

    //pasa el arreglo a modificar por referencia
    modificarArreglo(a, tamanioArreglo);

    cout << "Los valores del arreglo a modificar son: \n";
    for (int j = 0; j < tamanioArreglo; j++) {
        cout << setw(3) << a[j];
    }

    cout << "\nEfectos de pasar todo el arreglo por valor: "
        << "\n\n[3] antes de modificar el elemento a[3]" << endl;

    modificarElemento(a[3]);
    cout << "a[3] despues de modificarElemento: " << a[3] << endl;
    return 0;
}

void modificarArreglo(int b[], int tamanioArreglo) {
    for (int k = 0; k < tamanioArreglo; k++) {
        b[k] *= 2;
    }
}

void modificarElemento(int e) {
    cout << "Valor del elemento modificarElemento: " << (e *= 2) << endl;
}