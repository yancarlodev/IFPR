#include <stdio.h>

int main (){
    int a, b, prod;
    printf("Insira dois numeros para multiplicar: ");
    scanf("%i %i", &a, &b);
    prod = a * b;

    return printf("PROD = %i\n", prod);
}