//ejericio 7
#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};

int main() {
    vector<Alumno> estudiantes;

    int cantidadEstudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;

    
    for (int i = 0; i < cantidadEstudiantes; ++i) {
        Alumno estudiante;

       cout << "\nIngrese informacion para el estudiante " << i + 1 << ":" << endl;

        
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, estudiante.nombre);

       
        cout << "Edad: ";
        cin >> estudiante.edad;

        
        cout << "Calificacion: ";
       cin >> estudiante.calificacion;

        
        estudiantes.push_back(estudiante);
    }

    
    cout << "\nInformacion de los estudiantes:" << endl;
    for (const auto& estudiante : estudiantes) {
        cout << "\nNombre: " << estudiante.nombre << endl;
        cout << "Edad: " << estudiante.edad << endl;
        cout << "Calificacion: " << estudiante.calificacion << endl;
    }

    return 0;
}