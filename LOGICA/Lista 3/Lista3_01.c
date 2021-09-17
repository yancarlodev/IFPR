#include <stdio.h>
#include <math.h>

int main (){
    double raio, volume, pi = 3.14159;
    printf("Insira o raio: ");
    scanf("%lf", &raio);
    volume = (4 * pi * pow(raio, 3))/3;

    return printf("VOLUME = %.3lf\n", volume);
}