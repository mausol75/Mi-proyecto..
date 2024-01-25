/*if(condicion){
    instruc
}else{
    instruc
}
*/
#include <iostream>
using namespace std; // sino usamos esto--> se pone así -->  std::cout << "Calificación: F" << std::endl;
int main()
{
    int puntaje;
    cout << "Ingrese el puntaje del estudiante del 1 al 20: ";
    cin >> puntaje;

    if (puntaje >= 20)
    {
        cout << "Calificacion: A" << endl;
    }
    else if (puntaje >= 20)
    {
        cout << "Calificacion: B" << endl;
    }
    else if (puntaje >= 15)
    {
        cout << "Calificacion: C" << endl;
    }
    else if (puntaje >= 10)
    {
        cout << "Calificacion: D" << endl;
    }
    else
    {
        cout << "Calificacion: F" << endl;
    }
    return 0;
}
