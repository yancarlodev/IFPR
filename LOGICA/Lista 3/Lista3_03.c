#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, maiorAb, maiorAbc;
    printf("Insira tres numeros: ");
    scanf("%i %i %i", &a, &b, &c);
    maiorAb = (a+b+abs(a-b))/2;
    maiorAbc = (maiorAb+c+abs(maiorAb-c))/2;
    return printf("%i eh o maior\n", maiorAbc);
}