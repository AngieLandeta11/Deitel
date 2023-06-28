#include <iostream>
#include <iomanip>
using namespace std;

void usaLocal();
void usarLocalStatic();
void usarGlobal();

int x=1; //variable global

int main(){
	
	cout<<"La x global en main es: "<<x<<endl;
	
	int x=5;
	
	cout<<"La x local en el alcance exterior es: "<<x<<endl;
	
	{
		int x=7;
		cout<<"La x local en el alcance interior de main es: "<<x<<endl;
	}
	
	cout<<"La x local en el alcance exterior de main es: "<<x<<endl;
	
	usaLocal();
	usarLocalStatic();
	usarGlobal();
	
	usaLocal();
	usarLocalStatic();
	usarGlobal();
	
	cout<<"La x local en main es: "<<x<<endl;
	
	return 0;
}

void usaLocal(){
	int x=25;
	cout<<"La x local es "<<x<<" al entrar a usarLocal"<<endl;
	x++;
	cout<<"La x local es "<<x<<" al salir de usarLocal"<<endl;	
}
void usarLocalStatic(){
	static int x=50;
	cout<<"La x local estatica es: "<<x<<" al entrar a usarLocalStatic"<<endl;
	x++;
	cout<<"La x local estatica es: "<<x<<" al salir de usarLocalStatic"<<endl;	
}
void usarGlobal(){
	cout<<"La x global es "<<x<<" al entrar a usarGlobal"<<endl;
	x*=10;
	cout<<"La x global es "<<x<<" al salir de usarGlobal"<<endl;
}

