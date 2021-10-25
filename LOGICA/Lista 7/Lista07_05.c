#include <stdio.h>

int main (){
    int divisor, i;
    scanf("%i", &divisor);

    for(i = 0; i < 10000; i++){
        if(i % divisor == 2){
            printf("%i\n", i);
        }
    }

    return 0;
}