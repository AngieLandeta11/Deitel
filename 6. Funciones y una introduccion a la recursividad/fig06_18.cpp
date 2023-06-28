#include <iostream>

using namespace std;

inline double cubo(const double lado){//funcion actuando como prototipo
	return lado*lado*lado;	
}

int main(){
	
	double valorDado;
	
	cout<<"Escriba la longitud de su cubo dado: ";
	cin>>valorDado;
	
	cout<<"El volumen del cubo con un lado dado "<<valorDado<<" es "<<cubo(valorDado)<<endl;
	
	return 0;
}