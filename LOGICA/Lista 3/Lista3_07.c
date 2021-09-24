#include <stdio.h>

int main (){
    int valorinicial, valorResto;
    double n100, n50, n20, n10, n5, n2, n1;
    scanf("%i", &valorinicial);
    printf("%i\n", valorinicial);
    n100 = valorinicial / 100;
    valorResto = valorinicial % 100;
    n50 = valorResto / 50;
    valorResto %= 50;
    n20 = valorResto / 20;
    valorResto %= 20;    
    n10 = valorResto / 10;
    valorResto %= 10; 
    n5 = valorResto / 5;
    valorResto %= 5;
    n2 = valorResto / 2;
    valorResto %= 2;
    n1 = valorResto / 1;
    printf("%.0lf nota(s) de R$ 100,00\n%.0lf nota(s) de R$ 50,00\n%.0lf nota(s) de R$ 20,00\n%.0lf nota(s) de R$ 10,00\n%.0lf nota(s) de R$ 5,00\n%.0lf nota(s) de R$ 2,00\n%.0lf nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);
    return 0;
}