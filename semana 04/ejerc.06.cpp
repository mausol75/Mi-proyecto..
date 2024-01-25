#include <iostream>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

int main()
{
    pedirDatos();

    cout << "\nLa suma total es : " << calcularSuma(vec, tam) << endl;

    return 0;
}
void pedirDatos()
{
    cout << "Digite el numero de elementos : ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << "digite un numero: ";
        cin >> vec[i];
    }
}
int calcularSuma(int vec[], int tam)
{
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }
    return suma;
}
// esto es con for