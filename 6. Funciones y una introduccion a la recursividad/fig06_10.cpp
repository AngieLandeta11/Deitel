#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	unsigned seed;
	cout<<"Introduzca la semilla ";
	cin>>seed;
	
	srand(seed);
	
	for(int contador=1;contador<=10;contador++){
		cout<<setw(10)<<(1+rand()%6);
		
		if(contador%5==0){
			cout<<endl;
		}
	}
	
	
	return 0;
}