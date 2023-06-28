#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long);

int main(){
	
	for(int contador=0;contador<=10;contador++){
		cout<<setw(2)<<contador<<"! = "<<factorial(contador)<<endl;
	}

	return 0;
}

unsigned long factorial(unsigned long numero){
	if(numero<=1){
		return 1;
	}else{
		return numero*factorial(numero-1);
	}
}