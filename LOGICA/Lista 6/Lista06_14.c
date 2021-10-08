#include <stdio.h>

int main (){
    int number, i;
    scanf("%i", &number);
    i = number - 1;
    while(i > 0){
        number *= i;
        i--;
    }
    printf("%i\n", number);
    return 0;
}