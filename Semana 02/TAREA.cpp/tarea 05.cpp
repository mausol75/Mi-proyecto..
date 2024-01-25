//ejercicio 3   rombo
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    float D,d,area,lado,perimetro;

    printf("Ingrese valor del Diagonal mayor del rombo: ");
    scanf("%f", &D);
    printf("Ingrese valor del diagonal menor del rombo: ");
    scanf("%f", &d);

    area = (D * d)/ 2;
    lado = sqrt(pow(D/2, 2) + pow(d/2, 2));
    perimetro = 4 * lado;

    printf("El area del rombo con D %.2f y d %2f es: %.2f\n",D,d,area);
    printf("El lado del rombo con D %.2f y d %2f es: %.2f\n", D,d, lado);
    printf("El perimetro del rombo con lado  %2f es: %.2f\n", lado,perimetro);

    return 0;
}