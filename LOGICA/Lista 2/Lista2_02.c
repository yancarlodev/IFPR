#include <stdio.h>
#include <math.h>
 
int main(void)
{
	double raio, pi=3.14159, area;
	printf("Insira o raio: "); 
	scanf("%lf", &raio);
	area = pi * pow(raio, 2);

	return printf("A=%.4f\n", area);
}