//ejemplo 6
#include <iostream>
#include <vector>
using namespace std;


void duplicarReferencia(vector<int> &arr) {
    for (int &elemento : arr) {
        elemento *= 2;
    }
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Arreglo original: ";
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    duplicarReferencia(numeros);

   cout << "Arreglo duplicado: ";
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}