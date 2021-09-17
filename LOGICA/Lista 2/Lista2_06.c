#include <stdio.h>

int main (){
    float a, b, c, media;
    printf("Insira as tres notas: ");
    scanf("%f %f %f", &a, &b, &c);
    media = ((a*2) + (b*3) + (c*5)) / 10;
    return printf("MEDIA = %.1f\n", media);
}