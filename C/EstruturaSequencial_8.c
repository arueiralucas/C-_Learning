#include <stdio.h>
//Faça um Programa que pergunte quanto você ganha por hora e o número 
//de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
int main (){
float horas,valor_horas,total;

    printf("Quanto voce ganha por hora ? \n");
    scanf("%f", &horas);
    printf("Quanto voce ganha por hora ? \n ");
    scanf("%f", &valor_horas);
    total = horas*valor_horas;
    printf("O valor total :   %f",total);

return (0);
}