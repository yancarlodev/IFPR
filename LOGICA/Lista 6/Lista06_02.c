#include <stdio.h>

int main (){
    int contador = 0, score = 0;
    float number;
    while(contador <= 5){
        scanf(" %f", &number);
        if(number > 0){
            score++;
        }
        contador++;
    }
    printf("%i valores positivos\n", score);
    return 0;
}