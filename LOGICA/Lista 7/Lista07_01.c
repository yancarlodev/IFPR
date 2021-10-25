#include <stdio.h>

int main (){
    int i = 0, number;
    scanf("%i", &number);
    while (i < 6){
        if(number % 2 == 1){
            printf("%i\n", number);
            i++;
        }
        number++;
    }
    return 0;
}