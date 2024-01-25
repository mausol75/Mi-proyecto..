/*Eliminación de Duplicados: Crea un programa que elimine los elementos duplicados de un vector.
Utiliza un bucle for, break y continue según sea necesario.
*/
//ejercicio 7
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numeros;

    cout << "Ingrese numeros al vector (ingrese 0 para finalizar):\n";

    while (true)
    {
        int numero;
        cin >> numero;

        if (numero == 0)
        {
            break;
        }

        numeros.push_back(numero);
    }

    for (size_t i = 0; i < numeros.size(); ++i)
    {
        for (size_t j = i + 1; j < numeros.size(); ++j)
        {
            if (numeros[i] == numeros[j])
            {

                numeros.erase(numeros.begin() + j);
                --j;
            }
        }
    }

    cout << "Vector sin elementos duplicados: ";
    for (int numero : numeros)
    {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
