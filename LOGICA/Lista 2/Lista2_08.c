#include <stdio.h>

int main (){
    int number, horas;
    float salary, salario_Hora;
    printf("Insira o numero do funcionario, as horas trabalhadas, e o salario por hora: ");
    scanf("%i %i %f", &number, &horas, &salario_Hora);
    salary = horas * salario_Hora;
    return printf("NUMBER = %i\nSALARY = US$ %.2f\n", number, salary);
}