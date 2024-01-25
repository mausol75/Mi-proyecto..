/*Desarrolla un programa que verifique si una palabra ingresada por el usuario es un palíndromo
(se lee igual de izquierda a derecha que de derecha a izquierda).
 Usa un bucle while o for para comparar los caracteres.
*/
//ejercicio 2
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    const int MAX_LONGITUD = 100;
    char palabra[MAX_LONGITUD];

    cout << "Ingrese una palabra: ";
    cin.getline(palabra, MAX_LONGITUD);

    int longitud = strlen(palabra);
    bool esPalindromo = true;

    for (int i = 0; i < longitud; ++i)
    {
        palabra[i] = tolower(palabra[i]);
        if (palabra[i] == ' ')
        {

            for (int j = i; j < longitud; ++j)
            {
                palabra[j] = palabra[j + 1];
            }
            --longitud;
            --i;
        }
    }

    for (int i = 0; i < longitud / 2; ++i)
    {
        if (palabra[i] != palabra[longitud - 1 - i])
        {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo)
    {
        cout << "La palabra es un palindromo." << endl;
    }
    else
    {
        cout << "La palabra no es un palindromo." << endl;
    }

    return 0;
}