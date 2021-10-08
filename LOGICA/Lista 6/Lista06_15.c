#include <stdio.h>

int main (){
    int idade = 0, divisor = 0;
    float resultado = 0;

    while(idade >= 0){
        scanf("%i", &idade);
        if(idade >= 0){
        resultado += idade;
        divisor++;
        }
    }
    resultado /= divisor;
    printf("%.2f\n", resultado);
    return 0;
}