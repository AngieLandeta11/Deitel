//Tirar un dado de seis lados 6000 veces
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    const int tamanioArreglo=7;
    int frecuencia[tamanioArreglo]={};

    srand(time(0)); //Semilla 

    for(int tiro=1;tiro<6000000;tiro++){
        frecuencia[1+rand()%6]++;
        
    }
    cout<<endl;
    cout<<"Cara"<<setw(13)<<"Frecuencia"<<endl;

    for(int cara=1;cara<tamanioArreglo;cara++){
        cout<<setw(4)<<cara<<setw(13)<<frecuencia[cara]<<endl;
    }

    return 0;
}