// bucle while
// se necesita un control para que no se hag infinito

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero, suma = 0;
    int contador = 0;

    do
    {
        cout << "Digite un numero: ";
        cin >> numero;

        if (numero > 0)
        {
            suma += numero;
            contador++;

            if (contador == 7)
            {
                break;
            }
        }

    } while (true);

    cout << "\nLa suma total es: " << suma << endl;

    system("pause");
    return 0;
}