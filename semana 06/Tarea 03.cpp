// ejercicio 3
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int cantidad;
    cout << "Ingrese la cantidad de caracteres: ";
    cin >> cantidad;

    vector<char> caracteres(cantidad);

    cout << "Ingrese los caracteres:" << endl;
    for (int i = 0; i < cantidad; ++i)
    {
        cin >> caracteres[i];
    }

    char caracter;
    cout << "Ingrese el caracter que desea contar: ";
    cin >> caracter;

    int contador = 0;
    for (char c : caracteres)
    {
        if (c == caracter)
        {
            contador++;
        }
    }

    cout << "\nEl caracter '" << caracter << "' aparece " << contador << " veces en el vector." << endl;

    return 0;
}