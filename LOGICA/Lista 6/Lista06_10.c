#include <stdio.h>

int main (){
    int resposta, senha = 2002;
    while(resposta != senha){
        scanf("%i", &resposta);
        if(resposta != senha){
            printf("Senha Invalida\n");
        }
    }
    printf("Acesso Permitido\n");
    return 0;
}