//ejemplo 5
#include <iostream>
using namespace std;

void incrementarReferencia(int &x) {
    x++;
}

int main() {
    int numero = 5;
    cout << "Antes : " << numero << endl;

    incrementarReferencia(numero);

    cout << "Despues : " << numero << endl;

    return 0;
}