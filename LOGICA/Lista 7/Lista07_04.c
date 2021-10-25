#include <stdio.h>

int main (){
    int seletor, number;
    scanf("%i", &seletor);

    while(seletor > 0){
        scanf("%i", &number);
        if(number % 2 == 0){
            if(number > 0){
                printf("EVEN POSITIVE\n");
            } else if(number < 0){
                printf("EVEN NEGATIVE\n");
            } else {
                printf("NULL\n");
            }
        } else if(number % 2 == 1 || number % 2 == -1){
            if(number > 0){
                printf("ODD POSITIVE\n");
            } else if(number < 0){
                printf("ODD NEGATIVE\n");
            } else {
                printf("NULL\n");
            }
        } 
        seletor--;
    }
    return 0;
}