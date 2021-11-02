#include <stdio.h>

int main (){
    int x[10000], n, i, menor = 10000, index;
    scanf("%i", &n);

    for(i = 0; i < n; i++){
        scanf("%i", &x[i]);
    }
    for(i = 0; i < n; i++){
        if(x[i] < x[i-1]){
            if(x[i] < menor){
                menor = x[i];
                index = i;
            }
        }
    }
    printf("Menor valor: %i\nPosicao: %i\n", menor, index);
    return 0;
}