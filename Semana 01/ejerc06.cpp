#include<iostream>

using namespace std;

struct persona{
    char nombre[20];
	int edad;
	}persona1;
int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\nImprimiendo datos\n";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
}