#include <iostream>

#include "maximo.h"

using namespace std;
int main(){
	
	int int1,int2,int3;
	cout<<"Introduzca 3 valores enteros ";
	cin>>int1>>int2>>int3;
	cout<<"El valor de int maximo es: "<<maximo(int1,int2,int3);
	
	
	double double1,double2,double3;
	cout<<"\nIntroduzca 3 valores doubles ";
	cin>>double1>>double2>>double3;
	cout<<"El valor de double maximo es: "<<maximo(double1,double2,double3);
	
	char char1,char2,char3;
	cout<<"\nIntroduzca 3 caracteres: ";
	cin>>char1>>char2>>char3;
	cout<<"El valor de char maximo es: "<<maximo(char1,char2,char3);
		

	return 0;
}