//ejemplo 2
#include <iostream>
using namespace std;

void intercambiarValor(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 2, b = 6;
    cout << "Antes : a = " << a << ", b = " << b << endl;

    intercambiarValor(a, b);

    cout << "Despues : a = " << b << ", b = " << a << endl;

    return 0;
}