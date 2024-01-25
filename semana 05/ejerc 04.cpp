#include <iostream>
using namespace std;

int main() {
    int a = 4;
    switch (a << a) {
        case 8:
            a++;
            break;
        case 4:
            a++;
            break;
        case 2:
            break;
        case 1:
            a--;
            break;
    }
    cout << a;

    return 0;
}