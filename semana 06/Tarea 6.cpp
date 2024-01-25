//ejercicio 6
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    int filas, columnas;

    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;

   cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    
    vector<vector<string>> matriz(filas, vector<string>(columnas));

   
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese palabras para la celda [" << i << "][" << j << "] : ";
            cin.ignore(); 
            getline(cin, matriz[i][j]);
        }
    }

    
    for (int i = 0; i < filas; ++i) {
       string filaConcatenada;
        for (int j = 0; j < columnas; ++j) {
            filaConcatenada += matriz[i][j] + " ";
        }
        cout << "Fila " << i + 1 << " concatenada: " << filaConcatenada << endl;
    }

    return 0;
}