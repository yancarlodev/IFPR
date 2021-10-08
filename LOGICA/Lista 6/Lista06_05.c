#include <stdio.h>

int main (){
    int contador = 0, par = 0, impar = 0, positivo = 0, negativo = 0, number;
    while(contador <= 4){
        scanf(" %i", &number);
        if(number % 2 == 0){
            par++;
        } else{
            impar++;
        }
        if(number > 0){
            positivo++;
        } else if(number < 0){
            negativo++;
        }
        contador++;
    }
    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}