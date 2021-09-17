#include <stdio.h>

int main (){
    double litros, tempo, kmMedio, distancia;
    printf("Insira o tempo de viagem e a velocidade media: ");
    scanf("%lf %lf", &tempo, &kmMedio);
    distancia = tempo * kmMedio;
    litros = distancia/12;
    return (printf("%.3lf", litros));
}