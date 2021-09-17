#include <stdio.h>

int main (){
    int a, b, soma;
    printf("Insira dois numeros para somar: ");
    scanf("%i %i", &a, &b);
    soma = a + b;
    return printf("SOMA = %i\n", soma);
}