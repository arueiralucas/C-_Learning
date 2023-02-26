#include <stdio.h>
//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

int main(){
    float cel,fh;
    printf("Digite a temperatura em celsius : \n");
    scanf("%f",&cel);
    fh=((cel*1.8)+32);
    printf("A conversao em Fahrenheit e : %.2f",fh);
    return (0);
}