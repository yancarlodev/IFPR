#include <stdio.h>

int main (){
    int hInicio, mInicio, hFim, mFim, hora, minuto;
    scanf("%i %i %i %i", &hInicio, &mInicio, &hFim, mFim);
    if(hInicio > hFim){
        hora = 24 % hInicio;
        hora += hFim;
        printf("O JOGO DUROU %i HORA(S)\n", hora);
    } else if(hInicio == hFim){
        hora = 24;
        printf("O JOGO DUROU %i HORA(S)\n", hora);
    } else if(hInicio < hFim){
        hora = hFim - hInicio;
        printf("O JOGO DUROU %i HORA(S)\n", hora);
    }

    if(mInicio > mFim && hInicio < hFim){
        hora -= 1;
        
    }

    return 0;
}