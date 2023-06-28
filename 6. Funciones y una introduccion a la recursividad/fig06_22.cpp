#include <iostream>

using namespace std;

int volumenCaja(int longitud=1,int anchura=1,int altura=1);

int main(){
	
	cout<<"El volumen predeterminado de la caja es: "<<volumenCaja();
	
	cout<<"\n\nEl volumen predeterminado de una caja con logitud 10\n"<<
	"anchura 1 y altura 1 es: "<<volumenCaja(10);
	
	cout<<"\nEl volumen predeterminado de una caja con logitud 10\n"<<
	"anchura 5 y altura 1 es: "<<volumenCaja(10,5);
	
	cout<<"\nEl volumen predeterminado de una caja con logitud 10\n"<<
	"anchura 5 y altura 2 es: "<<volumenCaja(10,5,2);
	

	return 0;
}

int volumenCaja(int longitud,int anchura,int altura){
	return longitud*anchura*altura;
}