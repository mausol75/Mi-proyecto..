/*Escribe un programa que solicite al usuario dos números enteros (inicio y fin) y
genere un vector con los números primos en ese rango.
Utiliza continue para omitir los números no primos.
*/
//ejercicio 9
#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int numero)
{
    if (numero < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int inicio, fin;

    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;

    cout << "Ingrese el fin del rango: ";
    cin >> fin;

    if (inicio > fin)
    {
        cout << "El rango no es valido. El inicio debe ser menor o igual al fin." << endl;
        return 1; 
    }

    vector<int> primos;

    for (int i = inicio; i <= fin; ++i)
    {
        if (!esPrimo(i))
        {
            continue;
        }
        primos.push_back(i);
    }

    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos)
    {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}