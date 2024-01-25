// ejercicio 1
#include <iostream>

using namespace std;

int main()
{
    const int NUM_NUMEROS = 10;
    int numeros[NUM_NUMEROS];
    int suma = 0;

    cout << "Ingrese 10 numeros enteros:\n";
    for (int i = 0; i < NUM_NUMEROS; ++i)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / NUM_NUMEROS;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    int mayores_que_promedio = 0;
    for (int i = 0; i < NUM_NUMEROS; ++i)
    {
        if (numeros[i] > promedio)
        {
            mayores_que_promedio++;
        }
    }

    cout << "Cantidad de numeros mayores que el promedio: " << mayores_que_promedio << endl;

    return 0;
}

/*Escribe un programa que solicite al usuario ingresar 10 números enteros. Luego, encuentra el
 promedio de los números ingresados y muestra cuántos números
 son mayores que el promedio.
*/