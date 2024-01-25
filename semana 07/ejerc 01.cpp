/*struct
usando string 
 */
#include <iostream>
using namespace std;
struct Alumno
{
    string edad;
    string carrera;
};

int main()
{
    Alumno estudiante;

    estudiante.edad = "19";
    estudiante.carrera = "Ingenieria Informatica";

    cout << "Edad del estudiante: " << estudiante.edad << endl;
    cout << "Carrera del estudiante: " << estudiante.carrera << endl;
    return 0;
}