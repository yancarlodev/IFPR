#include <stdio.h>

int main (){
    int x, y, z, resultado = 0;
    scanf("%i %i", &x, &y);
    if(x > y){
        z = x;
        x = y;
        y = z;
    }
    while(x <= y){
        if(x % 13 != 0){
            resultado += x;
        }
        x++;
    }
    printf("%i\n", resultado);
    return 0;
}




