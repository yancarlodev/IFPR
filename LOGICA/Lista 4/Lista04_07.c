#include <stdio.h>

int main (){
    float a, b, c, prmtTriang, areaTrap;
    scanf("%f %f %f", &a, &b, &c);
    if(a < b + c && b < a + c && c < a + b){
        prmtTriang = a + b + c; 
        printf("Perimetro = %.1f\n", prmtTriang);
    } else {
        areaTrap = ((a+b)*c) / 2;
        printf("Area = %.1f\n", areaTrap);
    }
    return 0;
}