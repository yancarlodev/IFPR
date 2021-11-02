#include <stdio.h>

int main (){
    int i; 
    double n[100], x;
    scanf("%lf", &x);
    n[0] = x;
    printf("N[%i] = %.4lf\n", 0, x);

    for(i = 1; i < 100; i++){
        n[i] = n[i-1] / 2;
        printf("N[%i] = %.4lf\n", i, n[i]);
    }
    return 0;
}