#include <stdio.h>
#include <math.h>

int main (){
    double valorResto, valorinicial, n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001;
    printf("Insira um valor: ");
    scanf("%lf", &valorinicial);
    n100 = floor(valorinicial / 100);
    valorResto = fmod(valorinicial, 100);
    n50 = floor(valorResto / 50);
    valorResto = fmod(valorResto, 50);
    n20 = floor(valorResto / 20);
    valorResto = fmod(valorResto, 20);
    n10 = floor(valorResto / 10);
    valorResto = fmod(valorResto, 10);
    n5 = floor(valorResto / 5);
    valorResto = fmod(valorResto, 5);
    n2 = floor(valorResto / 2);
    valorResto = fmod(valorResto, 2);
    m1 = floor(valorResto / 1);
    valorResto = fmod(valorResto, 1);
    m050 = floor(valorResto / 0.50);
    valorResto = fmod(valorResto, 0.50);
    m025 = floor(valorResto) / 0.25;
    valorResto = fmod(valorResto, 0.25);
    m010 = floor(valorResto / 0.10);
    valorResto = fmod(valorResto, 0.10);
    m005 = floor(valorResto / 0.05);
    valorResto = fmod(valorResto, 0.05);
    m001 = floor(valorResto / 0.01);

    return printf("NOTAS:\n%.0lf nota(s) de R$ 100.00\n%.0lf nota(s) de R$ 50.00\n%.0lf nota(s) de R$ 20.00\n%.0lf nota(s) de R$ 10.00\n%.0lf nota(s) de R$ 5.00\n%.0lf nota(s) de R$ 2.00\nMOEDAS:\n%.0lf moeda(s) de R$ 1.00\n%.0lf moeda(s) de R$ 0.50\n%.0lf moeda(s) de R$ 0.25\n%.0lf moeda(s) de R$ 0.10\n%.0lf moeda(s) de R$ 0.05\n%.0lf moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001);
}