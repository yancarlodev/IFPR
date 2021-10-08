#include <stdio.h>

int main (){
    int number, i, x = 1, y = 1, z = 1;
    scanf("%i", &number);
    for(i = 1; i <= number; i++){
        if(i == 1){
            printf("%i %i %i\n", x, y, z);
        } else {
            x++;
            y = x*x;
            z = x*y;
            printf("%i %i %i\n", x, y, z);
        }
    }
    return 0;
}