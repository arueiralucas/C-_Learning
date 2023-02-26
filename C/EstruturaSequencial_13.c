#include <stdio.h>
//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
//utilizando as seguintes fórmulas:
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7
int main () {
    float altura,peso_ideal;
    char sexo;
    printf("Digite H para Homem e M Para Mulher : \n");
    scanf ("%c", &sexo);
    printf("Digite a sua Altura : \n");
    scanf("%f", &altura);
    if (sexo == 'M' ){
        peso_ideal = (72.2*altura)-58; 
        printf("Para Mulheres, seu pedo ideal e : %.2f \n", peso_ideal);
    }
    else if (sexo == 'H'){
        peso_ideal = (62.1*altura)-44.7;
        printf("Para Homens, seu pedo ideal e : %.2f \n", peso_ideal);
    }
    return (0);
}