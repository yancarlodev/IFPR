#include <stdio.h>

int main (){
    int seletor = 1, inter, gremio, scoreinter = 0, scoregremio = 0, grenais = 0, empate = 0;

    while(seletor == 1){
        scanf("%i %i", &inter, &gremio);
        if(inter > gremio){
            scoreinter++;
        } else if(gremio > inter) {
            scoregremio++;
        } else {
            empate++;
        }
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &seletor);
    }

    printf("%i grenais\n", grenais);
    printf("Inter:%i\n", scoreinter);
    printf("Gremio:%i\n", scoregremio);
    printf("Empates:%i\n", empate);

    if(scoreinter > scoregremio){
        printf("Inter venceu mais\n");
    } else if(scoregremio > scoreinter){
        printf("Gremio venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }

    return 0;    
}