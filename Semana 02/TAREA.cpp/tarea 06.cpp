//Ejercicio 6 Triangulo Inscrito
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    float ladoA,ladoB,ladoC,Radio,area;

    printf("Ingrese el valor del lado A: ");
    scanf("%f" , &ladoA);
    printf("Ingrese el valor del lado B: ");
    scanf("%f" , &ladoB);
    printf("Ingrese el valor del lado C: ");
    scanf("%f" , &ladoC);
    printf("Ingrese el valor del Radio: ");
    scanf("%f", &Radio);

    area = (ladoA * ladoB * ladoC)/ (Radio * 4);

    printf("El area del triangulo inscrito con ladoA %.2f y ladoB %.2f y ladoC %.2f y Radio %.2f es: %.2f\n",ladoA,ladoB,ladoC,Radio,area);
    return 0;}