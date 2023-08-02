//Busqueda lineal de un arreglo
#include <iostream>
#include <iomanip>
using namespace std;

int busquedaLineal(const int [],int,int);
int main(int argc, char const *argv[])
{
    const int tamanioArreglo=100;
    int a[tamanioArreglo];
    int claveBusqueda;

    for(int i=0;i<tamanioArreglo;i++){
        a[i]=2*i;//Se crean ciertos datos
    }
    cout<<"Introduzca la clave de busqueda entera: ";
    cin>>claveBusqueda;

    int elemento=busquedaLineal(a,claveBusqueda,tamanioArreglo);

    if(elemento!=-1){
        cout<<"Se encontro el valor en el elemento "<<elemento<<endl;
    }else{
        cout<<"No se encuentra el valor";
    }

    return 0;
}

int busquedaLineal(const int arreglo[],int clave,int tamanioArreglo){
    for(int j=0;j<tamanioArreglo;j++){
        if(arreglo[j]==clave){
            return j;
        }
    }

    return -1;
}