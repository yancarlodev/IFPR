#include <stdio.h>
#include <math.h>

int main (){
    double x1, y1, x2, y2, distancia;
    printf("Insira os eixos x e y do primeiro ponto: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Insira os eixos x e y do segundo ponto: ");
    scanf("%lf %lf", &x2, &y2);
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return printf("%.4lf\n", distancia);
}