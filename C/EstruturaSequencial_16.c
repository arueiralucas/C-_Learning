#include <stdio.h>
#include <math.h>
//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, 
//que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
int main (){
    float metros_pintura, metros_p1,latas, custo;
    printf("Quantos metros quadrados voce quer pintar ? : \n");
    scanf("%f", &metros_pintura);
    metros_p1 = (metros_pintura/3);
    latas = round(metros_p1/18);
    custo = latas*80.00;
    if  (latas >= 1){
        printf("A quantidade de litros usado para pintar e de aproximadamente :  %.2f \n", metros_p1);
        printf("Voce vai pracisar de %.0f latas de tinta no valor de R$ %.2f REAIS  \n ",latas,custo);
    }
    else {
        printf("So temos latas de 18 litros, e voce tem poco espaco para pintar ");

    }
    return (0);



}