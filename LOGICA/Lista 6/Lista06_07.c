#include <stdio.h>

int main (){
    int valor, valor2, contador, resultado = 0;
    scanf("%i", &valor);
    scanf("%i", &valor2);
    if(valor > valor2){
        for(contador = 0; valor2 < valor; contador++){
            valor2++;
            if(valor2 % 2 == 1 || valor2 % 2 == -1){
                resultado += valor2;
            }
        }
    } else if(valor2 > valor){
            for(contador = 0; valor < valor2; contador++){
                valor++;
                if(valor % 2 == 1 || valor % 2 == -1){
                    resultado += valor;
                }
            }
    } else{
        resultado = 0;
    }
    printf("%i\n", resultado);
    return 0;
}