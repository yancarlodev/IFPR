#include <stdio.h>

int main (){
    int n[20], i, j;
    
    for(i = 19; i > -1; i--){
        scanf("%i", &n[i]);
    }
    for(j = 0; j < 20; j++){
        printf("N[%i] = %i\n", j, n[j]);
    }
    return 0;
}