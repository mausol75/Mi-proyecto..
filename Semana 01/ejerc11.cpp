#include<iostream>
#include<stdlib.h>
using namespace std;

int main (){
	int numero, factorial = 1;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial= factorial *i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
    
	
	return 0;
}