// ejercicio 2
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> palabras;

    string palabra;
    cout << "Ingrese palabras-espacio para finalizar :" << endl;
    do
    {
        cout << "Palabra: ";
        getline(cin, palabra);

        if (!palabra.empty())
        {

            palabras.push_back(palabra);
        }

    } while (!palabra.empty());

    string resultado;
    for (const string &p : palabras)
    {
        resultado += p + " ";
    }

    cout << "\nFrase es :" << endl;
    cout << resultado << endl;

    return 0;
}