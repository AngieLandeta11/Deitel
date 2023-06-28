#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long); 

int main(){
	
	for(int contador=0;contador<=10;contador++){
		cout<<"fibonacci ( "<<contador<<" ) = "<<fibonacci(contador)<<endl;
	}
	
	cout<<"fibonacci ( 20 ) = "<<fibonacci(20)<<endl;
	cout<<"fibonacci ( 30 ) = "<<fibonacci(30)<<endl;
	cout<<"fibonacci ( 35 ) = "<<fibonacci(35)<<endl;
	
	
	return 0;
}
unsigned long fibonacci(unsigned long numero){
	if((numero==0)||(numero==1)){
		return numero;
	}else{
		return fibonacci(numero-1)+fibonacci(numero-2);
	}
}

