#include <stdio.h>
//Tendo como dados de entrada a altura de uma pessoa, 
//construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
int main(){
    float altura,peso_ideal;
    printf("Digite a sua altura : \n");
    scanf("%f", &altura);
    peso_ideal = (72.7*altura)-58;
    printf("Seu pedo ideal e : %.2f \n", peso_ideal);
    return (0);
}