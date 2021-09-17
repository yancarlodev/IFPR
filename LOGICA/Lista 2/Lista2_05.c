#include <stdio.h>

int main (){
    double a, b, media;
    printf("Insira as duas notas: ");
    scanf("%lf %lf", &a, &b);
    media = ((a*3.5) + (b*7.5)) / 11;
    return printf("MEDIA = %.5lf\n", media);
}