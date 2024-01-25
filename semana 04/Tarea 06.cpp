/*uego de Preguntas y Respuestas: Crea un juego de preguntas y
respuestas donde el programa haga preguntas al
usuario y luego evalúe las respuestas. Mantén un contador de respuestas correctas e incorrectas.
*/
//ejercicio 6
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    cout << "1. Cual es la capital de Francia?" << endl;
    string respuesta1;
    getline(cin, respuesta1);

    if (respuesta1 == "París" || respuesta1 == "parís" || respuesta1 == "Paris" || respuesta1 == "paris")
    {
        cout << "Correcto" << endl;
        respuestasCorrectas++;
    }
    else
    {
        cout << "Incorrecto. La respuesta correcta es Paris." << endl;
        respuestasIncorrectas++;
    }

    cout << "2. Cuantos lados tiene un triangulo?" << endl;
    int respuesta2;
    cin >> respuesta2;

    if (respuesta2 == 3)
    {
        cout << "Correcto" << endl;
        respuestasCorrectas++;
    }
    else
    {
        cout << "Incorrecto. Un triangulo tiene 3 lados." << endl;
        respuestasIncorrectas++;
    }

    cout << "3. Quien escribio 'Romeo y Julieta'?" << endl;
    string respuesta3;
    cin.ignore();
    getline(cin, respuesta3);

    if (respuesta3 == "William Shakespeare" || respuesta3 == "william shakespeare")
    {
        cout << "Correcto" << endl;
        respuestasCorrectas++;
    }
    else
    {
        cout << "Incorrecto. 'Romeo y Julieta' fue escrito por William Shakespeare." << endl;
        respuestasIncorrectas++;
    }

    cout << "\nResultados:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}