#include <stdio.h>

int main (){
    char frase[100];
    int i, score = -2;
    for(i = 0; i < sizeof(frase); i++){
        frase[i] = '$';
    }

    fgets(frase, sizeof(frase), stdin);

    for(i = 0; i < sizeof(frase); i++){
        if(frase[i] != '$'){
            score++;
        }
    }

    int j = score;
    char invertido[score];

    for(i = 0; i <= score; i++){
        invertido[j] = frase[i];
        j--;
    }
    
    puts(invertido);

    return 0;
}