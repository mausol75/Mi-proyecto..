//ejercicio 9
#include <iostream>
#include <vector>
#include <string>
using namespace std;

using namespace std; 
struct Estudiante {
    string nombre;
    int calificaciones[5];
};

int main() {
    vector<Estudiante> estudiantes; 

    int cantidadEstudiantes;
    cout << "Digite la cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;

    for (int i = 0; i < cantidadEstudiantes; ++i) {
        Estudiante estudiante;

        cout << "\nDigite informacion para el estudiante " << i + 1 << ":" << endl;

        cout << "Nombre: ";
        cin.ignore();
        getline(cin, estudiante.nombre);

        cout << "Ingrese 5 calificaciones del estudiante : ";
        for (int j = 0; j < 5; ++j) {
            cin >> estudiante.calificaciones[j];
        }

        estudiantes.push_back(estudiante);
    }

    cout << "\nPromedio de calificaciones para cada estudiante:" << endl;
    for (const auto& estudiante : estudiantes) {
        int sumaCalificaciones = 0;
        for (int j = 0; j < 5; ++j) {
            sumaCalificaciones += estudiante.calificaciones[j];
        }

        double promedio = static_cast<double>(sumaCalificaciones) / 5.0;

        cout << "\nEstudiante: " << estudiante.nombre << endl;
        cout << "Promedio de calificaciones: " << promedio << endl;
    }

    return 0;
}