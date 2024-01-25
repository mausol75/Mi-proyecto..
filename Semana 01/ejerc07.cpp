#include<iostream>

using namespace std;

int main (){
	int n1,n2;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
                                   	//if (n1==n2) para que ambos numeros sean iguales
	if(n1>n2){
		cout<<"El mayor numero es: "<<n1;
	}
	else{                           //al else (n1>n2){
		cout<<"El mayor es: "<<n2;
	}
	
	return 0;
}
