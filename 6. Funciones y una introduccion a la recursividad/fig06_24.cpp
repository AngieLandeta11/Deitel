#include <iostream>

using namespace std;

int cuadrado(int x){
	cout<<"El cuadrado del valor int "<<x << " es: ";
	return x*x;
}
double cuadrado(double y){
	cout<<"El cuadrado del valor double "<<y << " es: ";
	return y*y;
}
int main(){
	
	cout<<cuadrado(7)<<endl;
	cout<<cuadrado(7.5)<<endl;

	return 0;
}