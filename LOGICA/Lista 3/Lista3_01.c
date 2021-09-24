#include <stdio.h>
#include <math.h>

int main (){
    double raio, volume, pi = 3.14159;
    scanf("%lf", &raio);
    volume = (4 * pi * pow(raio, 3))/3;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}