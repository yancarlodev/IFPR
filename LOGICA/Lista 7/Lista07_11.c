#include <stdio.h>
#include <math.h>

int main (){
    double i, s = 1, j = 1, pot;
    for(i = 1; j < 39; i++){
        j += 2;
        pot = pow(2, i);
        s += j/pot; 
    }
    printf("%.2lf\n", s);
    return 0;
}