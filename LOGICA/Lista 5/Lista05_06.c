#include <stdio.h>

int main (){
    int hora, minuto, hIni, hFim, mIni, mFim;
    scanf("%i %i %i %i", &hIni, &mIni, &hFim, &mFim);

    if(hIni > hFim && mIni > mFim){
        hora = 23 - (hIni - hFim);
        minuto = 60 - (mIni - mFim);
    } else if(hIni > hFim && mIni <= mFim){
                hora = 24 - (hIni - hFim);
                minuto = mFim - mIni;
    } else if(hIni < hFim && mIni > mFim){
                hora = hFim - hIni;
                hora -= 1;
                minuto = 60 - (mIni - mFim);
    } else if(hIni < hFim && mIni <= mFim){
                hora = hFim - hIni;
                minuto = mFim - mIni;
    } else if(hIni == hFim && mIni > mFim){
                hora = 23;
                minuto = 60 - (mIni - mFim);
    } else if(hIni == hFim && mIni < mFim){
                hora = 0;
                minuto = mFim - mIni;
    } else if(hIni == hFim && mIni == mFim){
        hora = 24;
        minuto = 0;
    } 
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, minuto);
    return 0;
}