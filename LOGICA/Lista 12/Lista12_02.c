#include <stdio.h>

int main (){
    raizSegGrau();
}

int raizSegGrau () {
    int i, real = 0;
    for(i = 2; i > 0; i--){
        if(i % 2 == 0){
            real++;
        }
    }
    return printf("Numero de raizes reais de um polinomio de 2 grau: %d\n", real);
}