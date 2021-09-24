#include <stdio.h>

int main (){
    int cod_Peca1, uni_Peca1, cod_Peca2, uni_Peca2;
    float valor_Peca1, valor_Peca2, a_Pagar;
    scanf("%i %i %f", &cod_Peca1, &uni_Peca1, &valor_Peca1);
    scanf("%i %i %f", &cod_Peca2, &uni_Peca2, &valor_Peca2);
    a_Pagar = (valor_Peca1*uni_Peca1) + (valor_Peca2*uni_Peca2);
    printf("VALOR A PAGAR: R$ %.2f\n", a_Pagar);
    return 0;
}