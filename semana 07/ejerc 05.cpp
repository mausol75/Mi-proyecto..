// funciones (void)

/* 
char Unir(char a,char b) //()parametro
char resp;
resp = a+b;
return resp; ---->lo que devuelve en este caso es char
*/


#include <iostream>
using namespace std;

int distance(int v, int t) {
    return v * t;  
}

int fill() {
    int r;
    cout << "Enter a number: ";
    cin >> r;
    return r;
}

void show(int v, int t, int z) {
    cout << "The distance is: " << v << " * " << t << " = " << z << endl;
}

int main() {
    int v, t, d;

    v = fill();
    t = fill();
    d = distance(v, t);
    show(v, t, d);

    return 0;
}