#include <stdio.h>

int main (){
    int i, score = 0;
    char frase[100], seletor;
    scanf("%c ", &seletor);

    fgets(frase, sizeof(frase), stdin);
    for(i = 0; i < sizeof(frase); i++){
        if(frase[i] == seletor){
            score++;
        }
    }

    printf("%d\n", score);

    return 0;
}