//ejercicio 2
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    float base,altura,area, perimetro, diagonal;

    printf("Ingrese valor de la base del rectangulo: ");
    scanf("%f", &base);
    printf("Ingrese el valor de la altura del rectangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2*(base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("El area del rectangulo con base %.2f y altura %2f es: %.2f\n",base,altura,area);
    printf("El perimetro del rectangulo con base %.2f y altura %2f es: %.2f\n", base,altura, perimetro);
    printf("La diagonal del rectangulo con base %.2f y altura %2f es: %.2f\n", base,altura, diagonal);

    return 0;
}