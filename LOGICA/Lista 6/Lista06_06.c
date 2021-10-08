#include <stdio.h>

int main (){
    int valor, contador, score;
    scanf("%i", &valor);
    for(contador = 0; contador <= valor; contador++){
        if(contador % 2 == 1){
            printf("%i\n", contador);
        }
    }
    return 0;
}