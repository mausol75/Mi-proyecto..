//dos estructuras nota 1 nota 2 nota 3 y el otro alumno nombre,sexo,edad anidar e imprimir y el  ´promedio de notas

#include<iostream>

using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno1;

int main(){
	float promedio_alumno;
	
	cout<<"Digite su nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Digite su sexo: ";
	cin.getline(alumno1.sexo,20,'\n');
	cout<<"digite su edad: ";
	cin>>alumno1.edad;
	
	cout<<"\n.Notas del alumno:.\n";
	cout<<"Digite Nota1: ";cin>>alumno1.prom.nota1;
	cout<<"Digite Nota2: ";cin>>alumno1.prom.nota2;
	cout<<"Digite Nota3: ";cin>>alumno1.prom.nota3;
	
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\n.Datos del alumno\n.";
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio alumno: "<<promedio_alumno<<endl;
	
	return 0;
}