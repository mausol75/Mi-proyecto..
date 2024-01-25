//ejercicio 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int tamano;
    cout << "Digite la cantidad de valores : ";
    cin >> tamano;

    vector<int> numeros(tamano);

    cout << "Digite un numero :" << endl;
    for (int i = 0; i < tamano; ++i)
    {
       cout << "Digito  " << i + 1 << ": ";
       cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

   cout << "\nVector ordenado de manera ascendente:" <<endl;
    for (int i = 0; i < tamano; ++i)
    {
       cout << numeros[i] << " ";
    }

    return 0;
}