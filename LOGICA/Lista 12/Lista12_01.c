#include <stdio.h>

int soma(int n);

int main (){
    int n;
    printf("Insira um valor para a soma de todos numeros reais\n");
    scanf("%d", &n);
    soma(n);
    return 0;
}

int soma (int n){
    int i, resultado = 0;

    if(n > 0){
        for(i = 0; i <= n; i++){
            resultado += i;
        }
    }
    return printf("A soma deu: %d\n", resultado);
}