#include<iostream>
#include<conio.h>

using namespace std;

 void pedirDatos();              //prototipo
 void mult(float x,float y);
  
 float num1,num2;                 

int main(){
    pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}
 void pedirDatos(){
 	cout<<"Digite 2 numeros: ";
 	cin>>num1>>num2;
 }
 void mult(float x,float y){               //void no retorna nada
 	float multiplicacion = x * y;
 	
 	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
 }