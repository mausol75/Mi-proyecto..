//ejercicio 5
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;

    
    cout << "Ingrese el numero de filas de la Matriz 1: ";
    cin >> filasMatriz1;

    cout << "Ingrese el numero de columnas de la Matriz 1: ";
    cin >> columnasMatriz1;

    
   cout << "Ingrese el numero de filas de la Matriz 2: ";
    cin >> filasMatriz2;

    cout << "Ingrese el numero de columnas de la Matriz 2: ";
    cin >> columnasMatriz2;

   vector<vector<int>> matriz1(filasMatriz1, vector<int>(columnasMatriz1));
    vector<vector<int>> matriz2(filasMatriz2, vector<int>(columnasMatriz2));


    cout << "Ingrese valores para la Matriz 1 (" << filasMatriz1 << "x" << columnasMatriz1 << "):" << endl;
    for (int i = 0; i < filasMatriz1; ++i) {
        for (int j = 0; j < columnasMatriz1; ++j) {
            cout << "Matriz1[" << i << "][" << j << "]: ";
           cin >> matriz1[i][j];
        }
    }

   
    cout << "Ingrese valores para la Matriz 2 (" << filasMatriz2 << "x" << columnasMatriz2 << "):" << endl;
    for (int i = 0; i < filasMatriz2; ++i) {
        for (int j = 0; j < columnasMatriz2; ++j) {
            cout << "Matriz2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    
    if (columnasMatriz1 != filasMatriz2) {
        cerr << "No se pueden multiplicar las matrices ." << endl;
        return 1;  
    }

   
    vector<vector<int>> matrizResultado(filasMatriz1, vector<int>(columnasMatriz2, 0));

    
    for (int i = 0; i < filasMatriz1; ++i) {
        for (int j = 0; j < columnasMatriz2; ++j) {
            for (int k = 0; k < columnasMatriz1; ++k) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nMatriz Resultante (" << filasMatriz1 << "x" << columnasMatriz2 << "):" << endl;
    for (int i = 0; i < filasMatriz1; ++i) {
        for (int j = 0; j < columnasMatriz2; ++j) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}