/*Cifrado Cesar: Implementa un programa que realice un cifrado César.
 Solicita al usuario ingresar una cadena y un número (la clave del cifrado).
 Luego, cifra la cadena desplazando cada letra en
 la cadena por la cantidad especificada en la clave.
*/
//ejercicio 5
#include <iostream>
#include <string>

using namespace std;

string cifrarCesar(const string &mensaje, int clave)
{
    string resultado = "";

    for (char caracter : mensaje)
    {
        if (isalpha(caracter))
        {
            char base = (isupper(caracter)) ? 'A' : 'a';
            resultado += static_cast<char>((caracter - base + clave) % 26 + base);
        }
        else
        {
            resultado += caracter;
        }
    }

    return resultado;
}

int main()
{
    string mensaje;
    int clave;

    cout << "Ingrese una cadena: ";
    getline(cin, mensaje);

    cout << "Ingrese la clave (un numero entero): ";
    cin >> clave;

    string mensajeCifrado = cifrarCesar(mensaje, clave);

    cout << "Mensaje cifrado: " << mensajeCifrado << endl;

    return 0;
}