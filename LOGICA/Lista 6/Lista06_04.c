#include <stdio.h>

int main (){
    int contador = 0, score = 0, number;
    while(contador <= 4){
        scanf(" %i", &number);
        if(number % 2 == 0){
            score++;
        }
        contador++;
    }
    printf("%i valores pares\n", score);
    return 0;
}