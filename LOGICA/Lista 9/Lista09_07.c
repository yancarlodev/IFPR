#include <stdio.h>

int main (){
    int linha, i, j, k = 0, l = 10, g = 1;
    char op;
    double m[12][12], soma = 0, media = 0;

    scanf("%i", &linha);
    scanf(" %c", &op);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    i = 0;
    j = 0;
    if(op == 'S'){
        for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                if(j <= l && j >= g){
                    soma += m[i][j];
                }
            }
            l--;
            g++;
        }
        printf("%.1lf\n", soma);
    } else if(op == 'M'){
        for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                if(j <= l && j >= g){
                    soma += m[i][j];
                    k++;
                }
            }
            l--;
            g++;       
        }
        media = soma / k;
        printf("%.1lf\n", media);
    }
    return 0;
}