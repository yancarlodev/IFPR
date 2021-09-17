#include <stdio.h>

int main (){
    int segundosiniciais, restosegundos;
    double horas, minutos, segundos;
    printf("Insira a quantidade de segundos: ");
    scanf("%i", &segundosiniciais);
    restosegundos = segundosiniciais;
    horas = segundosiniciais / 3600;
    restosegundos %= 3600;
    minutos = restosegundos / 60;
    restosegundos %= 60;
    segundos = restosegundos;

    return printf("%.0lf:%.0lf:%.0lf", horas, minutos, segundos);
}