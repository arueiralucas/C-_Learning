#include <stdio.h>
//Faça um Programa que converta metros para centímetros.
int main (){
    float metros, centimetros;
    printf("Digite o valor em metros : \n");
    scanf("%f", &metros);
    centimetros=metros*100;
    printf("A conversao em centimetros e em : %f \n",centimetros);
return (0);
}