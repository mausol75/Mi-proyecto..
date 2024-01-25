//enum  define un conj. de constantes con nombres que no va a cambiar
// constante no cambia
#include<iostream>
using namespace std;

enum Seasons {
    AUTUMN,
    WINTER,
    SPRING,
    SUMMER,
};        
int main() {
       Seasons estacionActual = SUMMER;
    switch (estacionActual) {
    case AUTUMN:
     cout << "Es otoño";
        break;
    case WINTER:
        cout << "Es invierno";
        break;
    case SPRING: 
        cout << "Es primavera";
        break;
    case SUMMER: 
        cout << "Es VERANO";
        break;
    }

    return 0;
 }
