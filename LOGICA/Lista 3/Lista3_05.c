#include <stdio.h>

int main (){
    int km, minutos;
    printf("Insira a distancia: ");
    scanf("%i", &km);
    minutos = km*2;

    return printf("%i minutos\n", minutos);
}