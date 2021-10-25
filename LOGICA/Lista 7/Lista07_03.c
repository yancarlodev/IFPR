#include <stdio.h>
#include <math.h>

int main (){
    int seletor, cache, raiz, i;
    
    scanf("%i", &seletor);
    cache = seletor;

    for(i = 1; i <= seletor; i++){
        if(i % 2 == 0){
            raiz = pow(i, 2);
            printf("%i^2 = %i\n", i, raiz);
        }
    }

    return 0;
}