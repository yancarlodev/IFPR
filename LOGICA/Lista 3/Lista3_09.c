#include <stdio.h>

int main (){
    int idadeinicial, restoidade;
    double ano, mes, dia;
    printf("Insira sua idade (em dias): ");
    scanf("%i", &idadeinicial);
    restoidade = idadeinicial;
    ano = idadeinicial / 365;
    restoidade %= 365;
    mes = restoidade / 30;
    restoidade %= 30;
    dia = restoidade;

    return printf("%.0lf ano(s)\n%.0lf mes(es)\n%.0lf dia(s)\n", ano, mes, dia);
}