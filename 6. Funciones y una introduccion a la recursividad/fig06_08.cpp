#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	for(int contador=1;contador<=20;contador++){
		
		cout<<setw(10)<<(1+rand()%10);
		
		if(contador%5==0){
			cout<<endl;
		}
	}
	
	
	return 0;
}