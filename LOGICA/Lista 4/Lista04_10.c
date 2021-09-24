#include <stdio.h>

int main (){
    int porcentagem;
    double salario, valorGanho, salarioFinal;
    scanf("%lf", &salario);
    if(salario >= 0 && salario <= 400){
        porcentagem = 15;
        valorGanho = (salario/100)*porcentagem;
        salarioFinal = valorGanho + salario;
    } else if(salario > 400 && salario <= 800){
        porcentagem = 12;
        valorGanho = (salario/100)*porcentagem;
        salarioFinal = valorGanho + salario;
    } else if(salario > 800 && salario <= 1200){
        porcentagem = 10;
        valorGanho = (salario/100)*porcentagem;
        salarioFinal = valorGanho + salario;
    } else if(salario > 1200 && salario <= 2000){
        porcentagem = 7;
        valorGanho = (salario/100)*porcentagem;
        salarioFinal = valorGanho + salario;
    } else {
        porcentagem = 4;
        valorGanho = (salario/100)*porcentagem;
        salarioFinal = valorGanho + salario;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %i %%\n", salarioFinal, valorGanho, porcentagem);
    return 0;
}    