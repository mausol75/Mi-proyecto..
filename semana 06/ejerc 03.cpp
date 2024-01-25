#include <iostream>
#include <cstdlib> // Para la función rand()
#include <ctime>   // Para la función time()

using namespace std;

int main()
{

    srand(time(0));

    int filas = 3;
    int columnas = 3;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    cout << "Matriz :" << endl;
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}