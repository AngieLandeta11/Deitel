#include <iostream>

using namespace std;

int cuadradoPorValor(int);
void cuadradoPorReferencia(int &);

int main(){
	
	int x=2;
	int z=4;
	
	cout<<"x = "<<x<<" antes de cuadrado por valor"<<endl;
	cout<<"Valor devuelto de cuadradoPorValor: "<<cuadradoPorValor(x)<<endl;
	cout<<"x = "<<x<<" despues de cuadradoPorValor"<<endl<<endl;
	
	cout<<"z = "<<z<<" antes de cuadradoPorReferencia"<<endl;
	cuadradoPorReferencia(z);
	cout<<"z = "<<z<<" despues del cuadradoPorReferencia"<<endl;
	
	return 0;
}

int cuadradoPorValor(int numero){
	return numero*=numero;
}

void cuadradoPorReferencia(int &refNumero){
	refNumero*=refNumero;
}
