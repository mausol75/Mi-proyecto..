//ejercicio 5 Triangulo
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    float lado1,lado2,base,altura,area,perimetro;

    printf("Ingrese valor del lado 1 del triangulo: ");
    scanf("%f", &lado1);
    printf("Ingrese valor del lado 2 del triangulo: ");
    scanf("%f", &lado2);
    printf("Ingrese valor de la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese valor de la altura  del triangulo: ");
    scanf("%f", &altura);
    
    area = base * altura / 2;
    perimetro = lado1+lado2+base;

    printf("El area del triangulo con base %.2f y altura %2f es: %.2f\n",base,altura,area);
    printf("El perimetro del traingulo con lado1  %2f y lado2 %2f y base %2f es: %.2f\n",lado1,lado2,base,perimetro);

    return 0;}