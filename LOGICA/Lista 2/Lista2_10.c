#include <stdio.h>

int main (){
    int distancia;
    float comb_Gasto, km_L;
    printf("Insira a distancia percorrida e o combustivel gasto: ");
    scanf("%i %f", &distancia, &comb_Gasto);
    km_L = distancia / comb_Gasto;
    return printf("%.3f km/l\n", km_L);
}