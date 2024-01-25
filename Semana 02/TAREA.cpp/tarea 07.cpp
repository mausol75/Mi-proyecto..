//Ejercicio 7 Triangulo Circunscrito
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    float ladoA,ladoB,ladoC,Radio,semiPerimetro,area;

    printf("Ingrese el valor del lado A: ");
    scanf("%f" , &ladoA);
    printf("Ingrese el valor del lado B: ");
    scanf("%f" , &ladoB);
    printf("Ingrese el valor del lado C: ");
    scanf("%f" , &ladoC);
    printf("Ingrese el valor del Radio: ");
    scanf("%f", &Radio);

    semiPerimetro = (ladoA + ladoB + ladoC) / 2;
    area = Radio * semiPerimetro;

    printf("El semi Perimetro del triangulo con ladoA %.2f y ladoB %.2f y ladoC %.2f  es: %.2f\n",ladoA,ladoB,ladoC,semiPerimetro);
    printf("El area del triangulo circunscrito con Radio %.2f y semiPerimetro %.2f es: %.2f\n" ,Radio,semiPerimetro,area);
    return 0;}