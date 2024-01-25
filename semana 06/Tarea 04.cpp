// ejercicio 4

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void sumarM(int **, int **, int, int);
void mostrarMR(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nCol;

int main()
{
    pedirDatos();
    sumarM(puntero_matriz1, puntero_matriz2, nFilas, nCol);
    mostrarMR(puntero_matriz1, nFilas, nCol);

    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2;

    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    return 0;
}
void pedirDatos()
{
    cout << "Digite numero de filas: ";
    cin >> nFilas;
    cout << "Digite numero de columnas: ";
    cin >> nCol;

    // reservando memoria  matriz 1
    puntero_matriz1 = new int *[nFilas];
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz1[i] = new int[nCol];
    }
    cout << "Digite los elementos de la matriz 1: \n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un numero[" << i << "][" << j << "] ";
            cin >> *(*(puntero_matriz1 + i) + j);
        }
    }
    // reserva memoria matriz 2
    puntero_matriz2 = new int *[nFilas];
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz2[i] = new int[nCol];
    }
    cout << "Digite los elementos de la matriz 2: \n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un numero[" << i << "][" << j << "] ";
            cin >> *(*(puntero_matriz2 + i) + j);
        }
    }
}
void sumarM(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol)
{

    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            *(*(puntero_matriz1 + i) + j) += *(*(puntero_matriz2 + i) + j);
        }
    }
}
void mostrarMR(int **puntero_matriz1, int nFilas, int nCol)
{
    cout << "\nLa suma de las dos matrices es: \n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz1 + i) + j) << " ";
        }
        cout << "\n";
    }
}