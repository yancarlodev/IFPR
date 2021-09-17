#include <stdio.h>

int main (){
    int cod_Peca1, uni_Peca1, cod_Peca2, uni_Peca2;
    float valor_Peca1, valor_Peca2, a_Pagar;
    printf("Insira o codigo, as unidades e o valor da primeira peca: ");
    scanf("%i %i %f", &cod_Peca1, &uni_Peca1, &valor_Peca1);
    printf("Insira o codigo, as unidades e o valor da segunda peca: ");
    scanf("%i %i %f", &cod_Peca2, &uni_Peca2, &valor_Peca2);
    a_Pagar = (valor_Peca1*uni_Peca1) + (valor_Peca2*uni_Peca2);
    return printf("VALOR A PAGAR: R$ %.2f\n", a_Pagar);
}