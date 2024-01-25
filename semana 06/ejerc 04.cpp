//corregir
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));

    int numeros[100][100], filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0)
    {
        cout << "Error: Las dimensiones de la matriz deben ser mayores que cero." << endl;
        getch();
        return 1;

        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                numeros[i][j] = rand() % 100;
            }
        }
    }

        cout << "Matriz :" << endl;
        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                cout << numeros[i][j] << "\t";
            }
            cout << endl;
        }

        getch();
        return 0;
    }
