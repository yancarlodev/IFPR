#include <stdio.h>

int main (){
    int a, b, x;
    printf("Insira dois numeros para somar: ");
    scanf("%i %i", &a, &b);
    x = a + b;
    return printf("X = %i\n", x);
}