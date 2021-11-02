#include <stdio.h>

int main (){
    int linha, i, j, k = 0, l = 10;
    char op;
    float m[12][12], soma = 0, media = 0;

    scanf("%i", &linha);
    scanf(" %c", &op);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
        }
    }
    i = 0;
    j = 0;
    if(op == 'S'){
        for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                if(j <= l){
                    soma += m[i][j];
                }
            }
            l--;
        }
        printf("%.1f\n", soma);
    } else if(op == 'M'){
        for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                if(j <= l){
                    soma += m[i][j];
                    k++;
                }
            }
            l--;       
        }
        media = soma / k;
        printf("%.1f\n", media);
    }
    return 0;
}