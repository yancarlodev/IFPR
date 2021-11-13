#include <stdio.h>

int calcularAreaTriangulo (int, int);

int main (){
    int base, altura;
    printf("Insira o tamanho da base e da altura: ");
    scanf("%d %d", &base, &altura);
    calcularAreaTriangulo(base, altura);
    return 0;
}

int calcularAreaTriangulo (int base, int altura){
    int resultado;
    resultado = (base * altura) / 2;

    return printf("A area do triangulo e: %d\n", resultado);
}