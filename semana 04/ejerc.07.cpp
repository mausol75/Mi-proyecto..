/* do-while
do
statement;
while(condition);
*/
// ejercicio de usar do-while para sumar dos numeros y decir si continuo o no
#include <iostream>
using namespace std;

int main()
{
    char continuar;

    do
    {
        int nElementos;

        cout << "Ingrese la cantidad de elementos : ";
        cin >> nElementos;

        while (nElementos <= 0)
        {
            cout << "Ingrese una cantidad mayor que 0: ";
            cin >> nElementos;
        }

        int suma = 0;

        for (int i = 1; i <= nElementos; ++i)
        {
            int numero;
            cout << "Ingrese el numero " << i << ": ";
            cin >> numero;
            suma += numero;
        }

        cout << "\nLa suma de los " << nElementos << " numeros es: " << suma << endl;

        do
        {
            cout << "Desea continuar (S/N): ";
            cin >> continuar;

            if (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n')
            {
                cout << "Opción no válida. Por favor, ingrese S o N." << endl;
            }

        } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
//crea otro ejemplo
