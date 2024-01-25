//ejercicio 1
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    float lado, area, perimetro, diagonal;

    printf("Ingrese valor del lado del cuadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = 4 * lado;
    diagonal = sqrt(2) * lado;

    printf("El area del cuadrado con lado %.2f es: %.2f\n", lado, area);
    printf("El perimetro del cuadrado con lado %.2f es: %.2f\n", lado, perimetro);
    printf("La diagonal del cuadrado con lado %.2f es: %.2f\n", lado, diagonal);

    return 0;
}