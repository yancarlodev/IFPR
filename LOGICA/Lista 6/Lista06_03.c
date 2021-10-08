#include <stdio.h>

int main (){
    int contador = 0, score = 0;
    float number, media = 0;
    while(contador <= 5){
        scanf(" %f", &number);
        if(number > 0){
            score++;
            media += number;
        }
        contador++;
    }
    media /= score;
    printf("%i valores positivos\n%.1f\n", score, media);
    return 0;
}