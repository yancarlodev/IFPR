#include <stdio.h>

int calcularAreaRetangulo (int, int);

int main (){
    int base, altura;
    printf("Insira o tamanho da base e da altura: ");
    scanf("%d %d", &base, &altura);
    calcularAreaRetangulo(base, altura);
    return 0;
}

int calcularAreaRetangulo (int base, int altura){
    int resultado;
    resultado = base * altura;

    return printf("A area do retangulo e: %d\n", resultado);
}