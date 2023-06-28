#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int tirarDados();
int main(){
	
	enum Estado{GANO,PERDIO,CONTINUAR};
	int miPunto;
	
	Estado estadoJuego;
	
	srand(time(0));
	
	int sumaDeDados=tirarDados();
	
	switch(sumaDeDados){
		case 7:
		case 11:
			estadoJuego=GANO;
			break;
		case 2:
		case 3:
		case 12:
			estadoJuego=PERDIO;
			break;
		default:
			estadoJuego=CONTINUAR;
			miPunto=sumaDeDados;
			cout<<"El punto es "<<miPunto<<endl;
			break;
	}
	while(estadoJuego==CONTINUAR){
		sumaDeDados=tirarDados();
		
		if(sumaDeDados==miPunto){
			estadoJuego=GANO;
		}else{
			if(sumaDeDados==7){
				estadoJuego=PERDIO;
			}
		}
	}
	
	if(estadoJuego==GANO){
		cout<<"El jugador gana.";
	}else{
		cout<<"El jugador perdio.";
	}
	
	
	
	return 0;
}

int tirarDados(){
	int dado1=1+rand()%6;
	int dado2=1+rand()%6;
	int suma=dado1+dado2;
	
	cout<<"El jugador tiro "<<dado1<<" + "<<dado2<<" = "<<suma<<endl;
	
	return suma;
	
}