#include <stdio.h>

int main (){
    int i = -2, j;
    for(j = 60; j >= 0; j -= 5){
        i += 3;
        printf("I=%i J=%i\n", i, j);
    }
    return 0;
}