#include <stdio.h>

int main (){
    int distancia;
    float comb_Gasto, km_L;
    scanf("%i %f", &distancia, &comb_Gasto);
    km_L = distancia / comb_Gasto;
    printf("%.3f km/l\n", km_L);
    return 0;
}