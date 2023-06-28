#include <iostream>

using namespace std;

int cuadrado(int);//prototipo para la funcion cuadrado

int main(){
	int a=10;
	
	cout<<a<<" al cuadrado: "<<cuadrado(a)<<endl;		
	return 0;
}

int cuadrado(int x){
	return x*x;
}