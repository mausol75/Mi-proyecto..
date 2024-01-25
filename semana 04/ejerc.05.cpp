#include <iostream>

using namespace std;

int main()
{
    int nElementos;

    cout << "Ingrese la cantidad de numeros que desea sumar: ";
    cin >> nElementos;

    while (nElementos <= 0)
    {
        cout << " ingrese una cantidad mayor que 0: ";
        cin >> nElementos;
    }

    int suma = 0;
    int i = 1;

    while (i <= nElementos)
    {
        int numero;
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma += numero;
        i++;
    }

    cout << "\nLa suma de los " << nElementos << " numeros es: " << suma << endl;

    return 0;
}