#include <stdio.h>

int main (){
    int number, horas;
    float salary, salario_Hora;
    scanf("%i %i %f", &number, &horas, &salario_Hora);
    salary = horas * salario_Hora;
    printf("NUMBER = %i\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}