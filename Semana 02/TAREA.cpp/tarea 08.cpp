//ejercicio 8 Triangulo forma de Herón
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    float ladoA, ladoB, ladoC, semiPerimetro, area;

    printf("Ingrese valor del lado A: ");
    scanf("%f", &ladoA);
    printf("Ingrese el valor del lado B: ");
    scanf("%f", &ladoB);
    printf("Ingrese el valor del lado C: ");
    scanf("%f", &ladoC);
    
    semiPerimetro = (ladoA + ladoB + ladoC) / 2;
    area = sqrt(semiPerimetro * (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC));

    printf("El semi Perimetro con lado A %.2f y lado B %.2f y lado C %.2f es: %.2f\n", ladoA, ladoB, ladoC, semiPerimetro);
    printf("El area del triangulo con lado A %.2f y lado B %.2f y lado C %.2f y semi Perimetro %.2f es: %.2f\n", ladoA, ladoB, ladoC, semiPerimetro, area);

    return 0;
}
       
