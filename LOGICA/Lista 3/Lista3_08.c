#include <stdio.h>

int main (){
    int segundosiniciais, restosegundos;
    double horas, minutos, segundos;
    scanf("%i", &segundosiniciais);
    restosegundos = segundosiniciais;
    horas = segundosiniciais / 3600;
    restosegundos %= 3600;
    minutos = restosegundos / 60;
    restosegundos %= 60;
    segundos = restosegundos;
    printf("%.0lf:%.0lf:%.0lf\n", horas, minutos, segundos);
    return 0;
}