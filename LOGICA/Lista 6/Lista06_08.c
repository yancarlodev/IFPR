#include <stdio.h>

int main (){
    int contador, number, resultado;
    scanf("%i", &number);
    for(contador = 1; contador <= 10; contador++){
        resultado = contador * number;
        printf("%i x %i = %i\n", contador, number, resultado);
    }
    return 0;
}