#include <stdio.h>

int main (){
    int seletor, quant;
    float total;
    scanf("%i %i", &seletor, &quant);
    switch (seletor){
        case 1:
            total = 4*quant;
            printf("Total = R$ %.2f\n", total);
            break;
        case 2:
            total = 4.50*quant;
            printf("Total = R$ %.2f\n", total);
            break;
        case 3:
            total =  5*quant;
            printf("Total = R$ %.2f\n", total);
            break;
        case 4:
            total = 2*quant;
            printf("Total = R$ %.2f\n", total);
            break;
        case 5:
            total = 1.50*quant;
            printf("Total = R$ %.2f\n", total);
            break;    
    }
    return 0;
}