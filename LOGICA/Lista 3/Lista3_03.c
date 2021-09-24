#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, maiorAb, maiorAbc;
    scanf("%i %i %i", &a, &b, &c);
    maiorAb = (a+b+abs(a-b))/2;
    maiorAbc = (maiorAb+c+abs(maiorAb-c))/2;
    printf("%i eh o maior\n", maiorAbc);
    return 0;
}