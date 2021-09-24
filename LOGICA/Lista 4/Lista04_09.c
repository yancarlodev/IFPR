#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c, maior, mediano, menor;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a > b && a > c && b > c || b == c){
        maior = a;
        mediano = b;
        menor = c;
    }
    if(a > b && a > c && c > b || c == b){
        maior = a;
        mediano = c;
        menor = b;
    }
    if(b > a && b > c && a > c || a == c){
        maior = b;
        mediano = a;
        menor = c;
    }
    if(b > a && b > c && c > a || c == a){
        maior = b;
        mediano = c;
        menor = a;
    }
    if(c > b && c > a && a > b || a == b){
        maior = c;
        mediano = a;
        menor = b;
    }
    if(c > b && c > a && b > a || b == a){
        maior = c;
        mediano = b;
        menor = a;
    }
    if(a == c && a > b){
        maior = a;
        mediano = c;
        menor = b;
    }
    if(b == c && b > a){
        maior = b;
        mediano = c;
        menor = a;
    }

if(maior >= (mediano+menor)){
    printf("NAO FORMA TRIANGULO\n");
} else if(pow(maior, 2) == pow(mediano, 2)+ pow(menor, 2)){
    printf("TRIANGULO RETANGULO\n");
} else if(pow(maior, 2) > pow(mediano, 2) + pow(menor, 2)){
    printf("TRIANGULO OBTUSANGULO\n");
} else if(pow(maior, 2) < pow(mediano, 2) + pow(menor, 2)){
    printf("TRIANGULO ACUTANGULO\n");
}

if(maior == mediano && mediano == menor){
    printf("TRIANGULO EQUILATERO\n");
}
if(maior == mediano && maior != menor || mediano == menor && mediano != maior || menor == maior && menor != mediano){
    printf("TRIANGULO ISOSCELES\n");
}
    return 0;
}