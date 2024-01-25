#include<iostream>

using namespace std;

int potencia(int,int);


int main(){
	int base,exponente;
	
	cout<<"Digite la base: ";
	cin>>base;
	cout<<"Digite el exponente: ";
	cin>>exponente;
	
	cout<<"\nPotencia de "<<base<<" elevado al "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	return 0;
}
int potencia(int x,int y){
	int pot;
	
	if(y==1){
		pot=x;
	}
	else{
		pot = x * potencia(x,y-1);
	}
	return pot;
}
