#include <stdio.h>

int main (){
    double litros, tempo, kmMedio, distancia;
    scanf("%lf %lf", &tempo, &kmMedio);
    distancia = tempo * kmMedio;
    litros = distancia/12;
    (printf("%.3lf\n", litros));
    return 0;
}