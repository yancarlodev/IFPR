#include <stdio.h>

int main () {
    int seletor, number, in = 0, out = 0;
    scanf("%i", &seletor);
    while(seletor > 0){
        scanf("%i", &number);
        if(number <= 10 && number <= 20){
            in++;
        } else{
            out++;
        }
        seletor--;
    }
    printf("%i in\n%i out\n", out, in);
    return 0;
}