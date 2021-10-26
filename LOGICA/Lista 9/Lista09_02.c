#include <stdio.h>

int main (){
    int n[10], i;
    scanf("%i", &n[0]);
    printf("N[%i] = %i\n", 0, n[0]);

    for(i = 1; i < 10; i++){
        n[i] = 2 * n[i-1];
        printf("N[%i] = %i\n", i, n[i]);
    }
    return 0;
}