#include <stdio.h>
#include <math.h>

double calcularAreaCirc (double);

int main (){
    double raio;
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    calcularAreaCirc(raio);
    return 0;
}

double calcularAreaCirc (double raio)
{
    double pi = 3.14159, resultado;
    resultado = pi*pow(raio, 2);

    return printf("A area da circunferencia e: %.4lf\n", resultado);
}