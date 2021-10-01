#include <stdio.h>

int main (){
    int inicio, fim, resultado;
    scanf("%i %i", &inicio, &fim);
    if(inicio > fim){
        resultado = 24 % inicio;
        resultado += fim;
        printf("O JOGO DUROU %i HORA(S)\n", resultado);
    } else if(inicio == fim){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if(inicio < fim){
        resultado = fim - inicio;
        printf("O JOGO DUROU %i HORA(S)\n", resultado);
    }
    return 0;
}