#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int frecuencia1=0,frecuencia2=0,frecuencia3=0,frecuencia4=0,frecuencia5=0,frecuencia6=0,cara;
	
	for(int tiro=1;tiro<=6000000;tiro++){
		cara=1+rand()%6;
		
		switch(cara){
			case 1:
				++frecuencia1;
				break;
			case 2:
				++frecuencia2;
				break;
			case 3:
				++frecuencia3;
				break;
			case 4:
				++frecuencia4;
				break;
			case 5:
				++frecuencia5;
				break;
			case 6:
				++frecuencia6;
				break;
			default:
				cout<<"El programa nuca debio llegar aqui";	
		}
		
	}
	
	cout<<"Cara"<<setw(13)<<"Frecuencia"<<endl;
	cout<<"   1"<<setw(13)<<frecuencia1
	<<  "\n   2"<<setw(13)<<frecuencia2
	<<  "\n   3"<<setw(13)<<frecuencia3
	<<  "\n   4"<<setw(13)<<frecuencia4
	<<  "\n   5"<<setw(13)<<frecuencia5
	<<  "\n   6"<<setw(13)<<frecuencia6<<endl;
	
	return 0;
}