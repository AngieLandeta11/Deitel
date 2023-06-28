#include <iostream>

using namespace std;

int numero=7;

int main(){
	
	double numero = 10.5;
	
	cout<<"Valor local de double de numero: "<<numero<<endl;
	
	cout<<"Valor global de int de numero: "<<::numero<<endl;


	return 0;
}