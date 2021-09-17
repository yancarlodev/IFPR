#include <stdio.h>

int main (){
    int a, b, c, d, diferenca;
    printf("Insira quatro numeros: ");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    diferenca = (a * b - c * d);
    return printf("DIFERENCA = %i", diferenca);
}