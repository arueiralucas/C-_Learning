#include <stdio.h>
//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
//C = 5 * ((F-32) / 9).
int main(){
    float fh,cel;
    printf("Digite a temperatura em Fahrenheit ");
    scanf("%f", &fh);
    cel = 5*((fh-32)/9);
    printf(" A converção em Celcius e : %.2f ", cel );
    return (0);    
}