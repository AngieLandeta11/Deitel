#include <iostream>
#include <iomanip>
//Inicializar un arreglo en una declaracion
using namespace std;

int main(int argc, char const *argv[])
{
    int n[10]={34,56,78,12,43,99,58,74,23,19};

    cout<<"Elemento"<<setw(13)<<"Valor"<<endl;

    for(int i=0;i<10;i++){
        cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    }

    return 0;
}