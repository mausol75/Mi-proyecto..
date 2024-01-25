// ejemplo 3
#include <iostream>
using namespace std;

int cuadradoValor(int x)
{
    return x * x;
}

int main()
{
    int numero = 4;
    cout << "El cuadrado de " << numero << " es: " << cuadradoValor(numero) << endl;

    return 0;
}