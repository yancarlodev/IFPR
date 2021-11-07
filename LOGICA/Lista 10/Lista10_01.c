#include <stdio.h>

int main (){
    int i, score = 0;
    char frase[100];

    fgets(frase, sizeof(frase), stdin);
    for(i = 0; i < sizeof(frase); i++){
        if(frase[i] == 'a'){
            score++;
        }
    }

    printf("%d\n", score);

    return 0;
}