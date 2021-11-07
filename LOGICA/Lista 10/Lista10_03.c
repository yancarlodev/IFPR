#include <stdio.h>

int main (){
    char frase[100], letra, upper[100];
    int i;

    fgets(frase, sizeof(frase), stdin);

    for(i = 0; i < sizeof(frase); i++){
        letra = frase[i];
        upper[i] = toupper(letra);
    }

    puts(upper);

    return 0;
}