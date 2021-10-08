#include <stdio.h>

int main (){
    int number, i, resultado, final = 0;
    scanf("%i", &number);
    for(i = 1; i != number; i++){
        resultado = number * (number-i);
        final += resultado;
    }
    printf("%i", final);
}