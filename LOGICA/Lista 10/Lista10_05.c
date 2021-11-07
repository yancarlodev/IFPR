#include <stdio.h>

int main (){
    char frase1[4] = "lua", frase2[5] = "cheia";

    strcat(frase1, frase2);
    
    puts(frase1);
    puts(frase2);

    return 0;
}