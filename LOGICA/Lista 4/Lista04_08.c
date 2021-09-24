#include <stdio.h>

int main (){
    int a, b, resultado;
    scanf("%i %i", &a, &b);
    if(a > b){
        resultado = a % b;      
    } else {
        resultado = b % a;
    }
if(resultado == 0){
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}