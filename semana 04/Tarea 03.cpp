//ejercicio 3
#include <iostream>
using namespace std;

int main()
{
    int numeros[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }
    cout << "Matriz original\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << numeros[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz transpuesta\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numeros[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
