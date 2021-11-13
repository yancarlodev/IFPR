#include <stdio.h>
#include <math.h>

double calcularAreaCirc (double);
int calcularAreaRetangulo (int, int);
int calcularAreaTriangulo (int, int);

int main (){
    int seletor, base, altura;
    double raio;
    printf("Selecione uma das operacoes abaixo:\n\n[1] Area da circunferencia\n[2] Area do retangulo\n[3] Area do triangulo\n");
    scanf("%d", &seletor);
    switch (seletor)
    {
    case 1:
        printf("Informe o valor do raio: ");
        scanf("%lf", &raio);
        calcularAreaCirc(raio);
        break;

    case 2:
        printf("Informe o valor da base e da altura: ");
        scanf("%d %d", &base, &altura);
        calcularAreaRetangulo(base, altura);
        break;

    case 3:
        printf("Informe o valor da base e da altura: ");
        scanf("%d %d", &base, &altura);
        calcularAreaTriangulo(base, altura);
        break;

    default:
    printf("Por valor, seleciona um valor valido!\n");
        break;
    }
}

double calcularAreaCirc (double raio)
{
    double pi = 3.14159, resultado;
    resultado = pi*pow(raio, 2);

    return printf("A area da circunferencia e: %.4lf\n", resultado);
}

int calcularAreaRetangulo (int base, int altura){
    int resultado;
    resultado = base * altura;

    return printf("A area do retangulo e: %d\n", resultado);
}

int calcularAreaTriangulo (int base, int altura){
    int resultado;
    resultado = (base * altura) / 2;

    return printf("A area do triangulo e: %d\n", resultado);
}