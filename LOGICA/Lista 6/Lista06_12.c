#include <stdio.h>

int main (){
    int number, i, x = 1, y = 2, z = 3;
    scanf("%i", &number);
    for(i = 1; i <= number; i++){
        if(i == 1){
            printf("%i %i %i PUM\n", x, y, z);
        } else {
            x += 4;
            y += 4;
            z += 4;
            printf("%i %i %i PUM\n", x, y, z);
        }
    }
    return 0;
}