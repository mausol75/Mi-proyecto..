//ejercicio 4 Trapecio
#include <iostream>
#include <stdio.h>


using namespace std;

int main() {
    float B,b,altura,area;

    printf("Ingrese valor de la Base mayor del trapecio: ");
    scanf("%f", &B);
    printf("Ingrese valor de la base menor del trapecio: ");
    scanf("%f", &b);
    printf("Ingrese valor de la altura del trapecio: ");
    scanf("%f", &altura);

     area=(B + b)*altura/2;

    printf("El area del trapecio con B %.2f y b %2f  es: %.2f\n",B,b,area);

    return 0;
}