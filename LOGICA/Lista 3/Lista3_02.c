#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo, pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    areaTriangulo = (a*c)/2;
    areaCirculo = pi*pow(c, 2);
    areaTrapezio = ((a+b)*c)/2;
    areaQuadrado = pow(b, 2);
    areaRetangulo = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
    return 0;
}