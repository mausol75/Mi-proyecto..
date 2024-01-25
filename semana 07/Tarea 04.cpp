// ejemplo 4
#include <iostream>
using namespace std;

void intercambiarReferencia(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << "Antes : a = " << a << ", b = " << b << endl;

    intercambiarReferencia(a, b);

    cout << "Después : a = " << a << ", b = " << b << endl;

    return 0;
}