#include <stdio.h>

int main (){
    int seletor, alcool = 0, gasolina = 0, diesel = 0;
    while(seletor != 4){
        scanf("%i", &seletor);
        if(seletor == 1){
            alcool++;
        } else if(seletor == 2){
            gasolina++;
        } else if(seletor == 3){
            diesel++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", alcool, gasolina, diesel);
    return 0;
}